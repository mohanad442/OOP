#include <iostream>
#include <string>

using namespace std;

// •	Write Structure Employee (ID, Name,Job, and Salary)

struct Employee
{
    int id;
    string name;
    int salary;
    string job;
};

// •	Fill the allocated array and then print it.
void get_data(Employee arr[], int number_of_struct);

void Display_emps(Employee arr[], int number_of_struct);

// •	Make a function with default argument values and use it.
int volume(int length = 2, int width = 3, int height = 4);

// •	Try the scope operator
void scope_vlaue();

// Declaring a global variable
int x = 5;


int main()
{
    cout << endl << "Question 1 : Write Structure Employee (ID, Name, and Salary)." << endl;
    cout << endl << "Question 2 : Make a pointer to the structure and allocate it with a number read by the user" << endl;
    cout << "*************************************************" << endl << endl;

    // •	Make a pointer to the structure and allocate it with a number read by the user
    int number_of_struct;
    Employee *ptr;
    cout<< "Enter the number to allocate the structure : ";
    cin >> number_of_struct;
    ptr = new Employee[number_of_struct];

    cout << endl << "Question 3 : Fill the allocated array and then print it." << endl;
    cout << "*************************************************" << endl << endl;
    get_data(ptr, number_of_struct);

    Display_emps(ptr, number_of_struct);


    cout << endl << "Question 4 : Make a function with default argument values and use it." << endl;
    cout << "*************************************************" << endl << endl;

    int V1, V2, V3, V4;
    V1 = volume();
    cout << "The default volume is : " << V1 << endl;
    V2 = volume(5);
    cout << "The volume with modified length is : " << V2 << endl;
    V3 = volume(5,6);
    cout << "The volume with modified (length,width) is : " << V3 << endl;
    V4 = volume(5,6,7);
    cout << "The volume with modified (length, width, height) is : " << V4 << endl;


    cout << endl << "Question 5 : Try the scope operator" << endl;
    cout << "*************************************************" << endl << endl;
    scope_vlaue();

    return 0;
}


void get_data(Employee arr[], int number_of_struct)
{
    for (int i = 0; i < number_of_struct; i++)
    {
        cout << "Enter the Employee id for employee number :" << i+1 << endl;
        cin >> arr[i].id;
        cout << "Enter the Employee name for employee number :" << i+1 << endl;
        cin >> arr[i].name;
        cout << "Enter the Employee job for employee number :" << i+1 << endl;
        cin >> arr[i].job;
        cout << "Enter the Employee salary for employee number :" << i+1 << endl;
        cin >> arr[i].salary;
    }
}

void Display_emps(Employee arr[], int number_of_struct)
{
    for(int i = 0; i < number_of_struct; i++)
    {
        cout << endl << "The Employee id: " << arr[i].id << endl;
        cout << "The Employee name: " << arr[i].name << endl;
        cout << "The Employee job: " << arr[i].job << endl;
        cout << "The Employee salary: " << arr[i].salary << endl;

        cout << "*************************************************" << endl;

    }
}


int volume(int length, int width, int height)
{
    return length * width * height;
}


void scope_vlaue()
{
    int x = 10;
    cout << "The global value of X is equal " << ::x << endl;
    cout << "The local value of X is equal " << x << endl;
}
