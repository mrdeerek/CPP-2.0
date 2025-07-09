#include<iostream>
using namespace std;
inline int add(int a,int b){
    return a+b;
}
int main(){
    int x = 5,y = 10;
    cout<<add(x,y);
}