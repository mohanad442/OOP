#include <iostream>
// •	Try function overloading
int Sum(int x, int y);
int Sum(int x, int y, int z);
int Sum(int x, int y, int z, int a);


using namespace std;

int main()
{
    Sum(1,2);
    Sum(1,2,3);
    Sum(1,2,3,4);
    return 0;
}


int Sum(int x, int y)
{
    cout << "The sum of the numbers is = " << x + y << endl;
}

int Sum(int x, int y, int z)
{
    cout << "The sum of the numbers is = " <<  x + y + z << endl;
}

int Sum(int x, int y, int z, int a)
{
    cout << "The sum of the numbers is = " <<  x + y + z + a << endl;
}
