//Example Without References
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {10,20,30};
//     for(int x: arr){
//         x += 2;  yaha pe bas copy moodify hoga original me koi changes nahi aaiega 
//     }
//     for(int x : arr){
//         cout<<x<<endl;  yaha use karte hai original value ko print karane ke liye.
//     }
//     return 0;
// }

//Solving Problems with References

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {10,20,30};

//     for(int &x : arr){
//         x += 2;
//     }
//     for(int x : arr){
//         cout<<x<<" ";
//     }
// }

/*Combining const with References
If the goal is only to read the elements without modifying them, you can use const references. This ensures the safety of the data while avoiding the cost of copying.*/

#include<iostream>
using namespace std;
int main(){
    string arr[] = {"Kunal raj","from","Chandigarh University"};

    for(string &s : arr){
        cout<<s<<endl;
    }
    return 0;
}