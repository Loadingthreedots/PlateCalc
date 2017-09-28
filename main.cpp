// Title	: Weight Plate Calculator
// Author	: Travis Staehnke
// Date		: 25th of September

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "What weight (kg) would you like to calculate the weight plates for?" << endl;

	// Get input
	string input;
	getline(cin, input);
	float weight = stoi(input) / 2;
	
	cout << "Plate amounts (kg), 20: ";

	// If weight can be divided by 20
	if (weight / 20 >= 1)
	{
		short int twenties = floor(weight / 20);
		weight = weight - (twenties * 20);
		cout << twenties << "\n" << weight;
		// Reduce weight once sorted to go onto the next stage
	}
	
	if (weight / 15 > 1)
	{
		short int fifteens = floor(weight / 15);
		weight = weight - (fifteens * 15);
		cout << " 15: " << fifteens;
	}
	if (weight / 10 > 1)
	{
		short int tens = floor(weight / 10);
		weight = weight - (tens * 10);
		cout << " 10: " << tens;
	}
	if (weight / 5 > 1)
	{
		short int fives = floor(weight / 5);
		weight = weight - (fives * 5);
		cout << " 5: " << fives;
	}
	if (weight / 2.5 > 1)
	{
		short int twohalf = floor(weight / 2.5);
		weight = weight - (twohalf * 2.5);
		cout << " 2.5: " << twohalf;
	}
	if (weight / 1.25 > 1)
	{
		short int onequart = floor(weight / 1.25);
		weight = weight - (onequart * 1.25);
		cout << " 1.25: " << onequart;
	}
	cout << endl;
	string wait;
	getline(cin, wait);

	return 0;
}