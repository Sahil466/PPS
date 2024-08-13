#include<stdio.h>
int main(){

    int a[10];
    int i,j,min,temp;

    printf("Enter the Elements : ");
    for(i=0; i<10; i++){
        scanf("%d\n",&a[i]);
    }
    printf("The Entered Array Elements are : ");
    for(i=0; i<10; i++){
        printf("%d\n",a[i]);
    }

    for(i=0; i<10; i++){
        min = i;
        for(j=i+1; j<10;j++){
            if(a[min] > a[j]){
                min=j;
        }
    }
    if(min != i){
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}

printf("the Sorted Array is : \n");
for(i=0; i<10; i++){
    printf("%d ",a[i]);
}
printf("\n");

    return 0;
}