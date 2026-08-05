// Insert an element into the array at user defined position.

#include <stdio.h>
int main(){
    int arr[10] ;
    int i ;
    //Enter the elements in the array
    printf("Enter the 10 numerical values for the array:-");
    for(i=0 ; i<10 ; i++){
        scanf("%d",&arr[i]);
    }
    //Display the array
    printf("\nThe array:-");
    for(i=0 ; i<10 ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

