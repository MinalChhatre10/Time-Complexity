//Array Intersection

//You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.



void quickSort(int *input,int size){
     if(size==0||size==1)
        return;
    
    int counter=0;
    for(int i=1;i<size;i++)
        if(input[i]<input[0])
            counter++;
    int temp=input[counter];
    input[counter]=input[0];
    input[0]=temp;
    
    int i=0,j=size-1;
    while(i<counter&&j>counter)
    {
    if(input[i]<input[counter])
        i++;
    else if(input[j]>=input[counter])
        j--;
    else{
        int temp1=input[i];
        input[i]=input[j];
        input[j]=temp1;
        i++;
        j--;
        }
    }
    quickSort(input,counter);
    quickSort(input+counter+1,size-1-counter);
}
void intersection(int *arr1, int *arr2, int n, int m) 
{
  quickSort(arr1,n);
  quickSort(arr2,m);
    int i=0,j=0;
	while(i<n && j<m){
        if(arr1[i]!=arr2[j]){
            if(arr1[i]<arr2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
}



//   unordered_map<int,int> map;
//     for(int i =0;i<n;i++){
//         int a=arr1[i];
//         if(map.count(a)==0){
//             map[a]=1;
//         }
//         else{
//             int prevcount = map[a];
//             map[a]=prevcount+1;
//         }
//     }
//     for(int i=0;i<m;i++){
//         int a = arr2[i];
//         if(map.count(a)>0){
//             int count =map[a];
//             if(count !=0){
//                  cout<<a<<" ";
//                 map[a]=count-1;
               
//             }
//         }
//     }
//     cout<<endl;
