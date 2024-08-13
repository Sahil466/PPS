#include<stdio.h> 

int main(){

    int n,k,i,j;

    printf("Enter the row : ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        //For loop for the spaces
        for(j=0; j<2*(n-i)-1; j++){
            printf(" ");
        }
        //For loop for the printing the numbers
        for(k=0; k<2*i+1; k++){
            printf("%d ",k+1);
        }
        printf("\n");
    }
    return 0;

}
