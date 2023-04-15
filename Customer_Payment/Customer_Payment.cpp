// Customer_Payment.cpp

#include <iostream>
using namespace std;
float FindDiscount(float);
float FindPayout(float, float);
float FindVat(float);
float FindNet(float, float);


int main()
{
	float payment, payout, discount, Vat, net;
	cout << "Payment=? "; cin >> payment;
	discount = FindDiscount(payment);
	payout = FindPayout(payment, discount);
	Vat = FindVat(payout);
	net = FindNet(payout, Vat);
	cout << "---------- OUTPUT ----------" << endl;
	cout << "Payment = " << payment << endl;
	cout << "Discount = " << discount << endl;
	cout << "Payout = " << payout << endl;
	cout << "Vat = " << Vat << endl;
	cout << "Net = " << net << endl;

	return 0;
}

//Function
float FindDiscount(float p)
{
	return p * 0.05;
}

float FindPayout(float p,float d)
{
	return p - d;
}

float FindVat(float p)
{
	return p * 0.07;
}

float FindNet(float p, float v)
{
	return p + v;
}