// Function_FindHour_FindFee_CARPARK.cpp

#include <iostream>
using namespace std;
void Input(int&, int&, int&, int&);
int FindHour(int, int, int, int);
float FindFee(int);
void Output(int, int, int, int, int, float);

int main()
{
    int H_in, M_in;
    int H_out, M_out;
    int H;
    float fee;
    Input(H_in, M_in, H_out, M_out);
    H = FindHour(H_in, M_in, H_out, M_out);
    fee = FindFee(H);
    Output(H_in, M_in, H_out, M_out, H, fee);

    return 0;
}

void Input(int& H_in, int& M_in, int& H_out, int& M_out)
{
    cout << "put Time-in :" << endl;
    cout << " hour = ? ";cin>>H_in;
    cout << " minute = ? "; cin >> M_in;
    cout << "put Time-out :" << endl;
    cout << " hour = ? "; cin >> H_out;
    cout << " minute = ? "; cin >> M_out;
}

int FindHour(int H_in, int M_in, int H_out, int M_out)
{
    int H, M;
    H = H_out - H_in;
    M = M_out - M_in;
    if (M > 0)
        H = H + 1;
    return H;
}
float FindFee(int H)
{
    if (H <= 3)
        return 0.0;
    else
        return 50 + (H - 4) * 30.0;
}
void Output(int H_in, int M_in, int H_out, int M_out,int H, float fee)
{
    cout << "--------------------" << endl;
    cout << "Time in : " << H_in << ":" << M_in << endl;
    cout << "Time out : " << H_out << ":" << M_out << endl;
    cout << "Parking time = " << H << " hour" << endl;
    cout << "Service charge = " << fee << " Baths" << endl;
}
