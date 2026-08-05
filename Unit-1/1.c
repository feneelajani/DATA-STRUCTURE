//  Create an array of size 10, input values and print the array, and search an element in the array.

#include <stdio.h>
int main(){
    int arr[10] ;
    int i , key , found=0;
    //Enter elements in the array
    printf("Enter the 10 numericle value for your array:-");
    for(i=0 ; i<10 ; i++){
        scanf("%d",&arr[i]);
    }
    //Display elements of array
    printf("Elements of the arrays are:-");
    for(i=0 ; i<10 ; i++){
        printf(" %d",arr[i]);
    }
    //Search element in the array
    printf("\nEnter the key to search in the array:-");
    scanf("%d",&key);
    for(i=0 ; i<10 ; i++){
        if(key==arr[i]){
            printf("The element %d is founded at %d position",key , i+1);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Element was not founded");
    }
    return 0;
}
