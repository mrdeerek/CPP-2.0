#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(n == 0 || n==1){
        cout<<"neither prime nor"<<endl;
    }

    for(int i =2;i<n;i++){
        if(n % i==0){
            cout<<"No"<<endl;
            return 0;
        }else{
            cout<<"yes"<<endl;
        }
        return 0;
    }
}


// by using while loop

//     int i = 2;
//     while(i<n){
//         if(n%i==0){
//             cout<<"No"<<endl;
//             return 0;
//         }
//         i++;   
        
//     }
//     cout<<"Yes"<<endl;
//     return 0;
// }