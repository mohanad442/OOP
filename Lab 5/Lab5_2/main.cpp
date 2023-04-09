#include <iostream>
#include <string.h>
#include <math.h>


class point
{
private:
    int x,y;

public:
    point()
    {
        x=y=0;
    }
    point(int m)
    {
        x = y = m;
    }
    point(int m, int n)
    {
        x = m;
        y = n;
    }

    void SetX(int m);
    void SetY(int n);
    int GetX();
    int GetY();
};

class rectangle
{
private:
    point p1, p2;
    int length, width;
public:
    rectangle(int x1, int y1, int x2, int y2):p1(x1,y1),p2(x2,y2)
    {
        length = abs(x2 - x1);
        width = abs(y2 - y1);
    }
    void Set_p1(int x, int y);
    void Set_p2(int x, int y);
    void get_area();
};

using namespace std;

int main()
{
    rectangle rect(3,5,8,2);
    rect.get_area();

    rect.Set_p1(2,4);
    rect.get_area();

    rect.Set_p2(6,9);
    rect.get_area();
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

void rectangle::Set_p1(int a, int b)
    {
        p1.SetX(a);
        p1.SetY(b);
        length = abs(a - p2.GetX());
        width = abs(b - p2.GetY());
    }

void rectangle::Set_p2(int a, int b)
    {
        p2.SetX(a);
        p2.SetY(b);
        length = abs(a - p1.GetX());
        width = abs(b - p1.GetY());
    }

void rectangle::get_area()
{
    int area = length * width;
    cout << "The area = " << area << endl;
}
