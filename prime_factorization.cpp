#include<iostream>
using namespace std;
bool isprime(int n){
    for(int i = 2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void primeFactor(int n){
    for(int i =2;i<=n;i++){
        if(isprime(i)){
            int x = i;
            while (n%x==0)
            {
                cout<<i<<" ";
                x = x * i;
            }
            
        }
    }
}
int main(){
    int n;
    cin>>n;
    primeFactor(n);
    return 0;
}