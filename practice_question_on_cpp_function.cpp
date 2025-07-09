//Problem 1: Undefined Function Call
// #include<iostream>
// using namespace std;
// void print(int, string = "NA");
// int main(){
//     print(101);
//     return 0;
// }

// void print(int id,string name){
//     cout<<id<<" "<<name;
// }

//Problem 2: Static vs. Local Variables
#include<iostream>
using namespace std;
void fun(){
    static int x = 1;
    int y = 1;
    x++;
    y++;
    cout<<x<<" "<<y<<endl;
}
int main(){
    fun();
    fun();
    fun();
    return 0;
}