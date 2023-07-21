
int floorSqrt(int n)
{
    
    int ans=1;
    int low=1;
    long long mid;
    long long high=n/2;              //as n can be 10^9.
    while(low<=high){
        mid=(low+high)/2;
        if(mid*mid<=n){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}
