#include<iostream>
using namespace std;
int gcd(int a, int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int lcm(int a,int b){
    if((a==0) || (b==0)){
        return 0;
    }
    return (a*b) / gcd(a,b);
}

int main(){
    int a,b;
    cin>>a>>b;

    int result = lcm(a,b);

    cout<<result<<endl;
    return 0;
}