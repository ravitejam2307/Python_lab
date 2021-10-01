#include <iostream>
using namespace std;

class Shape
{
  protected:
    double width, height;
  public:
    void set_data (double w, double h)
    {
        width = w;
        height = h;
    }
    virtual double area() = 0;
};

class Rectangle: public Shape
{
public:
    double area ()
    {
        return (width * height);
    }
};

class Triangle: public Shape
{
public:
    double area ()
    {
        return (width * height)/2;
    }
};


int main ()
{
    Shape *sPtr;

    Rectangle Rect;
    sPtr = &Rect;

    sPtr -> set_data (5,3);
    cout << "Area of Rectangle is " << sPtr -> area() << endl;

    Triangle Tri;
    sPtr = &Tri;

    sPtr -> set_data (4,6);
    cout << "Area of Triangle is " << sPtr -> area() << endl;

    return 0;
}
