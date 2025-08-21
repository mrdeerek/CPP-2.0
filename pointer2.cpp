// #include<iostream>
// using namespace std;
// int main(){
//     int i =10;
//     int *a = &i;
//     *a = *a+2;
//     cout<<a<<endl;
//     cout<<*a<<endl;
//     cout<<i<<endl;
// }


    // int i = 10;
    // int a = i;
    // a++;
    // cout<<i<<endl;

    // int *p = &i;
    // cout<<"before increasing"<<i<<endl;

    // (*p)++;
    // cout<<"After increasing "<<i<<endl;
    // cout<<"Address"<<&i<<endl;
    // }


// #include<iostream>
// using namespace std;
// void increment(int *p){
//     *p = *p + 10;
// }
// int main(){
//     int x = 10;
//     increment(&x);
//     cout<<x<<endl;
// }

// #include<iostream>
// using namespace std;
// void stringuu(string *s){
//     cout<<*s;
// }
// int main(){
//     string s = "Kunal hi hu mai";
//     stringuu(&s);
//     return 0;
// }

//Array Parameters and Pointers
// #include<iostream>
// using namespace std;
// void func(int a[]){
//     int n = sizeof(a)/sizeof(int);
//     cout<<a[i]<<" ";
//     cout<<endl;
// }

// void fun(int a[],int n){
//     int n = sizeof(a)/sizeof(int);
//     for(int i = 0;i<n;i++){
//         cout<<a[i]<<" ";
//         cout<<endl;
//     }
// }
// int main(){
//     int a[] = {1, 2, 3, 4, 5};
//     int n = sizeof(a)/sizeof(int);
//     for(int i = 0;i<n;i++){
//         cout<<endl;
//     }
//     func(a);
//     fun(a,n);
// }

//Accessing Elements: *(arr + 2) vs ptr[2]
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {10,20,30,40};
//     int *ptr = arr;
//     cout<<*(arr + 2)<<endl;
//     cout<<ptr[2]<<endl;
//     return 0;
// }

//Differences Between Array and Pointer in Detail
// #include<iostream>
// using namespace std;
// int main(){
//     int a[] = {1,2,3};
//     int *p1 = a; // Pointer to the first element of the array
//     int (*p2)[3] = &a;
//     cout<<*p1<<endl;
//     cout<<**p2<<endl;
//     return 0;
// }

//NUll Pointer
// #include<iostream>
// using namespace std;
// int main(){
//     int *ptr = NULL;
//     if(ptr == NULL){
//         cout<<"pointer is null";
//     }
// }

// Pointer Increment and Decrement
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {10,20,30,40};
//     int *ptr = arr;
//     cout<<*ptr<<" "<<ptr<<endl;
//     ptr++;
//     cout<<*ptr<<" "<<ptr<<endl;
//     ptr--;
//     cout<<*ptr<<" "<<ptr<<endl;
//     ptr += 2;
//     cout<<*ptr<<" "<<ptr<<endl;
//     return 0;
// }

// Adding/Subtracting an Integer to/from a Pointer
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {10,20,30,40};
//     int *ptr = arr;
//     cout<<*ptr<<" "<<ptr<<endl;

//     ptr = ptr +3;
//     cout<<*ptr<<" "<<ptr<<endl;

//     ptr = ptr - 2;
//     cout<<*ptr<<" "<<ptr<<endl;
//     return 0;
// }

//Subtracting Two Pointers
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {10,20,30,40};
//     int *ptr1 = arr;
//     int *ptr2 = arr + 3;
//     cout<<*ptr1<<endl;
//     cout<<*ptr2<<endl;
//     cout<<ptr2 - ptr1<<endl;
//     return 0;
// }

//practice questions
// find the sizeof(integer)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {10,20,30,40};
//     int *ptr = arr;
//     cout<<sizeof(arr)<<endl;
//     cout<<sizeof(ptr)<<endl;
//     return 0;
// }

// find the sizeof(char)
// #include<iostream>
// using namespace std;
// int main(){
//     char arr[] = {'k','u','n','a','l'};
//     char *ptr = arr;
//     cout<<sizeof(arr)<<endl;
//     cout<<sizeof(ptr);
//     return 0;
// }

//for ++*ptr
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {10,20,30};
//     int *ptr = arr;
//     ++*ptr;
//     cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<*ptr;
// }

//for *ptr++
#include<iostream>
using namespace std;
int main(){
    int arr[] = { 10,20,30,40};
    int *ptr = arr;
    *ptr++;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<*ptr;
}