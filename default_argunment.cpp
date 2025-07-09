// #include<iostream>
// using namespace std;
// void PrintDetails(int id,string name ="NA",string address = "NA"){
//     cout<<"id is "<<id<<endl;
//     cout<<"name is "<<name<<endl;
//     cout<<"address is "<<address<<endl;
// }
// int main(){
//     PrintDetails(101, "Kunal", "Bihar");
//     cout<<endl;
//     PrintDetails(102, "Diksha");
//     cout<<endl;
//     PrintDetails(103);
//     cout<<endl;
//     return 0;
// }


/*Default Values Can Be Provided in Declaration or Definition
You can specify default values in either the declaration or the definition of the function, but not both.*/
#include<iostream>
using namespace std;
int add(int a,int b,int c = 0, int d = 0);
int main(){
    cout<<add(10,20,30)<<endl;
    cout<<add(10,20)<<endl;
    return 0;
}

int add(int a,int b,int c, int d){
    return a+b+c+d;
}