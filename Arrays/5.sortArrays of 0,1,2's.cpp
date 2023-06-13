#include<bits/stdc++.h>
using namespace std;

//bruteForce:Apply Mergesort
void sort(vector<int> &matrix){
    int c1=0,c2=0,c3=0;
    for(int i=0;i<matrix.size();i++){
        if(matrix[i]==0)c1++;
        else if(matrix[i]==0)c2++;
        else c3++;
    }

    for(int i=0;i<c1;i++)matrix[i]=0;
    for(int i=c1;i<c1+c2;i++)matrix[i]=1;
    for(int i=c1+c2;i<c1+c2+c3)matrix[i]=2;
}
//Dutch National flag algorithm

void sort2(vector<int> &matrix){
    int low=0,mid=0,high=matrix.size()-1;

    while(mid<=high){
        if(matrix[mid]==0)
        {
            swap(matrix[low],matrix[mid]);
            low++;
            mid++;
        }
        else if(matrix[mid]==0)
        {
            mid++;
        }
        else{
            swap(matrix[mid],matrix[high]);
            high--;
        }
    }

}