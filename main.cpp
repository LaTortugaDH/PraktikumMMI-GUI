#include <iostream>

using namespace std;

namespace geometry
{
namespace forms
{
   struct Circle
    {
        double radius;
        double circumference;
        double area;
        Circle*  children[10];
    };
}
    namespace tools
    {
        const double PI   = 3.14159;
        static double radius;
        double readInRadius()
        {
            cout <<   "Type in a radius:";
            cin >> radius;
            return radius;
        }

        void printCircleValues(double radius)
        {
            cout << endl << "radius: "<< radius << endl;
            cout << "area: " << radius*radius*PI << endl;
            cout << "circumference: " << PI*radius*2 << endl;
        }

        void printCircleValues(Circle circle)//ToDo
        {
            cout << endl << "radius: "<< radius << endl;
            cout << "area: " << radius*radius*PI << endl;
            cout << "circumference: " << PI*radius*2 << endl;
        }

        void increaseCircleRadius(double& radius, double increment = 1)
        {
            radius+=increment;
        }

        void increaseCircleRadius(double* pRadius, double increment = 1)
        {
            *pRadius +=increment;
        }
    }


}


int main()
{
    //3.1
    double radius = geometry::tools::readInRadius();
    geometry::tools::printCircleValues(radius);

    //3.2
    geometry::tools::increaseCircleRadius(&radius); //   by   pointer
    geometry::tools::printCircleValues(radius);
    geometry::tools::increaseCircleRadius(radius);  //   by   reference
    geometry::tools::printCircleValues(radius);
    geometry::tools::increaseCircleRadius(radius,2);//   by   reference + 2nd arg
    geometry::tools::printCircleValues(radius);

    //   3.3

    geometry::forms::Circle circle1= {3,18.8495,28.2743,0};
    geometry::forms::Circle circle2= {4,25.1327,50.2654,0};






  /*
    // 1.2
    const double PI   = 3.14159;
    double radius;
    double circumference;
    double area;
    cout <<   "CIRCLE CALCULATOR\n" << endl;
    cout <<   "Type in a radius:";

    cin >> radius;
    cout << endl << "radius: "<< radius << endl;
    area = radius*radius*PI;
    cout << "area: " << area << endl;
    circumference = PI*radius*2;
    cout << "circumference: " << circumference << endl;

    // 1.3
    double increment;
    double* pRadius = &radius;
    cout << endl << "increase the radius by: ";
    cin >> increment;
    *pRadius += increment;

    cout << endl << "new radius: "<< radius << endl;
    area = radius*radius*PI;
    cout << "new area: " << area << endl;
    circumference = PI*radius*2;
    cout << "new circumference: " << circumference << endl;

    // 1.4
    cout << endl << "radius (rounded) : "<< (int)radius << endl;
    area = radius*radius*PI;
    cout << "area (rounded) : " << (int)area << endl;
    circumference = PI*radius*2;
    cout << "circumference (rounded) : " << (int)circumference << endl;
  */


    return 0;


}
