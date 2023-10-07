#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    (n < 0) ? cout << "Negative" : (n <= 0 || n >= 10) ? cout << "Not a Number" : cout << "Positive";
}