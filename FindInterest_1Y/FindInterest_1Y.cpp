// FindInterest_1Y.cpp

#include <iostream>
using namespace std;
void Input(float&, float&);
void FindInterest(float, float, float&);
float FindCompound(float, float);
void Output(float, float, float);

int main()
{
    float deposit,interest, rate ,compound;
    Input(deposit, rate);
    FindInterest(deposit, rate, interest);
    compound = FindCompound(deposit, interest);
    Output(deposit, interest, compound);
    return 0;
}

void Input(float& d, float& r)
{
    cout << "deposit = ?"; cin >> d;
    cout << "rate = ?"; cin >> r;
}

void FindInterest(float d, float r, float& i)
{
    i = r / 100 * d;
}

float FindCompound(float d, float i)
{
    return d + i;
}

void Output(float d, float i, float c)
{
    cout << " deposit = " << d << endl;
    cout << " interest = " << i << endl;
    cout << " compound interest = " << c << endl;
}