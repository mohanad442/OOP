#include <iostream>

using namespace std;
class complex
{
private:
    int real, imag;
public:
    complex(){real = imag = 0;}
    complex(int m){real = imag = m;}
    complex(int m, int n){real = m; imag = n;}
    void setR(int r){real = r;}
    void setI(int i){imag = i;}
    int GetR(){return real;}
    int GetI(){return imag;}
    complex operator+(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    complex operator+(int m)
    {
        complex temp(real + m, imag);
        return temp;
    }
    complex operator++()
    {
        real++;
        imag++;
        return *this;
    }
    complex operator++(int)
    {
        complex old;
        old = *this;
        real++;
        imag++;
        return old;
    }
    int operator==(complex c)
    {
        return ((real == c.real) && (imag == c.imag));

    }
    complex& operator=(complex c)
    {
        real = c.real;
        imag = c.imag;
        return *this;
    }
    friend complex operator+(int m, complex c);

};

complex operator+(int m, complex c)
{
    complex temp;
    temp.real = c.real + m;
    temp.imag = c.imag;
    return temp;
}

int main()
{
    complex c1(3);
    complex c2(1,4);
    complex c3;
    c3 = ++c2;
    cout << "real = " << c3.GetR() << "  imag = " << c3.GetI() << endl;
    c3 = c2;
    cout << "real = " << c3.GetR() << "  imag = " << c3.GetI() << endl;
    int m;
    if (c1 == c2)
    {
        m = 1;
    }
    else {m = 0;}
    cout << m <<endl;

    c3 = c1;
    cout << "real = " << c3.GetR() << "  imag = " << c3.GetI() << endl;
    return 0;
}
