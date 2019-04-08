#include<iostream>
using namespace std;
bool leapyear (int year);
int main()
{
    int year;
    while ( year > 0)
    {
        cout<<"Enter a year (or negative number to quit): "<<endl;
        cin>>year;
        if (year<0)
        {
            cout << "Bye!" << endl;
            break;
        }
        else if (leapyear (year) == true)
        {
            cout<< year << " is a leap year." << endl;
        }
        else if (leapyear (year) == false)
        {
            cout<< year << " is not a leap year." << endl;
        }
        
    }
}
bool leapyear (int year)
{
    //cin>>year;
    if ( year % 400 == 0)
    {
        return true;
    }
    else if ( year % 4 == 0 && year % 100 != 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
    
}