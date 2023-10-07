#include <iostream>
using namespace std;

int main(){

    int arr[]={29,69,40};
    int n =sizeof(arr)/sizeof(arr[0]);

    int max=0;

    for (int i = 0; i < n; ++i) {
        if(max<arr[i]){
            max=arr[i];
        }
        else break;
    }

    cout<<max;

    return 0;
}