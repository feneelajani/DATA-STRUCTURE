//   Create an array of size 10, input values and display sum and average of all elements in the array.

#include <stdio.h>
int main(){
    int arr[10] ;
    int i , sum=0;
    float average;
    //Enter elements in the array
    printf("Enter the 10 numericle value for your array:-");
    for(i=0 ; i<10 ; i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    average = (float)sum/10 ;
    //Display elements of array
    printf("Elements of the arrays are:-");
    for(i=0 ; i<10 ; i++){
        printf(" %d",arr[i]);
    }
    //Display sum and average
    printf("\nSum = %d", sum);
    printf("\nAverage = %f", average);
    return 0;
}
