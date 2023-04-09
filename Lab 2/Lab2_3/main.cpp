#include <iostream>
using namespace std;


// •	Write a swap function that takes a reference for tow variables and swaps values.

void Swap(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 3;
    int y = 4;

    cout << "Before swapping, X = " << x << ", Y = " << y <<endl;
    Swap(x,y);
    cout << "After swapping, X = " << x << ", Y = " << y <<endl;
    return 0;
}
