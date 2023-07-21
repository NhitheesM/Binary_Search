#include<bits/stdc++.h>
int CountSmallerThanOrEqualToMid(vector<int>&arr ,int m){
    int low=0;
    int high=arr.size()-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]<=m){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}

int getMedian(vector<vector<int>> &matrix)
{   
    int low=0;
    int high=INT_MAX;
    int mid;
    int rows=matrix.size();
    int cols=matrix[0].size();

    while(low<=high){
        mid=(low+high)/2;
        int count=0;
        for (int i = 0; i < rows; i++) {
          count += CountSmallerThanOrEqualToMid(matrix[i], mid);
        }
        if(count<=(rows*cols)/2){
            low=mid+1;
        } else {
          high = mid - 1;
        }
    }
    return low;
}