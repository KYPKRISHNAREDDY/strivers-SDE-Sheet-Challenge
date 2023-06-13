#include<bits/stdc++.h>
using namespace std;

//BruteForce

void rotate(vector<vector<int>> &matrix){
    int n=matrix.size();
    vector<vector<int>> rotated(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            rotated[j][n-i-1]=matrix[i][j];
        }
    }
}

//Optimized Solution
void rotate2(vector<vector<int>> &matrix){
    int n=matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}

int main(){
    vector<vector<int>> arr;
    arr={{1,2,3},{4,5,6},{7,8,9}};
    rotate2(arr);
    
}