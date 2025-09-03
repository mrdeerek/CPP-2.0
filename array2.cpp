// Pass Array to Function
// #include<iostream>
// using namespace std;
// void printArray(int arr[],int n){
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[5] = { 2,4,9,8,9};

//     int n = sizeof(arr)/sizeof(arr[0]);

//     printArray(arr,n);
//     return 0;
// }

//Check if Array is Sorted

// #include<iostream>
// using namespace std;
// bool check_sorted(int arr[],int n){
//     for(int i = 1; i < n; i++){
//         if(arr[i] < arr[i - 1]){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];

//     for(int i =0;i<n;i++){
//         cin>>arr[i];
//     }

//     if(check_sorted(arr,n) == false){
//         cout<<"Not sorted";
//     }else{
//         cout<<"Sorted";
//     }
//     return 0;
// }

// Count Distinct in an Array

// Problem Statement
// Given an array of integers, the goal is to determine the total number of distinct elements in the array. For example:

// Input: [10, 20, 10, 20, 30]
// Output: 3
// Explanation: The distinct elements are 10, 20, and 30.
// Input: [1, 2, 3, 3]
// Output: 3
// Explanation: The distinct elements are 1, 2, and 3.
// Input: [1, 1, 1, 1]

// #include<iostream>
// using namespace std;
// int check_distinct_count(int arr[],int n){
//     int count = 0;

//     for(int i = 0;i<n;i++){
//         bool isDistint = true;

//         for(int j = i-1;j>=0;j--){
//             if(arr[i] == arr[j]){
//                 isDistint = false;
//                 break;
//             }
//         }
//         if (isDistint){
//             count++;
//         }
//     }
//     return count;
// }
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];

//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<check_distinct_count(arr,n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// bool check_if_sorted(int arr[], int n){
//     for(int i = 1;i<n;i++){
//         if(arr[i]<arr[i-1]){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];

//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }

//     if(check_if_sorted(arr,n) == false){
//         cout<<"Not sorted";
//     }else{
//         cout<<"Sorted";
//     }

//     return 0;

// }

// #include<iostream>
// using namespace std;
// int count_Distinct(int arr[],int n){
//     int count = 0;

//     for(int i = 0;i<n;i++){
//         bool isDistinct = true;

//         for(int j = i-1;j>=0;j--){
//             if(arr[i]== arr[j]){
//                 isDistinct = false;
//                 break;
//             }
//         }
//         if(isDistinct){
//         count++;
//         }
    
//     } 
//     return count;
// }
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];

//     for(int i = 0;i<n;i++){
//         cin>>arr[n];
//     }

//     cout<<count_Distinct(arr,n);
//     return 0;
// }

/*Sum of an Array

comments
Problem Statement
Given an array of integers, calculate the sum of all its elements. For example:

Input:
Array size: 5
Elements: [1, 2, 3, 4, 5]
Output: 15
Explanation: The sum is calculated as 1 + 2 + 3 + 4 + 5 = 15.
Input:
Array size: 3
Elements: [1, 2, 3]
Output: 6
Explanation: The sum is 1 + 2 + 3 = 6.
Approach
To solve this problem, we can take the following approach:

Use a loop to iterate over all elements of the array.
Maintain a variable (sum) to store the running total.
Add each array element to the sum variable during the iteration.
Return the final value of sum.*/
 
// #include<iostream>
// using namespace std;
// int add(int arr[], int n){
//     int ans = 0;
//     for(int i = 0;i<n;i++){
//         ans += arr[i];
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];

//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<add(arr,n);
//     return 0;
//}

/*Average of an Array

comments
Problem Statement
Given an array of integers, compute the average of all the elements. The average is calculated as the sum of all elements divided by the number of elements.

Examples
Input:
Array size: 4
Elements: [10, 20, 30, 40]
Output: 25.0
Explanation: Average is (10 + 20 + 30 + 40) / 4 = 100 / 4 = 25.0
Input:
Array size: 4
Elements: [4, 7, 8, 12]
Output: 7.75
Explanation: Average is (4 + 7 + 8 + 12) / 4 = 31 / 4 = 7.75
Input:
Array size: 4
Elements: [1, 1, 1, 1]
Output: 1.0
Explanation: Average is (1 + 1 + 1 + 1) / 4 = 4 / 4 = 1.0
Approach
The solution involves the following steps:

Read the size of the array (n) and the array elements.
Calculate the sum of all elements in the array using a loop.
Divide the sum by the size of the array to compute the average.
Use typecasting to ensure the result is a floating-point value if necessary.*/

// #include<iostream>
// using namespace std;
// double average_array(int arr[],int n){
//     int sum = 0;
//     for(int i = 0;i<n;i++){
//         sum += arr[i];
//     }
//     return double(sum)/n;
// }
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];

//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<average_array(arr,n);
// }

/*Problem Statement
Given an array of integers, determine the maximum element in the array.

Examples
Input:
Array: [1, 2, 3, 4, 5]
Output: 5
Explanation: Among all elements, 5 is the largest.
Input:
Array: [1, 2, 3]
Output: 3
Explanation: The largest value is 3.
Approach
The task is solved by iterating through the array, comparing each element to a variable that stores the current maximum value. If a larger element is found during iteration, the maximum value is updated.

Steps:
Initialize a variable max to hold the maximum value. Set it to the first element of the array initially.
Iterate through the array starting from the second element.
Compare each element with the current max value:
If the current element is greater, update max with the current element.
After completing the iteration, max will hold the maximum value.*/

#include<iostream>
using namespace std;
int max_element(int arr[],int n){
    int ans = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    cout<<max_element(arr,n);
    return 0;
}