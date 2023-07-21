#include<bits/stdc++.h>

int search(int* arr, int n, int key) {
    int low=0;
    int mid;
    int high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<=key&&key<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else {
            if(arr[mid]<key&&key<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}