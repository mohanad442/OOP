#include <iostream>
#include <math.h>

using namespace std;
class point
{
private:
    int x,y;
public:
    point(){x = y = 0;}
    point(int m, int n){x = m; y = n;}
    void setX(int m){x = m;}
    void setY(int m){y = m;}
    int GetX(){return x;}
    int GetY(){return y;}
};

class rectangle
{
private:
    int length, width;
public:
    rectangle(point& p1, point& p2)
    {

            length = abs(p2.GetX() - p1.GetX());
            width = abs(p2.GetY() - p1.GetY());


    }

    int area(){return length * width;}
};

int main()
{
    point p1(3,5);
    point p2(1,8);
    rectangle r(p1, p2);
    cout << r.area() << endl;
    return 0;
}
