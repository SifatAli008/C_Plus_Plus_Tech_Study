#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
     int days, years, weeks;

    cout << "Enter days:";   // Read total number of days from user
    cin >> days;

    years = (days / 365);
    weeks = (days % 365) / 7;

    cout << "Years : " << years <<endl;
    cout << "weeks : " << weeks <<endl;

    getch();
}
