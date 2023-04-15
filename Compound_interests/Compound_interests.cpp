// Compound_interests.cpp

#include <iostream>

using namespace std;

int main()
{
    float capital, rate, interest, compound;
    cout << "Capital = "; cin >> capital;
    cout << "Rate = "; cin >> rate;
    interest = rate / 100 * capital;
    compound = capital + interest;
    cout << "Interest = " << interest << endl;
    cout << "Compound interest = " << compound << endl;
    return 0;
}


