#include <iostream>
#include <cmath>
using namespace std;
// Base class
class Shape
{
    public:
    // pure virtual function providing interface framework.
    virtual double getArea() = 0;
    void setRadius(double r)
    {
        radius = r;
    }
    
    protected:
        double radius;

};

class circle: public Shape
{
    public:
    double getArea()
    {
        return M_PI * pow((radius), 2);
    }
};
int main(void)
{
    circle cir;
    cir.setRadius(5);
    
    // Print the area of the object.
    cout << "Total Triangle area: " << cir.getArea() << endl;
    return 0;
}