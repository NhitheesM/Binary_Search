
int searchInsert(vector<int>& arr, int m)
{	
	int n = arr.size();
	int i=0;
	if(m < arr[0]) return 0;
	while(i < n-1) {
		if(arr[i] == m) return i;
		else if(m < arr[i] && m > arr[i-1]) return i;
		i++;
	}

	return n;
}
