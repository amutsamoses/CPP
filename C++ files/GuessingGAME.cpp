#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
	cout << "\n\t\t\tWelcome to Number Guess Game!"
		 << endl;
		
	cout << "You will have to guess a number between 1 and 100, "
			"You will have limited choices based on the "
			"level you choose, Good Luck!."
		 << endl;
		 
	while (true) 
	{
		cout << "\nEnter the difficulty level: \n";
		cout << "1 for easy! \t";
		cout << "2 for medium! \t";
		cout << "3 for difficult level \t";
		cout << "0 for ending the game! \n" << endl;
		
		//select level difficult
		int difficultyChoice;
		cout << "Enter the Number: ";
		std::cin >> difficultyChoice;
		
		//generating the secret number
		srand(time(0));
		int secretNumber = 1 + (rand() % 100);
		int playerChoice;
		
		//level easy
		if (difficultyChoice == 1)
		{
			cout << "\nYou have 10 choices for finding the "
					"secret number between 1 and 100! ";
					
			int choiceleft = 10;
			for (int i = 1; i <= 10; i++)
			{
				//prompting the user to enter secret number
				cout << "\nEnter the Number: ";
				cin >> playerChoice;
				
				//determinig if the playerchoice
				//matches the secret number
				if (playerchoice == secretNumber)
				{
					cout << "Well Played!, You won, "
						 << playerchoice
						 << " is the correct secret number " << endl;
					cout << "\t\t\t Thanks for Playing....! "
						 << endl;
					cout << "Play the game Again with us!!\n\n"
						 << endl;
					break;
				}
				else
				{
					cout << "Nope!, " << playerChoice
						 << " is not the right secret number\n";
						 
						 if (playerChoice > secretNumber)
						 {
						 	cout << "The secret number is "
						 		 	"smaller than the number "
						 		 	"you have choosen"
						 		 << endl;
						 }
						 else 
						 {
						 	cout << "The secret number is "
						 			"greater than the number "
						 			"you have choosen"
						 		 << endl;
						 }
						 choicesLeft--;
						 cout << choicesLeft << "choices Left. "
						 	  << endl;
						 if (choicesLeft == 0)
						 {
						 	cout << "You couldn't fint the "
						 		 	"secret number!!! "
						 		 << secretNumber
						 		 << ", You Lose!!!\n\n";
						 	cout << "Play the Game again to get a score!!!\n\n\"; 
						 			<< endl;
						 } 
				}
			}
		}
		//Medium level Game
		else if (difficultyChoice == 2)
		{
			cout << "\nYou have 7 choices for finding the "
				    "secret number between 1 and 100. ";
				    
			int choicesLeft = 7;
			for (int i = 1; i <= 7; i++)
			{
				//prompting the user to guess the secret number
				cout << "\n\nEnter the Number: ";
				cin >> playerChoice;
				
				//determining if the playerchoice matches the
				//secret number
				if (playerChoice == secretNumber)
				{
					cout << "Well Played !!!, You Won!!!, "
						 << playerChoice
						 << "is the correct secret number" << endl;
					cout << "\t\t\t Thanks for playing....!"
						 << endl;
					cout << "Play Again the Game with us!!!\n\n "
						 << endl;
					break;
				}
				else
				{
					cout << "Nope, " << playerChoice
						 << " is not the correct secret number\n";
					if (playerChoice > secretNumber)
					{
						cout << "The secret Number is "
								"smaller than the number "
								"you have chosen"
							 << endl;
					}
					else 
					{
						cout << "The secret number is "
								"greater than the number"
								"you have choosen"
							 << endl;
					}
					choicesLeft--;
					cout << choicesLeft << " choice left. "
						 << endl; 
					if (choiceLeft == 0)
					{
						cout << "You couldn't find the "
								"secret number , it was "
							 << secretNumber
							 << "You Lose!!\n\n";
						cout << "Play the game again to win!!!\n\n\";
					}
				}
			}
		}
		
		//Difficult level: difficult
		else if (difficultyChoice == 3)
		{
			cout << "\nYou have 5 choices to find the "
					"secret number between 1 and 100. ";
			int choicesLeft = 5;
			for (int i =1; i <= 5; i++)
			{
				//prompting the player to guess the correct
				//secret number
				cout << "\n\nEnter the secret number: ";
				cin >> playerChoice;
				
				//determinig if the playerchoice matches 
				//the secret number
				if (playerChoice == secretNumber)
				{
					cout << "Well Played! You Won, "
						 <<playerChoice
						 << " is the correct secret number" << endl;
					cout << "\t\t\t Thanks for playing...!"
						 << endl;
					cout << "Play the game again with us!!\n\n"
						 << endl;
					break;
				}
				else 
				{
					cout << "Nope, " << playerChoice
						 << " is not the correct secret number\n";
					if (playerChoice > secretNumber)
					{
						cout << "The secret number is "
								"smaller than the number"
								"you have choosen "
							 << endl;
					}
					else
					{
						cout << "The secret number is "
								"greater than the number"
								"you have choosen"
							 << endl;
					}
					choicesLeft--;
					cout << choicesLeft << " choices left. "
						 <<endl;
					if (choiceLeft == 0)
					{
						cout << "You couldn't find the "
								"secrer number, it was "
							 <<secretNumber
							 << ", You lose!!!\n\n";
						cout << "Play Again with us to win!!!\n\n";
					}
				}
			}
		}
		
		//To end the game 
		else if (difficultyChoice == 0)
		{
			exit(0);
		}
		else
		{
			cout << "Wrong Choice, Enter valid choice to "
				 	"play the game! (0, 1, 2, 3)"
				 << endl;
		}
	}
	return 0;
}