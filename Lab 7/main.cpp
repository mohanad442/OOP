#include <iostream>

using namespace std;
class shape
{
private:
    int dim1, dim2;
public:
    shape(){dim1 = dim2 = 0;}
    shape(int m, int n){dim1 = m; dim2 = n;}
    virtual float area() = 0;
};

class rectangle : public shape
{
private:
    int length, width;
public:
    rectangle(){length = width = 0;}
    rectangle(int l, int w){length = l; width = w;}
    float area(){return length * width;}
};

class circle : public shape
{
private:
    int radius;
public:
    circle(){radius = 0;}
    circle(int r){radius = r;}
    float area(){return 3.14 * radius * radius;}
};



int main()
{
    rectangle r(5,4);
    circle c(2);
    shape* ptr;
    ptr = &r;
    cout << ptr->area() << endl;
    ptr = &c;
    cout << ptr->area() << endl;

    return 0;
}
