#include <stdio.h>

int main() {
    int Bhai[10],i;
    printf("10 baacho k marks pls\n");
    for(i=0;i<10;i++){
        printf("Marks of student %d: ",i);
        scanf("%d",&Bhai[i]);
    }
    int max=Bhai[0];
    int min=Bhai[0];
    for(i=0;i<10;i++){  
        if(Bhai[i]>max)
        max = Bhai[i];
        if(Bhai[i]<min)
        min = Bhai[i];
   }
    printf("max: %d",max);
    printf("\nminn: %d",min);
    return 0;
}