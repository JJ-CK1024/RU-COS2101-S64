// Area_Triangle_Rectangle.cpp

#include <iostream>
using namespace std;
float FindTriangle(float, float);
float FindRectangle(float, float);


int main()
{
    float base, height,area1,area2;
    cout << "Base = ? "; cin >> base;
    cout << "Height = ? "; cin >> height;
    cout << "Area of Triangle = " << FindTriangle(base, height) << endl;
    cout << "Area of Rectangle = " << FindRectangle(base, height) << endl;
       
    return 0;
}

float FindTriangle(float b, float h)
{
    return 0.5 * b * h;
}

float FindRectangle(float b, float h)
{
    return b * h;
}