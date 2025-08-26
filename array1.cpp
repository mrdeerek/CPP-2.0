// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {2,5,9,6,4};

//     for(int i = 0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {0};

//     for(int i = 0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//accessing fourth ans first array elements
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {2,4,8,12,16};

//     cout<<arr[3]<<endl;

//     cout<<arr[0]<<endl;
//     return 0;
// }

//Update Array Elements
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = { 2, 5, 9, 6, 4};

//     arr[4] = 500;

//     cout<<arr[4]<<endl;
//     return 0;
// }

//Traverse Array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {5,6,8,6,7};
    
//     for(int i = 0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//Size of Array
#include<iostream>
using namespace std;
int main(){
    char arr[5] = {'k','u','n','a','l'};

    cout<<"Size of arr[0] is: "<<sizeof(arr[0])<<endl;
    cout<<"size of arr: "<<sizeof(arr)<<endl;

    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Length of the array is :"<<n<<endl;
    return 0;
}