//________________________________
//date.h
//First Definition of class Date
//________________________________

#ifndef _DATE_  //Avoid multiple inclusion
#define _DATE_

class Date
{
	//sheltered members
	private:
		short month, day, year;
	
	//public interface	
	public:
		void init(void);
		void init(int month, int day, int year);
		void print(void);
};

#endif  // _DATE_

//__________________________________________________;
//date.cpp
//implementing the methods of class Date
//___________________________________________________;



#include <iostream>
#include <ctime>

using namespace std;

//using function call to get the present date and assign it to its 
//data members
void Date :: init (void)
{
	//pointer to struct tm
	struct tm *ptr;
	
	//for seconds
	time_t sec;
	
	//Get the present date
	time(&sec);
	
	//Initializing a struct of type tm and return a pointer to it
	ptr = localtime(&sec);
	
	month = (short) ptr -> tm_mon + 1;
	day = (short) ptr -> tm_mday;
	year = (short) ptr -> tm_year + 1900;
}
void Date :: init (int m, int d, int y)
{
	month = (short) m;
	day = (short) d;
	year = (short) y;
}
//Output the date
void Date :: print(void)
{
	cout << month << '-' << day << '-' << year
		 << endl;
}

//date_t.cpp
//Using objects of class Date

int main()
{
	Date today, birthday, aDate;
	today.init();
	birthday.init(3, 7, 2002);
	
	cout << "Today's Date: ";
	today.print();
	
	cout << "\n Gloria's Birthday: ";
	birthday.print();
	
	cout << "________________________________\n"
			"Some testing outputs:" << endl;
	
	//Assignment ok		
	aDate = today;
	aDate.print();
	
	//pointer to birthday
	Date *ptrDate = &birthday;
	ptrDate -> print();
	
	//Reference to aDate
	Date &holiday = aDate;
	//Writing to aDate
	holiday.init(1, 5, 2000);
	//holiday.print()
	aDate.print();
	
	return 0;
	
}