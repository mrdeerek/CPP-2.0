#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    
    }else{
        return n = n * factorial(n-1);
    }
    return n;
}

int main(){
    int n;
    cin>>n;

    int ans = factorial(n);
    cout<<ans<<endl;
    return 0;
}