/*
program : this program is to calculate total circle
history : 2015/10/21 first release by huzhuang

*/

#include <iostream>

using namespace std;

const static double PI = 3.14;

class Circle
{
public :
    Circle(int radius){this->radius = radius;};
    Circle(Circle &C);
    int getRad() {return radius;}
    double getArea() const;
private :
    int radius;
};
Circle::Circle(Circle &C)
{
    this->radius = C.radius;
}
double Circle::getArea() const
{
    return PI*this->radius*this->radius;
}
int main()
{
    Circle a(2);
    cout << a.getArea() << endl;

    return 0;
}
