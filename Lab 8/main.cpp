#include <iostream>
#include <string.h>

using namespace std;

class Person
{
protected:
    char* Name;
    int Age;
public:
    Person(){Name = "Unknow"; Age = 0;}
    Person(char n[], int A)
    {
        Name = new char[strlen(n) + 1];
        strcpy(Name, n);
        Age = A;
    }
    void SetName(char n[]);
    void GetName();
    void SetAge(int A);
    void GetAge();
    virtual int salary_calc() = 0;
};

class Employee : public Person
{
protected:
    int ID;
    int Department;
    int Salary;

public:
    Employee(){ID = Salary = Department =0;}
    int salary_calc();

    Employee(int id, int depart, char n[], int A) : Person(n, A)
    {
        ID = id;
        Department = depart;
        Salary = salary_calc();
    }

    void SetID(int i){ID = i;}
    void GetID(){cout << "The id is " << ID << endl;}
    void GetSalary(){cout << "The id is " << Salary << endl;}
};

class Manager : public Employee
{
private:
    int Manager_ssn;
public:
    int salary_calc(){ return Salary * 1.5; }
    Manager(int ssn, int id, int depart, char n[], int A) : Employee(id, depart, n, A)
    {
        Manager_ssn = ssn;
    }
    void ManSalary(){cout << "The id is " << salary_calc() << endl;}
};

class Total_salary
{
private:
    Person* p[4];

public:
    Total_salary(Person* p1, Person* p2, Person* p3, Person* p4)
    {
        p[0] = p1;
        p[1] = p2;
        p[2] = p3;
        p[3] = p4;
    }

    int total_sal()
    {
        int total = 0;
        for(int i = 0; i < 4; i++)
        {
            total += p[i]->salary_calc();
        }
        return total;
    }

};

int main()
{
    Employee e1(0, 1, "Mohanad", 25);
    Employee e2(1, 2, "Ahmed", 30);
    Employee e3(2, 3, "islam", 22);
    Manager m1(7, 3, 2, "Mohamed", 30);

    e1.GetName();
    e1.GetAge();
    e1.GetID();
    e1.GetSalary();

    e2.GetName();
    e2.GetAge();
    e2.GetID();
    e2.GetSalary();

    e3.GetName();
    e3.GetAge();
    e3.GetID();
    e3.GetSalary();

    m1.GetName();
    m1.GetAge();
    m1.GetID();
    m1.ManSalary();

    Total_salary T1(&e1, &e2, &e3, &m1);
    int total = T1.total_sal();
    cout << "Total salaries = " << total << endl;

    return 0;
}



void Person:: SetName(char n[])
{
    Name = new char [strlen(n) + 1];
    strcpy(Name, n);
}
void Person:: GetName()
{
    cout << "The Name is " << Name << endl;
}
void Person:: SetAge(int A)
{
    Age = A;
}
void Person:: GetAge()
{
    cout << "The Age is " << Age << endl;
}

int Employee :: salary_calc()
{
    switch (Department)
    {
    case 1:
        return 5000;
        break;
    case 2:
        return 6000;
        break;
    case 3:
        return 7000;
        break;
    default:
        Salary = 0;
        cout << "Please Enter a valid department number" << endl;
    }
}
