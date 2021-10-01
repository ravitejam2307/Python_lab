#include<iostream>
#include<string>
using namespace std;

//base class
  class Shape {
    protected:
        string name;
    public:
         Shape(string n){ name = n;};
         void setName(string n){ name = n;};
         string getName() const { return name;};
         virtual double getArea() const=0; //pure virtual Function
         };

//first child class
  class Circle : public Shape {
        private: double radius;
        public : Circle(string n, double r): Shape(n){ radius = r;};
        void setName(string n){ name = n;};
        void setRadius(double r){radius = r;};
        double getRadius() const{ return radius;};
        double getArea() const{ return 3.14*radius*radius;};
        };

//second child class
   class Rectangle : public Shape {
         private : double a,b;
         public  : Rectangle(string n,double width, double height):Shape(n)
         {
          a = width;
          b = height;
         };
         void setA(double width){ a = width; };
         void setB(double height){ b = height; };
         double getA() const{ return a;};
         double getB() const{ return b;};
         double getArea() const{ return a*b;};
         };
//Third child class
    class Triangle : public Shape {
          private : double a,h;
          public  : Triangle(string n,double aa,double hh):Shape(n)
          {
           a = aa;
           h = hh;
          };
          void setA(double aa){ a = aa; };
          void setH(double hh){ h = hh; };
          double getA() const { return a;};
          double getH() const { return h;};
          double getArea() const{ return 0.5*a*h;};
          };
//Main
    int main(){
    Shape *a[3] = { new Circle("Circle",4), new Rectangle("Rectangle",2,8),new Triangle("Triangle",9,11)};

    //print area of all the shapes..
      for(int i=0;i<3;i++)
          cout << a[i]-> getName() <<" "<<a[i]->getArea() << endl;
      return 0;
    }
