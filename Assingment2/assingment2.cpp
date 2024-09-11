#include <iostream>
using namespace std;
struct Date 
{
    int day;
    int month;
    int year;
    void initDate()
    {
        day=1;
        month=1;
        year=1990;
    } 
    void printDateOnConsole()
    {
        cout <<  day << "-" << month <<  "-" << year;
    }
    void acceptDateFromConsole()
    {
        cout <<"enter the  date";
        cin >> day >> month >> year;
        cout <<  day << "-" << month <<  "-" << year << endl;
    }
    bool isLeapYear()
    {
        if (year%4==0 && year%100!=0)
                 return true;
        else
             return false;
    }
};
 int main()
{
    int choice;
    cout <<"enter your choice";
    cin  >> choice;
    while (choice!=0)

    {

  struct Date d1;
  switch (choice)
  {
  case 1 : d1.initDate();
            d1.printDateOnConsole();
    break;
  
  case 2 : d1.acceptDateFromConsole();
    break;
  case 3 :  if(d1.isLeapYear()==true){
        cout << "leap year";
    }
    break;
  default: cout<< " enter correct choice";
    break;
  }
    
    
   
return 0;

}
}
