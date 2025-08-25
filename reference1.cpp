// #include<iostream>
// using namespace std;
// int main(){
//     int x = 10;
//     int &ref = x;
//     cout<<ref<<endl;

//     x = 22;
//     cout<<ref<<endl;

//     ref = 35;
//     cout<<x<<endl;
//     return 0;
// }

//1. Passing Arguments by Reference
// #include<iostream>
// using namespace std;
// void passing(int &a){
//     a = 10;
//     //here we do modification
// }
// int main(){
//     int x = 20;
//     passing(x);

//     cout<<x<<endl;
//     return 0;
// }

//2. Returning Reference from Functions
#include<iostream>
using namespace std;
int& getMax(int &a, int &b){
    return (a>b) ? a:b;
}
int main(){
    int x = 10, y = 20;

    int &maxVal = getMax(x,y);
    cout<<maxVal<<endl;


    maxVal = 100;
    cout<<"a = "<<x<< " b = "<<y<<endl;
    return 0;
}