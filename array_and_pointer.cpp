// array and pointers

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];

//     cout<<arr<<endl;

//     cout<<&arr[0]<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2,4,6,8,5};

    int *ptr = arr;

    for(int i = 0;i<5;i++){
        cout<<*(ptr+i)<<" ";
    }
}

