//1. Changes Are Not Reflected Outside the Function
// #include<iostream>
// using namespace std;
// void func1(int z){
//     z +=5;
// }
// int main(){
//     int x = 5;
//     func1(x);
//     cout<<x<<endl;
//     return 0;
//}

//Solving Issues with References
// #include<iostream>
// using namespace std;
// void func1(int x){
//     x += 2;
// }

// void func2(int &x){
//     x += 2;
// }
// int main(){
//     int x = 2;
//     func1(x);
//     cout<<x<<endl;
//     func2(x);
//     cout<<x<<endl;

//     return 0;
// }

//Code Example: Using const Reference
#include<iostream>
using namespace std;
void func (const string &s){
    cout<<s<<endl;
}
int main(){
    string s = "KunalRaj";
    func(s);
    return 0;
}


