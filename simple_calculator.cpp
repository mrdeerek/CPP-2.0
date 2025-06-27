#include<iostream>
using namespace std;
int main(){
    int op;
    cin>>op;
    int a,b;
    cin>>a>>b;
    

    if(op==1){
        cout<< a + b<<endl;
    }else if(op==2){
        cout<< a - b<<endl;
    }else if(op==3){
        cout<< a *b<<endl;
    }else if(op==4){
        cout<<a / b<<endl;
    }else{
        cout<<"invalid input"<<endl;
    }
    return 0;
}