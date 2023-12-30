#include <stdio.h>
#include <stdlib.h>
#include <xlsxwriter.h>

#define MAX_CLIENTES 100

struct Cliente {
    int age;
    char full_name[50];
    char cpf[15];
};

void adicionarCliente(struct Cliente clientes[], int *numClientes) {
    if (*numClientes < MAX_CLIENTES) {
        printf("\nAdicionar Cliente:\n");
        printf("Idade: ");
        scanf("%d", &clientes[*numClientes].age);
        printf("Nome Completo: ");
        scanf("%s", clientes[*numClientes].full_name);
        printf("CPF: ");
        scanf("%s", clientes[*numClientes].cpf);

        (*numClientes)++;
        printf("Cliente adicionado com sucesso!\n");
    } else {
        printf("Limite máximo de clientes atingido!\n");
    }
}

void exibirClientes(struct Cliente clientes[], int numClientes) {
    printf("\nClientes Cadastrados:\n");
    printf("ID\tIdade\tNome\tCPF\n");
    for (int i = 0; i < numClientes; ++i) {
        printf("%d\t%d\t%s\t%s\n", i + 1, clientes[i].age, clientes[i].full_name, clientes[i].cpf);
    }
}

void salvarClientesEmExcel(struct Cliente clientes[], int numClientes) {
    lxw_workbook *workbook = workbook_new("clientes.xlsx");
    lxw_worksheet *worksheet = workbook_add_worksheet(workbook, NULL);

    lxw_format *header_format = workbook_add_format(workbook);
    format_set_bold(header_format);

    worksheet_write_string(worksheet, 0, 0, "ID", header_format);
    worksheet_write_string(worksheet, 0, 1, "Idade", header_format);
    worksheet_write_string(worksheet, 0, 2, "Nome", header_format);
    worksheet_write_string(worksheet, 0, 3, "CPF", header_format);

    for (int i = 0; i < numClientes; ++i) {
        worksheet_write_number(worksheet, i + 1, 0, i + 1, NULL);
        worksheet_write_number(worksheet, i + 1, 1, clientes[i].age, NULL);
        worksheet_write_string(worksheet, i + 1, 2, clientes[i].full_name, NULL);
        worksheet_write_string(worksheet, i + 1, 3, clientes[i].cpf, NULL);
    }

    workbook_close(workbook);
    printf("Dados dos clientes salvos no arquivo 'clientes.xlsx'.\n");
}

int main() {
    struct Cliente clientes[MAX_CLIENTES];
    int numClientes = 0;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar Cliente\n");
        printf("2. Exibir Clientes\n");
        printf("3. Salvar Clientes em Excel\n");
        printf("4. Sair\n");
        printf("Escolha a opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarCliente(clientes, &numClientes);
                break;
            case 2:
                exibirClientes(clientes, numClientes);
                break;
            case 3:
                salvarClientesEmExcel(clientes, numClientes);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 4);

    return 0;
}
