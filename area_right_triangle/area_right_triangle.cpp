// area_right_triangle.cpp

#include <iostream>
using namespace std;

int main()
{
    int base, high; //input
    float area; //output
    cout << "Base = "; cin >> base;
    cout << "High = "; cin >> high;
    area = 0.5 * base * high; //process
    cout << "area = "<<area<<endl;
    
    return 0;
}


