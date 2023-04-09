#include <iostream>
using namespace std;
//•	Convert your Employee structure to a class and all its data will be private(the name will be char *).
//•	Write setter and getter for each property in your class (it must be public).

class Employee
{
    private:
        int id;
        int salary;
        char* name;
    public:
        void set_data();
        void print_data();

};

int main()
{
    Employee emp;
    emp.set_data();
    emp.print_data();

    return 0;
}
void Employee::set_data()
{
    cout << "Enter the Employee id for employee :" ;
    cin >> id;
    cout << "Enter the Employee name for employee :";
    cin.get(name);
    cout << "Enter the Employee salary for employee :";
    cin >> salary;
}

void Employee::print_data()
{
    cout << "The Employee id: " << id << endl;
    cout << "The Employee name: " << name << endl;
    cout << "The Employee salary: " << salary << endl;
}
