#include<iostream>
using namespace std;
int first_Digit(int n){
    while(n>=10){
        n = n/10;
    }
    return n;
}
int main(){
    int n;
    cin>>n;
    cout<<first_Digit(n)<<endl;
    return 0;
}