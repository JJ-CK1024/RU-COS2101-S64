// Exponents_234.cpp

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int v_Basenumber; //input
    int v_power2, v_power3, v_power4; //output

    cout << "Base number = "; cin >> v_Basenumber;
    
    v_power2 = pow(v_Basenumber, 2); //process
    v_power3 = pow(v_Basenumber, 3); //process
    v_power4 = pow(v_Basenumber, 4); //process
    cout<< v_Basenumber << " to the power two = " << v_power2 << endl;
    cout<< v_Basenumber << " to the power three = " << v_power3 << endl;
    cout<< v_Basenumber << " to the power four = " << v_power4 << endl;

    return 0;
}