#include <iostream>

using namespace std;

struct Employee {
        string fullName;
        int age;
        char gender;
        double salary;

        void insert(string stFullName, int stAge, char stGender, double stSalary) {
            fullName = stFullName;
            age = stAge;
            gender = stGender;
            salary = stSalary; 
        }

        void giveRise(double rise) {
            salary += rise;
            cout << "New salary of "<< fullName << ": " << salary;
        }

        void print() {
        cout << "\n-------------------------------\n\n";
        cout << "Name....: " << fullName << endl;
        cout << "Age.....: " << age << endl;
        cout << "Gender..: " << gender << endl;
        cout << "Salary..: " << salary << endl;
}
    };

int main() {

    Employee *employees = new Employee[3];

    employees[0].insert("John Doe", 30, 'M', 50000.0);
    employees[1].insert("Alice Johnson", 25, 'F', 60000.0);
    employees[2].insert("Bob Smith", 35, 'M', 55000.0);

    for (int i = 0; i < 3; i++) {
        employees[i].print();
        employees[i].giveRise(430);
    } 

    return 0;
}

