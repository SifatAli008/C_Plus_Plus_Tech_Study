#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int a,b,c=0;
    cout << "Type value of number 1 :";
     cin >> a;

     cout << "Type value of number 2 :";
     cin >> b;

    c=a;
    a=b;
    b=c;
    cout << "After swapping values" <<endl;
     cout << "Value of number 1 :" << a << endl ;

     cout << "Value of number 2 :"<< b;

 getch();
}
