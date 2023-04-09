#include <iostream>
#include <string.h>
using namespace std;
class person
{
private:
    int id;
    char* name;
public:
    void set_id(int i);
    void get_id();
    void set_name(char n[]);
    void get_name();
    void print();

    person()
    {
        id = 0;
        name = "Unknown";
    }

};

class Employee : public person
{
private:
    char* CompanyName;
public:
    void set_CompanyName(char n[]);
    void get_CompanyName();
    Employee()
    {
        CompanyName = "Unknown";
    }
    void print();

};

int main()
{
    Employee emp;
    emp.get_id();
    emp.get_name();
    emp.get_CompanyName();

    emp.set_CompanyName("Schneider");
    emp.set_id(1);
    emp.set_name("Mohanad");
    emp.person::print();
    emp.Employee::print();



    return 0;
}


void person::set_id(int i)
{
    id = i;
}
void person::get_id()
{
    cout << "The id = " << id << endl;
}
void person::set_name(char n[])
{
    name = new char[strlen(n) + 1];
    name = strcpy(name, n);
}
void person::get_name()
{
    cout << "The name = " << name << endl;
}

void Employee:: set_CompanyName(char n[])
{
    CompanyName = new char[strlen(n) + 1];
    CompanyName = strcpy(CompanyName, n);
}

void Employee:: get_CompanyName()
{
    cout << "The company name is " << CompanyName << endl;
}

void Employee:: print()
{
    cout << "The company name is " << CompanyName << endl;
}

void person:: print()
{
    cout << "The id = " << id << endl;
    cout << "The name = " << name << endl;
}
