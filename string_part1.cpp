// #include<iostream>
// using namespace std;
// int main(){
//     char str[100];
//     cin.getline(str,100);

//     cout<<str<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    char str[] = "Kunal raj";
    int len = 0; 

   for(int i = 0;str[i] !='\0';i++){
    len++;
   }
   cout<<len<<endl;
}