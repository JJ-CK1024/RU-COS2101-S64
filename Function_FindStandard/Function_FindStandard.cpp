// Function_FindStandard.cpp

#include <iostream>
using namespace std;
void Input(int&, float&, float&);
float FindStandard(int, float);
void FindOutput(float, float);

int main()
{
    int sex;
    float height, weight, standard;
    Input(sex, height, weight);
    standard = FindStandard(sex, height);
    FindOutput(weight, standard);
    return 0;
}
void Input(int& s, float& h, float& w)
{
    cout << "put 0-female or 1-male =? "; cin >> s;
    cout << "height =? "; cin >> h;
    cout << "weight =? "; cin >> w;
}
float FindStandard(int s, float h)
{
    if (s == 0)
        return(h - 150) * 0.7 + 45;
    else
        return(h - 150) * 0.7 + 50;
}
void FindOutput(float w, float s)
{
    cout << "real weight =" << w << endl;
    cout << "standard weight " << s << endl;
    if (w < s - 5)
        cout << "You are thin" << endl;
    else if (w > s + 5)
        cout << "You are fat" << endl;
    else
        cout << "You are slender" << endl;
}