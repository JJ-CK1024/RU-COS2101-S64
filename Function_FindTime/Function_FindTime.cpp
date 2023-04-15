// Function_FindTime.cpp

#include <iostream>
using namespace std;
// Funtion Prototype
void Input(int&);
void FindTime(int, int&, int&, int&);
void Output(int, int, int);

int main()
{
    int total, hour, minute, second;
    Input(total);
    FindTime(total, hour, minute, second);
    Output(hour, minute, second);
    return 0;
}

void Input(int& t)
{
    cout << "Total second = ? ";
    cin >> t;
}
void FindTime(int t, int& h, int& m, int& s)
{
    h = t / 3600;
    m = t % 3600 / 60;
    s = t % 3600 % 60;
}
void Output(int h, int m, int s)
{
    cout << h << " hours " << m << " minutes " << s << " seconds " << endl;
}