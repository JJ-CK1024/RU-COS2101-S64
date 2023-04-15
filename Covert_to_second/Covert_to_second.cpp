// Covert_to_second.cpp

#include <iostream>
using namespace std;

int main()
{
    int v_hour,v_minute,v_second; //input and output

    cout << "Hour = "; cin >> v_hour;
    cout << "Minute = "; cin >> v_minute;
    cout << "Second = "; cin >> v_second;

    v_second = v_second+v_minute*60+v_hour*3600; //process
    cout << "Covert to second = " << v_second << endl;

    return 0;
}