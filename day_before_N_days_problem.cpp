#include<iostream>
using namespace std;
int main(){
    int d = 0;
    int n = 9;

    int x = n % 7;
    cout<<x<<endl;

    int ans = d - x;
    cout<<ans<<endl;

    if(ans>=0){
        cout<<ans<<endl;
    }
    else{
        cout<<ans + 7<<endl;
    }
    return 0;
}