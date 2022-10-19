//Pair sum in array
//You have been given an integer array/list(ARR) and a number 'num'. Find and return the total number of pairs in the array/list which sum to 'num'.
int pairSum(int *arr, int n, int num)
{
    int cnt=0;
	for(int i =0;i<n;i++){
    for(int j=i+1;j<n;j++){
    	int sum=0;
        sum=arr[i]+arr[j];
        if(sum==num){
            cnt++;
        }
    }
    }
    return cnt;
}
