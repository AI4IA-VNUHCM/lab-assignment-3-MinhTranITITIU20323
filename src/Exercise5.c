/*
5. Write a function to move all positive element of an array upfront
Ex:
______________________________________
| Input: 2 -3 4 6 -7 9 8 -2          |
| Output: 2 4 6 9 8 -3 -7 -2         |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void swap(int *s1, int *s2)
{
    int temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

void Ex5(int arr[], int n){
	//Your codes here
    int i=0,j=0,temp;
    for (i=0; i<n; i++){

        if (arr[i] > 0){
            if (i != j){
                swap(&arr[i], &arr[j]);
            }
            j++;
        }
    }
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex5(testcase, argc);
	
	return 0;
}
