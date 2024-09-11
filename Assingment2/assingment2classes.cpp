#include <iostream>
using namespace std;

    class Date 
{  
    
    int day;
    int month;
    int year;
    public:
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
        cout <<  day << "-" << month <<  "-" << year;
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
    Date d1;
    d1.initDate();
    d1.printDateOnConsole();
    d1.acceptDateFromConsole();
    if(d1.isLeapYear()==true){
        cout << "leap year";
    }
return 0;

}

