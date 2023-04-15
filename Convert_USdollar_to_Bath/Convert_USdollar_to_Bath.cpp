// Convert_USdollar_to_Bath.cpp

#include <iostream>
using namespace std;
float Exchange(float);
void Output(float, float);


int main()
{
    float dollar, bath;
    cout << "dollar=?"; cin >> dollar;
    bath = Exchange(dollar);
    Output(dollar, bath);

    return 0;
}

float Exchange(float d)
{
    float out;
    out = 34.3580 * d;
    return out;
}

void Output(float d, float b)
{
    cout << d << " Dollar = " << b << " Bath"<< endl;
}