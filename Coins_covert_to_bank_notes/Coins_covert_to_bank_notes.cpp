// Coins_covert_to_bank_notes.cpp

#include <iostream>
using namespace std;

int main()
{
    int coins, bn1000, bn500, bn100, bn50, bn20, co10, co5, co2, co1; //input and output
    
    cout << "COINS : "; cin >> coins;
    //process
    bn1000 = coins / 1000; cout << "1000 baht note = "<< bn1000<<endl;
    bn500 = (coins % 1000)/500; cout << "500 baht note = " << bn500<<endl;
    bn100 = ((coins % 1000) % 500)/100; cout << "100 baht note = " << bn100 << endl;
    bn50 = (((coins % 1000) % 500) % 100)/50; cout << "50 baht note = " << bn50 << endl;
    bn20 = ((((coins % 1000) % 500) % 100) % 50)/20; cout << "20 baht note = " << bn20 << endl;
    co10 = (((((coins % 1000) % 500) % 100) % 50) % 20)/10; cout << "10 baht coins = " << co10 << endl;
    co5 = ((((((coins % 1000) % 500) % 100) % 50) % 20) % 10)/5; cout << "5 baht coins = " << co5 << endl;
    co2 = (((((((coins % 1000) % 500) % 100) % 50) % 20) % 10) % 5)/2; cout << "2 baht coins = " << co2 << endl;
    co1 = coins - ((bn1000 * 1000) + (bn500 * 500) + (bn100 * 100) + (bn50 * 50) + (bn20 * 20) + (co10 * 10)+(co5*5)+(co2*2)); cout << "1 baht coins = " << co1 << endl;

    return 0;
}