//Addition having two parameters

// #include<iostream>
// using namespace std;
// int add(int num1,int num2){
//     int sum = num1+num2;
//     return sum;
// }

// int main(){
//     int a =5,b= 8;
//     cout<<add(a,b);
//     return 0;
// }

//addition having multiple parameter with integer and float.

// #include<iostream>
// using namespace std;
// int add(int num1,int num2){
//     int sum = num1+num2;
//     return sum;
// }
// int add(int num1,int num2,int num3){
//     int sum = num1+num2+num3;
//     return sum;
// }
// float add(float num1, float num2){
//     float sum = num1+num2;
//     return sum;
// }

// int main(){
//     int a =5,b= 8;
//     float c = 4.5,d=8.2;
//     cout<<add(a,b,1)<<endl;
//     cout<<add(c,d);
//     return 0;
// }


//standard library function

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     cout<<pow(2,3)<<endl;
//     cout<<sqrt(16)<<endl;
//     cout<<sqrt(24)<<endl;

//     int ans = sqrt(24);
//     cout<<ans<<endl;

//     double doubleans = sqrt(24);
//     cout<<doubleans<<endl;
// }

//pass by value

// #include<iostream>
// using namespace std;
// void change(int z){
//     z= 100;
// }
// int main(){
//     int a = 5;
//     change(a);
//     cout<<a;
// }

//pass by reference
// #include<iostream>
// using namespace std;
// void change(int &z,int &y){
//     z = 100;
//     y = 200;
// }
// int main(){
//     int a = 5, b = 10;
//     change(a,b);
//     cout<<a<<" "<<b;
// }

//default parameter value
#include<iostream>
// int add(int a,int b = 1, int c = 3){
//     return a+b+c;
// }
// using namespace std;
// int main(){
//     cout<<add(5,3,2)<<endl;
//     cout<<add(2)<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
void decrease(int n1, int n2){
    n1--;
    n2 = n2-2;
    cout<<n1<<":"<<n2<<endl;
}
int main(){
    int p = 26;
    int q = 13;

    decrease(p,q);
    cout<<p<<":"<<q<<endl;
    return 0;
}