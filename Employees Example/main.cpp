#include <iostream>
#include <string>

using namespace std;

struct Employee{
    int id;
    string name;
    string job;
    float salary;
    float bonus;
    float net_salary;
};
void data_entry(Employee arr[], int size);
void set_bonus(Employee &e, float percent);
void Display_emps(Employee arr[], int size);

int main()
{
    int number_of_employees;

    cout<< "Enter the number of employees\n";
    cin>> number_of_employees;
    Employee emps[number_of_employees];

    data_entry(emps, number_of_employees);

    set_bonus(emps[1], 0.10f);

    Display_emps(emps, number_of_employees);

    return 0;
}

void data_entry(Employee arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "Enter the Employee id for employee number :" << i+1 << "\n";
        cin >> arr[i].id;
        cout << "Enter the Employee name for employee number :" << i+1 << "\n";
        cin >> arr[i].name;
        cout << "Enter the Employee job for employee number :" << i+1 << "\n";
        cin >> arr[i].job;

        if (arr[i].job == "Manager")
        {
            arr[i].salary = 15000;
        }
        else if (arr[i].job == "Engineer")
        {
            arr[i].salary = 8000;
        }
        else if (arr[i].job == "Clerk")
        {
            arr[i].salary = 5000;
        }
        else
        {
            arr[i].salary = 3000;
        }
        arr[i].net_salary = arr[i].salary + arr[i].bonus;
    }
}

void set_bonus(Employee &e, float percent)
{
    e.bonus = e.salary * percent;
    e.net_salary = e.salary + e.bonus;
}

void Display_emps(Employee arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "The Employee id: " << arr[i].id << "\n";
        cout << "The Employee name: " << arr[i].name << "\n";
        cout << "The Employee job: " << arr[i].job << "\n";
        cout << "The Employee salary: " << arr[i].salary << "\n";
        cout << "The Employee bonus: " << arr[i].bonus << "\n";
        cout << "The Employee Net-salary: " << arr[i].net_salary << "\n";

        cout << "*************************************************\n";

    }
}
