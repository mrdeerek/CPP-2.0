#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int &y = x;

    cout<<y<<endl;

    x += 5;
    cout<<y<<endl;

    y += 10;
    cout<<x<<endl;

    return 0;
}