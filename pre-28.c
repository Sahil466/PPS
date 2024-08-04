#include<stdio.h>
int main(){
    int s,e;
    printf("Enter the starting and ending number: ");
    scanf("%d \n %d",&s,&e);
    for(int i=s+1; i<e; i++){
        printf("%d\n",i);
    }
    return 0;
}