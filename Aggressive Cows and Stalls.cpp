bool MinDistancePossible(vector<int> &arr,int cows,int distance){
    int maxCows=1;
    int last=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]-last>=distance){
            maxCows++;
            last=arr[i];
        }
        else{
            continue;
        }
    }
    if (maxCows>=cows){
        return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{   
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int low=0;
    int high=stalls[n-1];
    int mid;

    while(low<=high){
        mid=(low+high)/2;
        if(MinDistancePossible(stalls,k,mid)){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}