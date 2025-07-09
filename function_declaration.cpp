#include<iostream>
using namespace std;
int getMax(int x,int y);

int main(){
    int a = 10, b = 20;
    int d = getMax(a,b);
    cout<<d;
    return 0;
}

int getMax(int x,int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}