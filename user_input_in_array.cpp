#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;

    // int arr[n];

    // for(int i = 0;i<n;i++){
    //     cin>>arr[i];
    // }

    // for(int i = 0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // return 0;

    int n;
    cin>>n;

    char arr[n];

    for(char ch =  0;ch<n;ch++){
        cin>>arr[ch];
    }
    for(char ch = 0;ch<n;ch++){
        cout<<arr[ch]<<" ";
    }
}