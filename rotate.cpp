//Rotate array
//
//You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given array/list by D elements(towards the left).
// Note:
//Change in the input array/list itself. You don't need to return or print the elements.
void rotate(int *a, int d, int n)
{
    int i =0;
    int j=n-1;
    while(i<j){
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
	 i=0;
	 j=n-d-1;
     while(i<j){
         int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
     i=n-d;
	 j=n-1;
     while(i<j){
         int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    
}

