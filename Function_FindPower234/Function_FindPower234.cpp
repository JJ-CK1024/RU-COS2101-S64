// Function_FindPower234.cpp

#include <iostream>
using namespace std;
float FindPower2(float);
float FindPower3(float);
float FindPower4(float);


int main()
{
    float n, power2, power3, power4;
    cout << "n=?"; cin >> n;
    power2 = FindPower2(n);
    power3 = FindPower3(n);
    power4 = FindPower4(n);
    cout << n << "^2=" << power2 << endl;
    cout << n << "^3=" << power3 << endl;
    cout << n << "^4=" << power4 << endl;
    
    return 0;
}

//Function
float FindPower2(float x)
{
    float output;
    output = x * x;
    return output;
}

float FindPower3(float x)
{
    return x*x*x;
}

float FindPower4(float x)
{
    return FindPower2(x)*FindPower2(x);
}