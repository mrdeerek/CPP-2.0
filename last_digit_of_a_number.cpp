#include<iostream>
using namespace std;
int main(){
    int x = 125;
    int ans1 = (x%10);
    cout<<ans1<<endl;
    x = -235;
    int ans2 = abs(-235%10);
    cout<<ans2<<endl;
    return 0;
}