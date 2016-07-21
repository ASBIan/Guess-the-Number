//
//  main.cpp
//  Guess the Number
//
//  Created by Gregory Frey on 7/20/16.
//  Copyright © 2016 Gregory Frey. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void menu();

int main()
{
	
	menu();
	
	play_again:
	
	srand(static_cast<unsigned int>(time(0)));
	
	int random_number = rand() % 100 + 1;
	int tries = 0;
	int guess;
	
	cout << "Guess a number between 1 and 100\n\n";
	
	do
	{
		cin >> guess;
		
		if (guess < random_number)
		{
			cout << "Too low!\n\n...try again\n\n";
			++tries;
		}
		
		if (guess > random_number)
		{
			cout << "Too high!\n\n...try again\n\n";
			++tries;
		}
		
		if (guess == random_number)
		{
			cout << "Correct!\n\n";
			cout << "You guess the number in " << tries << "!\n\n";
			
			if (tries > 7)
			{
				cout << "Next time... try to do it in less than 7 guesses!\n\n";
			}
		}
		
	} while (guess != random_number);
	
	cout << "Would you like to play again? (Y or N)\n\n";
	
	char replay;
	
	cin >> replay;
	
	if (replay == 'Y' || replay == 'y')
	{
		cout << "\n\n\n";
		
		goto play_again;
	} else { cout << "\n\n\n---CLOSING---\n\n\n"; }
	
}

void menu()
{
	cout << "---GUESS THE NUMBER---\n\n";
}