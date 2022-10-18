//Find the Unique Element
//
//You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
//Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
//You need to find and return that number which is unique in the array/list.

int findUnique(int *arr, int n) {
    int r=0;
  	for(int i =0;i<n;i++){
        r=r^arr[i];
    }
    return r;
        
}
//time complexity - o(n)
