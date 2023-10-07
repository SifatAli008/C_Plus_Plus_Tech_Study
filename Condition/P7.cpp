#include <iostream>

using namespace std;
int main(){
    char arr[] ={'a','1','m','9','5','3','2'};
    int n=sizeof(arr)/sizeof(arr[0]);

    int count=0;
    int count1=0;
    int count2=0;

    for(int i=0;i<n;i++){
        (arr[i] % 2 == 0) ? count++: (arr[i] >= '0' && arr[i] <= '9')? count1++ : count2++;
    }

    cout << "Even: " << count << endl;
    cout << "Odd: " << count1 << endl;
    cout << "Not a Number: " << count2 << endl;


    return 0;
}