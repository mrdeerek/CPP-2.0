#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;

    if(marks>=90){
        cout<<"A grade"<<endl;
    }else if(marks>=80){
        cout<<"B grade"<<endl;
    }else if(marks>=70){
        cout<<"C grade"<<endl;
    }else{
        cout<<"you can do better"<<endl;
    }
    return 0;
}