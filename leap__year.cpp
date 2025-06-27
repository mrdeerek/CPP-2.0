//condition for being leap year.
/*1) it must have gap of 400 in 1oo century years.
2) it must be totally divisible by 4. */

#include<iostream>
using namespace std;

int main(){
    int year;
    cin>>year;

    if((year%400==0) ||(year%4==0) && (year%100 !=0)){
        cout<<"year is leap year"<<endl;
    }else{
        cout<<"year is not a leap year"<<endl;
    }
    return 0;
}