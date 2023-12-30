#include <iostream> 
#include <list>
using namespace std;

int main() {

    list<int> aula;
    int tam;
    list<int>::iterator it;
    tam=10;

    for (int i=0; i<tam; i++) {
        aula.push_front(i);
    }

    it = aula.begin();
    advance(it, 5);
    aula.insert(it, 0);

    aula.erase(it);

    cout << "Tamanho da lista: " << aula.size() << "\n\n";
    tam=aula.size();

    for (int i=0; i<tam; i++) {
        cout << aula.front() << "\n";
        aula.pop_front();  
    }
   
    return 0;
}