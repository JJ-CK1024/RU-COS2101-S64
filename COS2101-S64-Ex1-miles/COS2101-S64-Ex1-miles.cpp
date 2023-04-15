// COS2101-miles.cpp

#include <iostream>
using namespace std;

//----------------------------------------------

int main() //start of main function.
{
    const float KM_PER_MILE = 1.609;
    float miles; //input : distance in miles.
    float kms; //output : distance in kilometers.

    //Get the distance in miles.  
    cout << "Enter the distance to miles : ";
    cin >> miles;
    // Convert the distance to kilometers.
    kms = KM_PER_MILE * miles; //Process.
    //Display the distance to kilometers.
    cout << "The distance in kilometers is " << kms << endl;
    return 0;
}