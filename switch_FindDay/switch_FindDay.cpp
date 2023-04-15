// switch_FindDay.cpp

#include <iostream>
using namespace std;
void Input(int&, int&);
int FindDay(int, int);
void FindOutput(int, int, int);


int main()
{
    int month, year, day;
    Input(month, year);
    day = FindDay(month, year);
    FindOutput(day, month, year);
    return 0;
}
void Input(int& m, int& y)
{
    cout << " month =? "; cin >> m;
    cout << " year =? "; cin >> y;
}
int FindDay(int m, int y)
{
    switch (m)
    {
    case 1:case 3: case 5: case 7:case 8:case 10:case 12:
        return 31; 
    case 4:case 6:case 9:case 11:
        return 30; 
    case 2:if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        return 29; 
          else
        return 28;
    }  
}
void FindOutput(int d, int m, int y)
{
    cout << d;
    switch (m)
    {
    case 1:cout << " January "; break; case 2:cout << " Febuary "; break;
    case 3:cout << " March "; break; case 4:cout << " April "; break;
    case 5:cout << " May "; break; case 6:cout << " June "; break;
    case 7:cout << " July "; break; case 8:cout << " August "; break;
    case 9:cout << " September "; break; case 10:" October "; break;
    case 11:cout << " November "; break; case 12:cout << " December "; break;             
    }
    cout << y << endl;
}