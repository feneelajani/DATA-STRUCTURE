//  Create arrays A, B and C of size 3, perform C = A + B.

#include <stdio.h>
int main(){
    int A[3] , B[3] , C[3] ;
    int i ;
    //Enter elements in the array
    printf("Enter the 3 numericle value for your array A:-");
    for(i=0 ; i<3 ; i++){
        scanf("%d",&A[i]);
    }
    printf("\nEnter the 3 numericle value for your array B:-");
    for(i=0 ; i<3 ; i++){
        scanf("%d",&B[i]);
    }
    // A + B in C
    for(i=0 ; i<3 ; i++){
        C[i] = A[i] + B[i];
    }
    //Display elements of array
    printf("\nElements of the arrays A are:-");
    for(i=0 ; i<3 ; i++){
        printf(" %d",A[i]);
    }
    printf("\nElements of the arrays B are:-");
    for(i=0 ; i<3 ; i++){
        printf(" %d",B[i]);
    }
     printf("\nElements of the arrays C are:-");
    for(i=0 ; i<3 ; i++){
        printf(" %d",C[i]);
    }
    return 0;
}

