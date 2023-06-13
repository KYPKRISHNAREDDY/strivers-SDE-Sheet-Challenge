#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> setZero(vector<vector<int>> &matrix){
    int m=matrix.size();
    int n=matrix[0].size();
    unordered_set<int> row;
    unordered_set<int> col;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                row.insert(i);
                col.insert(j);
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(row.count(i)>0 || col.count(j)>0)
            {
                matrix[i][j]=0;
            }
        }

    }
    return matrix;
}

int main(){
    vector<vector<int>> matrix={{1,2,3},{4,5,0},{7,6,0}};
    vector<vector<int>> ans=setZero(matrix);

    cout<<"The Final matrix is "<<"\n";
    for(auto it:ans){
        for(auto ele:it){
            cout<<ele<<" ";
        }
        cout<<"\n";
    }
    return 0;
}