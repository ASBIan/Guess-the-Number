#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void menu();

int main()
{
    
    menu();
    
play_again: //[goto] play_again statement
    
    srand(static_cast<unsigned int>(time(0)));
    
    int random_number = rand() % 100 + 1;
    int tries = 0;
    int guess;
    
    cout << "Guess a number between 1 and 100 and MAYBE I'll be your friend...\n\n";
    
    do
    {
        {
        cin >> guess;
        
        if (guess < random_number)
        {
            if ( tries < 12
                )
            cout << "\nToo low!\n\n\n";
            ++tries;
        }
        
        if (guess > random_number)
        {
            cout << "\nToo high!\n\n\n";
            ++tries;
        }
        
        if (guess == random_number)
        {
            cout << "Correct!\n\n";
            cout << "Its about damn time!! It only took you " << tries << "!\n\n";
            
        }

            
        if (tries == 2)
            cout << "\nI guess its understandable... \n";
        
        if (tries == 4)
            
            cout << "\nI mean, it is you were talking about here... \n";
        
        if (tries == 6)
            
            cout << "\nOkay no seriously... Lets move this along... \n";
        
        if (tries == 7)
            
            cout << "Alright, You lose... Next time, dont suck so bad, ya big loser!!!\n\n";
            
        if (tries == 8)
                cout << "Okay we get it, you can stop now" << endl;
        if (tries == 9)
                cout << "C'mon dude... Stop..." << endl;
        if (tries == 10)
                cout << "for real, i've got sh** to do..." <<endl;
        if (tries == 11)
                cout << "F---- you Greg....... " << endl;
            if (tries > 11)
            cout << "*Xcode Hates Greg*";
            
        
        
        }
    }  while (guess != random_number);

    
    cout << "Would you like to play again? (Y or N)\n\n";
    
    char replay;
    
    cin >> replay;
    
    if (replay == 'Y' || replay == 'y')
    {
        cout << "\n\n\n";
        
        goto play_again;
    } else
    
        {
            cout << "\n\n\n---CLOSING---\n\n\n";
        }
    
}

void menu()
{
    cout << "---GUESS THE NUMBER---\n\n";
}
