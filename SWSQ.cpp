#include <iostream>
#include <math.h>

using namespace std;

// Base class
class Shape
{
public:
   // pure virtual function providing interface framework.
   virtual int getArea() = 0;
   void setRadius(int h)
   {
      radius = h;
   }
protected:
   int radius;


};

class Circle: public Shape
{
public:
   int getArea()
   {
      return M_PI*pow((radius),2);
   }
};

int main(void)
{
   Circle  Cir;

   Cir.setRadius(5);
   // Print the area of the object.
   cout << "Total Circle area: " << Cir.getArea() << endl;

   return 0;
}