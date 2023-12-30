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
            cout << "New salary: " << salary;
        }

        void print() {
        cout << "Name....:" << fullName << endl;
        cout << "Age.....: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Salary: " << salary << endl;
}
    };

int main() {

    Employee employees[] = {};

    Employee anEmployee;

    anEmployee.insert("Lucas Pio", 15, 'M', 7984.99);

    anEmployee.print();

    anEmployee.giveRise(400);

    return 0;
}

