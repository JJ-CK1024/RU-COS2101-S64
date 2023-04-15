// Function_Celsius_Fahrenheit.cpp

#include <iostream>
using namespace std;

float FindCelsius(float);
float FindFahrenheit(float);

int main()
{
    float depth, Celsius, Fahrenheit;
    cout << "depth =?"; cin >> depth;
    Celsius = FindCelsius(depth);
    Fahrenheit = FindFahrenheit(Celsius);
    cout << "Celsius = " << Celsius << endl;
    cout << "Fahrenheit = " << Fahrenheit << endl;

    return 0;
}
//Function
float FindCelsius(float d)
{
    return 10 * d + 20;
}

float FindFahrenheit(float c)
{
    return 1.8 * c + 32;
}