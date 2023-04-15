// File.COS2101-S64-Ex2-hello.cpp 
// Display a user's name

#include <iostream>
#include<string>
using namespace std;

int main()
{
    char letter1, letter2; //input and output :first two initials
    string lastName; //input and output :last name
    //Enter letters and print message.
    cout << "Enter 2 initials and a last name : ";
    cin >> letter1 >> letter2 >> lastName;
    cout << "Hello " << letter1 << "." << letter2 << ". " << lastName << "! ";
    cout << "We hope you enjoy studying C++." << endl;

    return 0;
}

