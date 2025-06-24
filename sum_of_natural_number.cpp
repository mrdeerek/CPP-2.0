//using formula
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int ans = n * (n + 1) / 2;
//     cout<<ans<<endl;
//     return 0;
// }

//using loop

#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int sum = 0;

    for(int i = 0;i <= n;i++){
        sum = sum + i;
    }
    cout<<sum;
}