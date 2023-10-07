#include<iostream>
using namespace std;

int main()
{
    int p, c, m;

    cout << "Eligibility Criteria for engineering admission:" << endl;
    cout << "Marks in Mathematics >= 65" << endl;
    cout << "Marks in Physics >= 55" << endl;
    cout << "Marks in Chemistry >= 50" << endl;
    cout << "Total in all three subjects >= 180" << endl;
    cout << "or Total in Maths and Physics >= 140" << endl;
    cout << "-------------------------------------" << endl;

    cout << "Input the marks obtained in Physics: ";
    cin >> p;
    cout << "Input the marks obtained in Chemistry: ";
    cin >> c;
    cout << "Input the marks obtained in Mathematics: ";
    cin >> m;

    cout << "Total marks of Mathematics, Physics, and Chemistry: " << m + p + c << endl;
    cout << "Total marks of Maths and Physics: " << m + p << endl;

    if (m >= 65 && p >= 55 && c >= 50 && (m + p + c >= 180 || m + p >= 140))
    {
        cout << "The candidate is eligible for admission." << endl;
    }
    else
    {
        cout << "The candidate is not eligible." << endl;
    }
}
