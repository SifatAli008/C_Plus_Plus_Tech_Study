#include <iostream>

using namespace std;

int main(){
   char str[] ={'a','b','z','f','n','e','D','H'};
    int n=sizeof(str)/sizeof(str[0]);

   char lower[n];
   char upper[n];
   char Nch[n];



    for (int i = 0; i < n; ++i) {
        (str[i] >= 'a' && str[i] <= 'z')? lower[i]=str[i]: (str[i] >= 'A' && str[i] <= 'Z')? upper[i]=str[i]:Nch[i]=str[i];
    }

    cout<<"Lower case: ";
    for (int i = 0; i < n; ++i) {
        cout<<lower[i]<<" ";
    }

    cout<<endl<<"upper case: ";
    for (int i = 0; i < n; ++i) {
        cout<<upper[i]<<" ";
    }

    cout<<endl<<"Not a carther case: ";
    for (int i = 0; i < n; ++i) {
        cout<<Nch[i]<<" ";
    }



    return 0;
}