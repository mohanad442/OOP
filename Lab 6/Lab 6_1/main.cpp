#include <iostream>
#include <math.h>

using namespace std;
class point
{
private:
    int x;
    int y;
public:
    void SetX(int m);
    void SetY(int n);
    int GetX();
    int GetY();

    point()
    {
        x = y = 0;
    }

    point(int m, int n)
    {
        x = m;
        y = n;
    }
};

class circle
{
private:
    point p1, p2;
    int radius;
public:
    circle(int x1, int y1, int x2, int y2): p1(x1,y1),p2(x2,y2)
    {
        radius = sqrt(pow((p2.GetX() - p1.GetX()),2) + pow((p2.GetY() - p1.GetY()), 2));
    }
    void set_p1(int m, int n);
    void set_p2(int m, int n);
    void get_radius();
    void get_area();
    void get_circumference();

};


int main()
{
    circle c1(6,3,2,5);
    c1.get_radius();
    c1.get_area();
    c1.get_circumference();
    return 0;
}


void point::SetX(int m)
{
    x = m;
}

void point::SetY(int n)
{
    y = n;
}
int point::GetX()
{
    return x;
}

int point::GetY()
{
    return y;
}
void circle::set_p1(int m, int n)
{
    p1.SetX(m);
    p1.SetY(n);
    radius = sqrt(pow((p2.GetX() - p1.GetX()),2) + pow((p2.GetY() - p1.GetY()), 2));
}
void circle::set_p2(int m, int n)
{
    p2.SetX(m);
    p2.SetY(n);
    radius = sqrt(pow((p2.GetX() - p1.GetX()),2) + pow((p2.GetY() - p1.GetY()), 2));
}

void circle:: get_radius()
{
    cout << "The radius of the circle = " << radius << endl;
}
void circle:: get_area()
{
    float pi = 3.14;
    cout << "The area of the circle = " << pi * pow(radius,2) << endl;
}
void circle:: get_circumference()
{
    float pi = 3.14;
    cout << "The circumference of the circle = " << 2 * pi * radius << endl;
}
