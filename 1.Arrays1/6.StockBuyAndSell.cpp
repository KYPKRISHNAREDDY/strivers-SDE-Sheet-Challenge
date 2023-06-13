#include<bits/stdc++.h>
using namespace std;

//BruteForce
int maxProfit(vector<int> &arr){
    int maxPro=0;
    int n=arr.size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i])
            {
                maxPro=max(arr[j]-arr[i],maxPro);
            }
        }
    }
    return maxPro;
}

//optimized
int maxProfit2(vector<int> &arr){
    int ans=0;
    int n=arr.size();
    int minPrice=INT_MAX;
    for(int i=0;i<arr.size();i++){
        minPrice=min(minPrice,arr[i]);
        ans=max(ans,arr[i]-minPrice);
    }
    return ans;
}

int main(){
    vector<int> arr={7,1,5,3,6,4};
    int ans=maxProfi(arr);

}