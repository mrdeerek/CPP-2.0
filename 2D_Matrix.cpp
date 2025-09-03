// #include<iostream>
// using namespace std;
// int main(){
//     int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int rows = 4;
//     int colomn = 3;

//     cout<<matrix[2][1]<<endl;
//     return 0;

// }

//Loops On 2D Array
// #include<iostream>
// using namespace std;
// int main(){
//     int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int rows = 4;
//     int column = 3;

//     for(int i = 0;i<rows;i++){
//         for(int j = 0;j<column;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     // cout<<endl;
//     return 0;
// }

//For taking input
#include<iostream>
using namespace std;
int main(){
    int matrix[4][3];
    int rows = 4;
    int column = 3;

    for(int i = 0;i<rows;i++){
        for(int j = 0;j<column;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i = 0;i<rows;i++){
        for(int j = 0;j<column;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
}