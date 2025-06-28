//Basic star pattern
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i = 1;i<=n;i++){
//         cout<<"*"<<endl;
//     }
//     return 0;
// }


//Row and Column star pattern
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i= 1;i<n;i++){
//         for(int j = 1;j<n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//Number grid pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}