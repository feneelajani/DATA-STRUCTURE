#include <stdio.h>
int main(){
    int A[3][3], B[3][3], C[3][3];
    int i, j, k;
    // Input Matrix A.
    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    // Input Matrix B.
    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

}
