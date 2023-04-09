#include <iostream>
#include<string.h>
using namespace std;


class Employee
{
    private:
        int id;
        int salary;
        char* name;
    public:
        void print_data();
        Employee FillEmp(int emp_id, char str[], int emp_salary);

        Employee()
        {
            id = 0;
            name = new char[10];
            strcpy(name, "Mohanad");
            salary = 10000;

        }
        Employee(int emp_id, char str[], int emp_salary)
        {
            id = emp_id;
            name = new char[strlen(str)+1];
            strcpy(name, str);
            salary = emp_salary;
        }
        Employee(Employee& emp)
        {
            id = emp.id;
            name = new char[20];
            strcpy(name, emp.name);
            salary = emp.salary;
        }


        ~Employee()
        {
            delete(name);
        }

};


int main()
{
    Employee emp;
    emp.print_data();

    Employee emp1(1, "ahmed", 5000);
    emp1.print_data();

    Employee emp2(emp1);
    emp2.print_data();

    Employee emp3;
    emp3 = emp3.FillEmp(2, "islam", 8000);
    emp3.print_data();


    return 0;
}


void Employee::print_data()
{
    cout << "The Employee id: " << id << endl;
    cout << "The Employee name: " << name << endl;
    cout << "The Employee salary: " << salary << endl;
}

Employee Employee::FillEmp(int emp_id, char str[], int emp_salary)
{
    id = emp_id;
    name = new char[strlen(str)+1];
    strcpy(name, str);
    salary = emp_salary;
    return *this;
}
