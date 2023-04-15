// Function_FindMax.cpp

#include <iostream>
using namespace std;
void Input(int&, int&, int&);
int FindMax(int, int, int);
void Output(int);

int main()
{
    int n1, n2, n3, max;
    Input(n1, n2, n3);
    max = FindMax(n1, n2, n3);
    Output(max);
    
    return 0;
}

void Input(int& n1, int& n2, int& n3)
{
    cout << "n1=?"; cin >> n1;
    cout << "n2=?"; cin >> n2;
    cout << "n3=?"; cin >> n3;
}
int FindMax(int n1, int n2, int n3)
{
    int max;
    max = n1;
    if (n2 > max)
        max = n2;
    if (n3 > max)
        max = n3;
    return max;
}
void Output(int max)
{
    cout << "maximum=" << max << endl;
}