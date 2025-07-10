// #include<iostream>
// using namespace std;
// void reverse(int arr[],int n){
//     for(int i = n;i<n - 1;i--){
//         return<<arr[i];
//     }
// }
// int main(){
//     int n;
//         cin>>n;

//         int arr[n];

//         for(int i= 0;i<n;i++){
//             cin>>arr[i];
//         }
//         cout<<reverse(arr,n);
//         return 0;
//     }    
   

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    for(int i = n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}