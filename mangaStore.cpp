#include <iostream> // needed to output and input data to the screen
#include <string> // needed to use strings
#include <iomanip> // needed to use set prescision to display money with two decimal
using namespace std; // needed to avoid the use of std:: or using repeatedly

/*
Adrian Dionicio Silva
CSC 150 Final Project
Date: 
Purpose: 
Create a project that you will be solving via a C++ program. 
Your program must include all activities that we have learned throughout the semester.  
Make sure that each activity in the list below is included in your project.

Program should include:
At least 5 variables and they cannot all be of the same type (Missinng one data type)
A decision structure
Loop structure
Data validation
2 methods (1 void and 1 value returning) (Missing value returning method)
Adequate comments per class standards
*/

// void function simply displays the cout statement
void goodBye() {
	cout << "Thank for shopping with us. Come back soon!" << endl;
}


// value that will return the sum between the two variables
float totalCalculated(float totalGathered, float taxGathered) {
	return totalGathered + taxGathered;  

	/*
	* can be wrote as:
	* float totalCalculated(float totalGathered, float taxGathered){
	* int sum = totalGathered + taxGathered;
	* return sum;
	*/ 
}

// totalPrice = mangaTotal + taxCollected;


int main() {
	string fullName; // used to recieve string input for your name
	int mangaChoice; // int value that determines your choice of manga
	int mangaVol; // int value that determines the volume number of manga
	float mangaTotal = 0.0; // needed to initialize mangaTotal/Total price of manga to 0
	float mangaPrice = 0.0; // float value that determines the price of the manga
	const float SALES_TAX = .07; // constant value that keeps the sales tax of North Carolina the same
	float taxCollected; // float value that stores the total amount of sales tax recieved
	float totalPrice; // float value that determines the cost of all manga items added together
	bool isValid; // used for verification
	char userInput = 'q'; // char value that will be used to terminate a loop statement later in the program


	// Prints statement to user
	cout << "Please enter your name: "; 
	// Gathers string input from user
	getline(cin, fullName);

	// Prints out message to user
	cout << "Hello, " << fullName << endl;
	cout << "Choose a manga title and the specific manga volume" << endl;

	cout << "Top Recommended Manga Choices to Purchase: " << endl;
	cout << "1) Title: One Piece		Author: Eiichiro Oda		Current Volumes: Volume 1 to Volume 103" << endl;
	cout << "2) Title: Attack on Titan	Author: Hajime Isayama		Current Volumes: Volume 1 to Volume 34" << endl;
	cout << "3) Title: Jujutsu Kaisen	Author: Gege Akutami		Current Volumes: Volume 0 to Volume 24" << endl;
	cout << "4) Title: Bleach		Author: Tite Kubo		Current Volumes: Volume 1 to Volume 74" << endl;
	cout << "5) Title: Blue Lock		Author: Muneyuki Kaneshiro	Current Volumes: Volume 1 to Volume 26" << endl;
	cout << endl;

	// do while statement that gathers input from user about manga selection 
	do {

		// Displays message to choose manga selection
		cout << "Choose from the following manga selection: ";
		cin >> mangaChoice;

		// Takes the title and volume of manga chosen 
		if (mangaChoice == 1) {
			// Displays message to choose volume number of your choice
			cout << "Enter the volume number for your manga: ";
			cin >> mangaVol;
			do {
				// If the choice the user chooses is within the valid volume number then, 
				// you will be giving the choice, the price, and verification that you have input a valid input
				if (mangaVol >= 1 && mangaVol <= 103) {
					string mangaTitle = "One Piece";
					mangaPrice = 9.99;
					isValid = true;
					cout << "You have selected volume " << mangaVol << " of " << mangaTitle << endl;
					cout << "Total cost: $" << mangaPrice << endl;
				}
				// Give the user another chance to enter a valid volume number
				else {
					isValid = false; 
					cout << "You have put an invalid input. Try again" << endl;
					cout << "Enter the volume number for your manga: ";
					cin >> mangaVol;
				}
			} while (!isValid); // Once the user enters a valid volume number, then the loop will end
		}

		// Takes the title and volume of manga chosen 
		if (mangaChoice == 2) {
			// Displays message to choose volume number of your choice
			cout << "Enter the volume number for your manga: ";
			cin >> mangaVol;
			do {
				// If the choice the user chooses is within the valid volume number then, 
				// you will be giving the choice, the price, and verification that you have input a valid input
				if (mangaVol >= 1 && mangaVol <= 34) {
					string mangaTitle = "Attack on Titan";
					mangaPrice = 10.99;
					isValid = true;
					cout << "You have selected volume " << mangaVol << " of " << mangaTitle << endl;
					cout << "Cost: $" << mangaPrice << endl;
				}
				// Give the user another chance to enter a valid volume number
				else {
					isValid = false;
					cout << "You have put an invalid input. Try again" << endl;
					cout << "Enter the volume number for your manga: ";
					cin >> mangaVol;
				}
			} while (!isValid); // Once the user enters a valid volume number, then the loop will end
		}
		// Takes the title and volume of manga chosen 
		if (mangaChoice == 3) {
			// Displays message to choose volume number of your choice
			cout << "Enter the volume number for your manga: ";
			cin >> mangaVol;
			do {
				// If the choice the user chooses is within the valid volume number then, 
				// you will be giving the choice, the price, and verification that you have input a valid input	
				if (mangaVol >= 0 && mangaVol <= 24) {
					string mangaTitle = "Jujutsu Kaisen";
					mangaPrice = 9.99;
					isValid = true;
					cout << "You have selected volume " << mangaVol << " of " << mangaTitle << endl;
					cout << "Cost: $" << mangaPrice << endl;
				}
				// Give the user another chance to enter a valid volume number
				else {
					isValid = false;
					cout << "You have put an invalid input. Try again" << endl;
					cout << "Enter the volume number for your manga: ";
					cin >> mangaVol;
				}
			} while (!isValid); // Once the user enters a valid volume number, then the loop will end
		}

		// Takes the title and volume of manga chosen 
		if (mangaChoice == 4) {
			// Displays message to choose volume number of your choice
			cout << "Enter the volume number for your manga: ";
			cin >> mangaVol;
			do {
				// If the choice the user chooses is within the valid volume number then, 
				// you will be giving the choice, the price, and verification that you have input a valid input
				if (mangaVol >= 1 && mangaVol <= 74) {
					string mangaTitle = "Bleach";
					mangaPrice = 9.99;
					isValid = true;
					cout << "You have selected volume " << mangaVol << " of " << mangaTitle << endl;
					cout << "Cost: $" << mangaPrice << endl;
				}
				else {
					// Give the user another chance to enter a valid volume number
					isValid = false;
					cout << "You have put an invalid input. Try again" << endl;
					cout << "Enter the volume number for your manga: ";
					cin >> mangaVol;
				}
			} while (!isValid); // Once the user enters a valid volume number, then the loop will end
		}

		// Takes the title and volume of manga chosen 
		if (mangaChoice == 5) {
			// Displays message to choose volume number of your choice
			cout << "Enter the volume number for your manga: ";
			cin >> mangaVol;
			do {
				// If the choice the user chooses is within the valid volume number then, 
				// you will be giving the choice, the price, and verification that you have input a valid input
				if (mangaVol >= 1 && mangaVol <= 26) {
					string mangaTitle = "Blue Lock";
					mangaPrice = 12.99;
					isValid = true;
					cout << "You have selected volume " << mangaVol << " of " << mangaTitle << endl;
					cout << "Cost: $" << mangaPrice << endl;
				}
				else {
					// Give the user another chance to enter a valid volume number
					isValid = false;
					cout << "You have put an invalid input. Try again" << endl;
					cout << "Enter the volume number for your manga: ";
					cin >> mangaVol;
				}
			} while (!isValid); // Once the user enters a valid volume number, then the loop will end
		}

		// if input is invalid, then will display a message 
		if (mangaChoice < 1 || mangaChoice > 5) {
				cout << "Oh no! We are having technical difficulties, so please try again later!" << endl;
				continue;
		}

		// trying to add to total of manga
		// mangaTotal = mangaPrice;
		// Adds the cost of the manga into a total amount of the manga then displays the current 
		// subtotal amount
		mangaTotal = mangaTotal + mangaPrice;
		cout << "Total amount: $" << mangaTotal << endl;

		// Will prompt the user to either buy more manga or to finish up shopping and pay for the items
		cout << "Would you like to purchase another manga? Press q to quit or to continue press any key to continue: ";
		cin >> userInput; // user input that will determine if you are done shopping
		cout << endl;

	} while (userInput != 'q'); // Will end once the user decides to quit the program

	
	// Takes the subtotal amount of manga and multiplies the sales tax of 7%, and then stores 
	// into total tax collected displaying the amount to the user
	taxCollected = mangaTotal * SALES_TAX;	
	cout << "Estimated tax to be collected: " << fixed << setprecision(2) << taxCollected << endl;

	// Takes the subtotal of manga and adds the total tax collected into the total price of all manga bought
	// then displays the total amount to user
	// same as totalPrice = mangaTotal + taxCollected;
	// calls the totalCalculated functions which will add the total sales tax and subtotal of the manga
	totalPrice = totalCalculated(mangaTotal, taxCollected);
	cout << "Total: $" << fixed << setprecision(2) << totalPrice << endl;
	
	// void statement that displays message to the user
	goodBye();
	
	
	return 0;
}