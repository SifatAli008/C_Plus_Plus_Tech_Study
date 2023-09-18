#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int Fahrenheit;

    cout << "Enter Fahrenheit: ";
    cin >> Fahrenheit;

    cout<<"Celsius = "<<(Fahrenheit - 32)*5/9;

    getch();
}

