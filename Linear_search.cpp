#include<iostream>
using namespace std;
bool Linear_Search(int matrix[3][3],int rows,int column,int key){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(matrix[i][j] == key){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int column = 3;
    cout<<Linear_Search(matrix,rows,column,15)<<endl;
    return 0;
}