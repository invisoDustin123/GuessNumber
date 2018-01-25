// ConsoleApplication1.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//guess the number game
int main(){

	//random number generator
	srand(static_cast<unsigned int>(time(0)));

	//pick a rn between 1 and 100
	int secretNumber = rand() % 100 + 1;

	//declare variables
	int tries = 0;
	int guess;

	cout << "\tWelcome to Guess My Number \n\n";

	//game loop
	do {
		//get the user's guess and increment the amount of guesses made
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;

		//check to see where the guess is in relation to the answer
		if (guess > secretNumber){
			cout << "Too high!\n\n";
		} else if (guess < secretNumber){
			cout << "Too low!\n\n";
		} else {
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";
		}
	} while (guess != secretNumber);  //only loops while the guess is incorrect
    return 0;
}

