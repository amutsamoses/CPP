#include <iostream>
#include <string>

using namespace std;

string(palindrome) = "Palindromes",
prompt = "Enter a word: ",
line (30, '-');

int main()
{
	string word;
	char key = 'y';
	
	cout << "\n\t" << word << endl;
	
	while (key == 'y' || key == 'Y')
	{
		cout << '\n' << line << '\n'
			 << prompt;
		
		cin >> word;
		
		//compares the 1st and last char,
		//the 2nd and the second to last etc.
		int i = 0, j = word.length() - 1;
		
			for ( ; i <= j; ++i, --j)
				if (word[i] != word[j])
					break;
				
				//All character equaL
				if (i > j)
					cout << "\nThe word " << word
						 << " is Palindrome! " <<  endl;
				else
					cout << "\nThe word " << word
						 << "is not a Palindrome" << endl;
						 
	cout << "\nDo you wanna Repeat? (y/n) ";
	do
		cin.get(key);
		
	while ( key != 'y' && key != 'Y' 
			&& key != 'n' && key != 'N');
	cin.sync();
			 
	}
	return 0;
}
