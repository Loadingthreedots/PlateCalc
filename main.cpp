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
	double weight = stoi(input) / 2;

	
	cout << "Plate amounts (kg), 20: ";

	// If weight can be divided by 20
	if (weight / 20 >= 1)
	{
		double twenties = floor(weight / 20);
		weight = weight - twenties;
		cout << twenties;
		// Reduce weight once sorted to go onto the next stage
	}
	if (weight / 15 > 1)
	{
		double fifteens = floor(weight / 15);
		weight = weight - fifteens;
		cout << " 15: " << fifteens;
	}
	if (weight / 10 > 1)
	{
		double tens = floor(weight / 10);
		weight = weight - tens;
		cout << " 10: " << tens;
	}
	if (weight / 5 > 1)
	{
		double fives = floor(weight / 5);
		weight = weight - fives;
		cout << " 5: " << fives;
	}
	if (weight / 2.5 > 1)
	{
		double twohalf = floor(weight / 2.5);
		weight = weight - twohalf;
		cout << " 2.5: " << twohalf;
	}
	if (weight / 1.25 > 1)
	{
		double onequart = floor(weight / 1.25);
		weight = weight - onequart;
		cout << " 1.25: " << onequart;
	}
	cout << endl;
	cout << weight << endl;
	string wait;
	getline(cin, wait);

	return 0;
}