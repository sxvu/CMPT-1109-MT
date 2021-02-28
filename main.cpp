#include <iostream>

using namespace std; 

int main ()
{
    //month, day, and year has a numberical value associated with them  
    int month;
    int day;
    int year;
    
    //turns month value (0-12) into month names
    string monthName[12] = {"January","February","March","April","May","June","July","August", "September", "October", "November","December"}; 

    //user enter month
    cout << "Please Enter a Month (0 - 12): ";
    cin >> month;

    //user enter year
    cout << "Enter a Year: ";
    cin >> year;
  
  //intergers number (days) between 1-31 for each given month
  for(int i = 0; i < 31; i++) 
    if (month == 4 ||month == 6 ||month == 9 ||month == 11)
      day = 30; 
    else if (month == 2) //if February is a leap year 
      {
        bool leap = (year % 4 == 0 && year % 100 != 0) ||(year % 400 == 0);
          if (leap == 0)
            day = 28;
          else
            day = 29;
      }
      else
      day = 31;



//displays how many days are in the entered month and year
cout << monthName[month-1] << " " << year <<  " has " << day <<  " days" << endl;

//end the program
return 0;
}

