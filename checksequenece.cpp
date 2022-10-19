//Does s contain t ?
//Send Feedback
//Given two string s and t, write a function to check if s contains all characters of t (in the same order as they are in string t).
//Return true or false.
//Do it recursively.
//E.g. : s = “abchjsgsuohhdhyrikkknddg” contains all characters of t=”coding” in the same order. So function will return true.
//Input Format :
//Line 1 : String s
//Line 2 : String t
//Output Format :
//true or false
//Sample Input 1 :
//abchjsgsuohhdhyrikkknddg
//coding
//Sample Output 1 :
//true
//Sample Input 2 :
//abcde
//aeb
//Sample Output 2 :
//false

bool checksequenece(char large[] , char*small) {
	int i=0,j=0;
     while(small[i]!='\0'&&large[j]!='\0'){
   			if(small[i]!=large[j]){
                j++;
            }
         	else{
                i++;
                j++;
            }
         
 	}
    if(small[i]=='\0'){
        return true;
    }
    else{
        return false;
    }
}


//
//Complexity of a Recurrence Relation
//Send Feedback
//Which one of the following correctly determines the solution of the recurrence relation with T(1) = 1?
//T(n) = 2T(n/2) + Logn
//
//
//Recurrence Relation for Tower of Hanoi Problem
//Send Feedback
//The recurrence relation capturing the optimal execution time of the Towers of Hanoi problem with n discs is :

