                               // Types of Value in C++

//1. Lvalue (Left Value) 05 () or (Locator Value)

//#include<iostream>
// using namespace std;
// int main(){
//     int x = 10;

//     x = 20;

//     cout<<x;
//     return 0;
//}

//2. Rvalue (Right Value)

#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int y = x + 5;

    int z = y;
    cout<<x<<y<<z<<" ";
}

