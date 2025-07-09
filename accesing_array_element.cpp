//accessing and modifying element
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {10,20,30,40,50};
//     cout<<arr[3]<<" "<<arr[2]<<endl;
    
//     arr[2] = {60};
//     cout<<arr[2]<<endl;
//     return 0;
// }

//Out -of-bound access
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {5,6,8,9};

//     cout<<arr[5]<<endl;
//     return 0;
// }

//Example 3: Partially Initialized Array
#include<iostream>
using namespace std;
int main(){
    int arr[4]= {10,30};
    cout<<arr[2];
    return 0;
}