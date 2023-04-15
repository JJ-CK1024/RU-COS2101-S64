// Fixed_Deposit.cpp

#include <iostream>
using namespace std;
const float WTAX = 1; //Withholding tax 
float FindInr12mounths(float, float);
float FindInr6mounths(float, float);
float FindInr3mounths(float, float);


int main()
{
    float v_Capital, v_Interst;
    cout << "Capital = ? :"; cin >> v_Capital;
    cout << "Interest rate per annum = ? "; cin >> v_Interst;
    cout << "Fixed Deposit 12 mouths (Per 12 mouths) = " << FindInr12mounths(v_Capital, v_Interst) << endl;
    cout << "Fixed Deposit  6 mouths (Per 12 mouths) = " << FindInr6mounths(v_Capital, v_Interst) << endl;
    cout << "Fixed Deposit  3 mouths (Per 12 mouths) = " << FindInr3mounths(v_Capital, v_Interst) << endl;

    return 0;
}

float FindInr12mounths(float c, float r)
{
    float v_Intr;
    v_Intr = (r / 100) * WTAX;
    return c + (c * v_Intr);
}

float FindInr6mounths(float c, float r)
{
    float c1, c2, v_Intr;
    v_Intr = (r / 100) * WTAX;
    c1 = c + (c * v_Intr * 181 / 365);
    c2 = c1 + (c1 * v_Intr* 184 / 365);
        
    return c2;
}

float FindInr3mounths(float c, float r)
{
    float c1, c2, c3, c4, v_Intr;
    v_Intr = (r / 100) * WTAX;
    c1 = c + (c * v_Intr * 90 / 365);
    c2 = c1 + (c1 * v_Intr * 91 / 365);
    c3 = c2 + (c2 * v_Intr * 92 / 365);
    c4 = c3 + (c3 * v_Intr * 92 / 365);

        return c4;
}