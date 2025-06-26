#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;

    if(marks>=90){
        cout<<"you got a grade"<<endl;
        if(marks == 99){
            cout<<"excellent"<<endl;
        }else{
            cout<<"good"<<endl;
        }
    }else if(marks>=80){
        cout<<"You got B grade"<<endl;
        if(marks==85){
            cout<<"super"<<endl;
        }else{
            cout<<"Ok"<<endl;
        }
    }else{
        cout<<"You get some grade"<<endl;
    }
    return 0;
}
