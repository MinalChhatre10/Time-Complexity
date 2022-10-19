//Check Array Rotation

//You have been given an integer array/list(ARR) of size N. It has been sorted(in increasing order) and then rotated by some number 'K' in the right hand direction.
//Your task is to write a function that returns the value of 'K', that means, the index from which the array/list has been rotated.


int arrayRotateCheck(int *arr, int n)
{ 
    int min = arr[0], min_index = 0;
    for (int i = 0; i < n; i++) {
        if (min > arr[i]) {
            min = arr[i];
            min_index = i;
        }
    }
    return min_index;
}

