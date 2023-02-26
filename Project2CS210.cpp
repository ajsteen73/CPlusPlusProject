//Andrew Steen
//2/5/2023
//CS210 Project 2.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Declaration of variables for the program.
	double annualInterest;
	double monthlyDeposit;
	double initialInvestment;
	double initialAmount;
	double yearlyInterest;
	double totalAmount;
	double years;

	//First display for the user, program continues below using system pause.
	cout << "********************************" << endl;
	cout << "********** Data Input **********" << endl;
	cout << "Initial Investment Amount: " << endl;
	cout << "Monthly Deposit: " << endl;
	cout << "Annual Interest: " << endl;
	cout << "Number of years: " << endl;

	//Prompts the user to continue by pressing any key.
	system("pause");

	cout << "********************************" << endl; //Display for user.
	cout << "********** Data Input **********" << endl; //Display for user.
	cout << "Initial Investment Amount: $"; //Asks the user for the first input of the initial investment.
	cin >> initialInvestment;  //Stores data from the user input into the initial investment variable.
	cout << "Monthly Deposit: $"; // Asks the user for a second input of monthly deposits.
	cin >> monthlyDeposit; // Stores the user input for the monthly deposit.
	cout << "Annual Interest: %"; // Display for the annual interest.
	cin >> annualInterest; // Stores the user input for the annual interest.
	cout << "Number of years: "; // Display to aask for a number of years.
	cin >> years; // Stores the user years inputted.
	

	//Prompts the user to continue by pressing any key.
	system("pause");

	//Updates totalAmount with the initialInvestment that is stored from the input. 
	totalAmount = initialInvestment;

	//This is the display for without monthly deposits.
	cout << endl << "Balance and Interest Without Additional Monthly Deposits" << endl;
	cout << "=================================================================" << endl;
	cout << "Year\t\tYear End Balance\tYear End Earned Interest" << endl;
	cout << "-----------------------------------------------------------------" << endl;
	//For loop that has a contraint of the years input, does the work for yearly interest and the total, as well stores the print statement. (Without monthly deposits)
	for (int i = 0; i < years; i++) {
		initialAmount = (totalAmount) * ((annualInterest / 100)); // Yearly interest
		totalAmount = totalAmount + initialAmount; // Total amount for the output
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << initialAmount << endl; //Print statement for the output, Set to two decimal places with setprecision.
	}

	//Updates totalAmount with the initialInvestment.
	totalAmount = initialInvestment;

	//User display for monthly deposits included.
	cout << endl << "Balance and Interest With Additional Monthly Deposits" << endl;
	cout << "=================================================================" << endl;
	cout << "Year\t\tYear End Balance\tYear End Earned Interest" << endl;
	cout << "-----------------------------------------------------------------" << endl;
	//For loop based on the yeats input, handles the work for the interest with monthly deposits, handles the print statement as well. (With monthly deposits)
	for (int i = 0; i < years; i++) {
		yearlyInterest = 0; // Resets yearly interest to zero.
		for (int j = 0; j < 12; j++) { //For loop that handles the monthly deposit with the monthly interest.
			initialAmount = (totalAmount + monthlyDeposit) * ((annualInterest / 100) / 12); //Monthly interest.
			yearlyInterest = yearlyInterest + initialAmount; //Yearly earned interest.
			totalAmount = totalAmount + monthlyDeposit + initialAmount; // Final amount of the interest with monthly deposits.
		}
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << yearlyInterest << endl; //Print statement for the output, set to two decimal places with setprecision. 
	}
	return 0;
}