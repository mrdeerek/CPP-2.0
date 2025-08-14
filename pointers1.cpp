#include<iostream>
using namespace std;
int main(){
    int num = 4;

    cout<<num<<endl;

    cout<<"Address of num is "<<&num<<endl;

    int *ptr = &num;

    cout<<"Address of ptr "<<ptr<<endl;
    cout<<"Valueof ptr "<<*ptr<<endl;

    double d = 5.9;
    double *p2 = &d;

    cout<<"Address is "<<p2<<endl;
    cout<<"Value is"<<*p2<<endl;

    cout<<"Size of int is "<<sizeof(num)<<endl;
    cout<<"Size of pointer is "<<sizeof(ptr)<<endl;
}