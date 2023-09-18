#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num1,num2;

    cout << "Type value of number 1 :";
    cin >> num1;

    cout << "Type value of number 2 :";
    cin >> num2;

    cout<<"Addition : "<<num1+num2<<endl;
    cout<<"Subtraction : "<<num1-num2<<endl;
    cout<<"Multiplication : "<<num1*num2<<endl;
    cout<<"Divied : "<<(float)num1/num2<<endl;
    cout<<"Modulus : "<<num1%num2<<endl;

    getch();
}
