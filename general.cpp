// Convert temperature in Kelvin to Fahrenheit
#include <iostream>

using namespace std;

Convert(float K, float F)
{
	F = (K - 273.15)*9/5+32;
	cout << "Temperature in Fahrenheit is:\n" << F;
}

int main()
{
	float K, F;
	cout << "Please enter temperature in Kelvin:" << endl;
	cin >> K;
	Convert(K,F);
}
