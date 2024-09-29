#include <iostream>
#include <cmath>  // to get the value of π
using namespace std;
// Base class
class Shape
{
public:
 // pure virtual function providing interface framework.
 virtual int getArea() = 0;
 void setWidth(int w)
 {
 width = w;
 }
 void setHeight(int h)
 {
 height = h;
 }
protected:
 int width;
 int height;
 };
class Triangle: public Shape
{
public:
 int getArea()
 {
 return (width * height)/2;
 }
};

// Derived class for Circle
class Circle : public Shape
{
    public:
    // Constructor to initialize the radius
    Circle(int r)
    {
        radius = r;
    }

    // Override the getArea() method to calculate the area of the circle
    int getArea()
    {
        return M_PI * radius * radius;
    }

    private:
        int radius; // Member variable for the radius
};

int main(void)
{
 Triangle Tri;
 Tri.setWidth(5);
 Tri.setHeight(7);
 // Print the area of the object.
 cout << "Total Triangle area: " << Tri.getArea() << endl;

 // Circle example
 Circle Circ(5); // Circle initialized with radius 5
 // Print the area of the circle
 cout << "Total Circle area: " << Circ.getArea() << endl;

    return 0;
}
