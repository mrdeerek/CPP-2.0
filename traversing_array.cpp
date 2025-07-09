#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,5,9,6,7};
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }


    //for each loop
    for(int ele:arr){
        cout<<ele<<" ";
    }
    int i = 0;
    while(i<5){
        cout<<arr[i]<<" ";
        i++;
    }
    return 0;
}