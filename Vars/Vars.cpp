// Vars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	// Task cin.1


	cout << "First number: ";
	float var1;
	cin >> var1;
	cout << "Second number: ";
	float var2;
	cin >> var2;
	cout << "Third number: ";
	float var3;
	cin >> var3;
	cout << "Average: " << (var1 + var2 + var3) / 3 << endl;


	// Task cin.2
	cout << "===============" << endl;


	cout << "Input base: ";
	float base;
	cin >> base;
	cout << "Input power: ";
	float power;
	cin >> power;
	cout << "Your answer: " << pow(base, power) << endl;


	// Task cin.3
	cout << "===============" << endl;


	const float PI = 3.14;
	cout << "Input radius: ";
	float R;
	cin >> R;

	cout << "Circle area: " << R * R * PI << endl;
	cout << "Circumference length: " << 2 * R * PI << endl;


	// Task casting.1
	cout << "===============" << endl;


	cout << "Input amount: ";
	double amount;
	cin >> amount;

	int GRN = static_cast<int>(amount);
	int Pennys = static_cast<int>((amount - GRN)*100);

	cout << "GRN: " << GRN << endl;
	cout << "Pennys: " << Pennys << endl;


	// Task casting.2
	cout << "===============" << endl;


	cout << "Input amount: ";
	cin >> amount;

	int Tons = static_cast<int>(amount);
	int Kilos = static_cast<int>((amount - Tons) * 10000);
	int Gramms = static_cast<int>((((amount - Tons) * 10000) - Kilos) * 10000);

	cout << "Tons: " << Tons << endl;
	cout << "Kilos: " << Kilos << endl;
	cout << "Gramms: " << Gramms << endl;


	// Task casting.3
	cout << "===============" << endl;


	cout << "Input seconds: ";
	int seconds;
	cin >> seconds;

	int Days = static_cast<int>(seconds / 86400);
	seconds -= (Days * 86400);
	int Hours = static_cast<int>(seconds / 3600);
	seconds -= (Hours * 3600);
	int Minutes = static_cast<int>(seconds / 60);
	seconds -= (Minutes * 60);

	cout << "Days: " << Days << endl;
	cout << "Hours: " << Hours << endl;
	cout << "Minutes: " << Minutes << endl;
	cout << "Seconds: " << seconds << endl;


	// Task reminder.1
	cout << "===============" << endl;


	cout << "Input num1: ";
	cin >> var1;
	cout << "Input num2: ";
	cin >> var2;

	int hundreds1 = var1 / 100;
	int tens1 = static_cast<int>(var1 / 10) % 10;
	int units1 = static_cast<int>(var1) % 10;

	int hundreds2 = var2 / 100;
	int tens2 = static_cast<int>(var2 / 10) % 10;
	int units2 = static_cast<int>(var2) % 10;

	int num1 = (hundreds1 * 100) + (tens2 * 10) + units1;
	int num2 = (hundreds2 * 100) + (tens1 * 10) + units2;

	cout << "Num1: " << num1 << endl;
	cout << "Num2: " << num2 << endl;


	// Task reminder.2
	cout << "===============" << endl;


	cout << "Input number: ";
	cin >> var1;

	int thousands = var1 / 1000;
	int hundreds = static_cast<int>(var1 / 100) % 10;
	int tens = static_cast<int>(var1 / 10) % 10;
	int units = static_cast<int>(var1) % 10;

	cout << "Summ: " << thousands + tens << endl;
	cout << "Diff: " << hundreds - units << endl;


	// Task reminder.3
	cout << "===============" << endl;


	cout << "Input number: ";
	cin >> var1;

	hundreds = var1 / 100;
	units = static_cast<int>(var1) % 10;

	cout << "Answer: " << (hundreds * 10) + units << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
