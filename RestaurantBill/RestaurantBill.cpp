// Nathan Gleesing
// Date: 8/26/2022
// Program Title: RestrauntBill
// Program Description: This program will ask how much a user's bill is, calculate the tax of said bill, then ask for the tip the user wishes to give, and finally displays total cost.

#include <iostream>
#include <string>


using namespace std;

// Named constants
const double TAX_PERCENT = 0.095;

int main()
{

	// Variable declaration

	double food_bill;
	double tip;
	double tax;
	double total_bill;

	//Program title and description for the user

	cout << "Program Title: ResturauntBill" << endl;
	cout << "Program Description: This program will ask how much a user's bill is, calculate the tax of said bill, then ask for the tip the user wishes to give, and finally displays total cost." << endl << endl;

	// User input

	cout << "What is your food bill? (excluding the tax and tip)" << endl;
	cin >> food_bill;
	cout << endl;

	cout << "Choose your tip: " << endl;
	cout << "For 10% tip: $" << 0.1 * food_bill << endl;
	cout << "For 15% tip: $" << 0.15 * food_bill << endl;
	cout << "For 18% tip: $" << 0.18 * food_bill << endl;
	cout << "For 20% tip: $" << 0.2 * food_bill << endl;

	cin >> tip;
	cout << endl;
	
	// Calculations

	tax = food_bill * TAX_PERCENT;
	total_bill = food_bill + tip + tax;

	// Output to the screen

	cout << "Your food bill is:  $" << food_bill << endl;
	cout << "Tip:                $" << tip << endl;
	cout << "Tax:                $" << tax << endl;
	cout << "Your total bill is: $" << total_bill << endl;
	cout << endl;
	cout << "Thank you!" << endl;

	return 0;
}