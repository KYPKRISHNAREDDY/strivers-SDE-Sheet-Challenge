#include<bits/stdc++.h>
using namespace std;

// variation1: we are given the row number r and the column number c, and we need to find out the element at position (r,c).
 

int nCr(int r,int c){

    int res=1;
    for(int i=0;i<r;i++){
        res=res*(r-i);
        res=res/(i+1);
    }
    return res;
}
int findPascal(int r,int c){
    int ans=nCr(r-1,c-1);
}

// variation2: we are given the row number r , find out the all elements at position (r). 

void findPascalTriangle(int n){
    
    for(int c=1;c<n;c++){
        cout<<nCr(n-1,c-1);
    }
}


//OptimalApproach

void findPascalTraingleOptimal(int n){
    int ans=1;
    cout<<ans;
    for(int c=1;c<n;c++){
        ans=ans*(n-c);
        ans=ans/c;
        cout<<ans;
    }
}


//Variation3: find whole pascal Traingle

vector<vector<int>> findPascal3(int n){
    vector<vector<int>> ans;
    for(int row=1;row<=n;row++){
        vector<int> temp;
        for(int col=1;col<=row;col++)
        {
            temp.push_back(nCr(row-1,col-1));
        }
        ans.push_back(temp);
    }
    return ans;
}

vector<int> generateRow(int n){
    vector<int> ans;
    int res=1;
    for(int j=1;j<n;j++){
        res=res*(n-j);
        res=res/j;
        ans.push_back(res);
    }
    return ans;
}

vector<vector<int>> findPascal4(int n){
    vector<vector<int>> res;

    for(int row=1;row<=n;row++)
        res.push_back(generateRow(row))
}
int main(){

    findPascalTraingleOptimal(5);
}