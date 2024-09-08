#include <iostream>
#include <iomanip>

using namespace std;

int GetFirstDay(int year);

int dayNumber(int day, int month, int year) 
{ 

    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 
                    4, 6, 2, 4 }; 
    year -= month < 3; 
    return ( year + year/4 - year/100 + 
            year/400 + t[month-1] + day) % 7; 
} 


string getMonthName(int monthNumber) 
{ 
    string months[] = {"January", "February", "March", 
                    "April", "May", "June", 
                    "July", "August", "September", 
                    "October", "November", "December"
                    }; 

    return (months[monthNumber]); 
} 

void main()
{
	int year, numdays;
	int month = 1;

	cout << "**********CALENDER**********\n";

	cout << "Enter the year: ";
	cin  >> year;
	cout << "\n\n";

	int First_Day = GetFirstDay(year);
	while (month <= 12)
	{
		switch (month)
		{
		case 1:
			numdays = 31;
			cout << "January" << endl;
			cout << "S M T W T F S" << endl << endl;
			break;

		case 2:
			if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
			else { numdays = 28; }
			//come back and find a more tider way of doing leap years if possible
			cout << "February" << endl;
			cout << "S M T W T F S" << endl;
			cout << "-------------" << endl;
			break;

		case 3:
			numdays = 31;
			cout << "March" << endl;
			cout << "S M T W T F S" << endl << endl;
			break;

		case 4:
			numdays = 30;
			cout << "April" << endl;
			cout << "S M T W T F S" << endl << endl;
			break;

		case 5:
			numdays = 31;
			cout << "May" << endl;
			cout << "S M T W T F S" << endl << endl;
			break;

		case 6:
			numdays = 31;
			cout << "January" << endl;
			cout << "S M T W T F S" << endl << endl;
			break;

		case 7:
			numdays = 31;
			cout << "January" << endl;
			cout << "S M T W T F S" << endl << endl;
			break;

		case 8:
			numdays = 31;
			cout << "January" << endl;
			cout << "S M T W T F S" << endl << endl;
			break;

		case 9:
			numdays = 31;
			cout << "January" << endl;
			cout << "S M T W T F S" << endl << endl;
			break;

		case 10:
			numdays = 31;
			cout << "January" << endl;
			cout << "S M T W T F S" << endl << endl;
			break;

		case 11:
			numdays = 31;
			cout << "January" << endl;
			cout << "S M T W T F S" << endl << endl;
			break;

		case 12:
			numdays = 31;
			cout << "January" << endl;
			cout << "S M T W T F S" << endl << endl;
			break;

		}

		month++;
	}

}

int GetFirstDay(int year) 
{
	int century = (year - 1) / 100;
	int y = (year - 1) % 100;
	int weekday = (((2 - (2 * century) + y + (y / 4) + (century / 4)) % 7) + 7) % 7;

}
