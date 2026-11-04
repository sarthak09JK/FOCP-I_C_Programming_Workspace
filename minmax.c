#include <stdio.h>

int main() {
    int A[10],i;
    printf("Enter marks of 10 studA\n");
    for(i=0;i<10;i++){
        printf("Marks of student %d: ",i);
        scanf("%d",&A[i]);
    }
    int max=A[0];
    int min=A[0];
    for(i=0;i<10;i++){  
        if(A[i]>max)
        max = A[i];
        if(A[i]<min)
        min = A[i];
   }
    printf("max: %d",max);
    printf("\nminn: %d",min);
    return 0;
}