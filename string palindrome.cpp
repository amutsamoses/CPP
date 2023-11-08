#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char greeting[37] = {"Hello there, Welcome Palindrome Game"};
	cout << "Greeting message: Welcome to Palindrome\n", greeting;
	
	char s[200], cpy[200];
	
	cout << "\nEnter any String:\n";
	
	gets(s);
	strcpy(cpy, s);
	strrev(s);
	
	if (strcmp(s, cpy)==0)
		cout << s << "\nIts a strict Palindrome!!!" << endl;
	else 
		cout << s << "\nIts not a Palindrome!!!" << endl;
	
}