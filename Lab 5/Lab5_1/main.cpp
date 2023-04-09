#include <iostream>
#include <string.h>

using namespace std;

class Employee
{
private:
    int id;
    int salary;
    char* name;
    char* company_name;
    static int Count;

public:
    void set_id(int i);
    void get_id();
    void set_salary(int s);
    void get_salary();
    void set_name(char n[]);
    void get_name();
    void set_CompanyName(char cn[]);
    void get_CompanyName();
    static int get_count()
    {
        return Count;
    }

    Employee(int i, int s, char n[], char cn[])
    {
        id = i;
        salary = s;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        company_name = new char[strlen(cn) + 1];
        strcpy(company_name, cn);
        Count++;
    }

    Employee()
    {
        id = salary = NULL;
        name = "Unknown";
        company_name = "Unknown";
        Count++;
    }
    ~Employee()
    {
        Count--;
        delete(name);
    }


};
int Employee :: Count = 0;

int main()
{
    /*
    Employee emp1;
    emp1.get_id();
    emp1.get_name();
    emp1.get_CompanyName();
    emp1.get_salary();
    cout << "The object numbers is : " << Employee::get_count() << endl;

    Employee emp2(0, 8000, "Mohanad", "Schneider");
    emp2.get_id();
    emp2.get_name();
    emp2.get_salary();
    emp2.get_CompanyName();
    cout << "The object numbers is : " << Employee::get_count() << endl;
    */

/*
    Employee emp1[3];
    for (int i = 0; i < 3; i++)
    {
        emp[i].get_id();
        emp[i].get_name();
        emp[i].get_salary();
        emp[i].get_CompanyName();
    }
    */


    Employee emp2[3] = {Employee(), Employee(0, 8000, "Mohanad", "Schneider"),Employee(1, 7000, "Ahmed", "Abb")};
    for (int i = 0; i < 3; i++)
    {
        emp2[i].get_id();
        emp2[i].get_name();
        emp2[i].get_salary();
        emp2[i].get_CompanyName();
    }

    return 0;
}

void Employee::set_id(int i)
{
    id = i;
}

void Employee::get_id()
{
    cout << "The Employee id = " << id <<endl;
}

void Employee::set_salary(int s)
{
    salary = s;
}

void Employee::get_salary()
{
    cout << "The Employee salary = " << salary <<endl;
}

void Employee::set_name(char n[])
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

void Employee::get_name()
{
    cout << "The Employee name = " << name <<endl;
}

void Employee::set_CompanyName(char cn[])
{
    company_name = new char[strlen(cn) + 1];
    strcpy(company_name, cn);
}

void Employee:: get_CompanyName()
{
    cout << "The Employee company = " << company_name <<endl;
}
