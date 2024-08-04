#include<stdio.h>
int main(){
    int hw[5][2];
    int i, j,count=0;

    for(int i=0; i<5; i++){
        printf("Enter the height and weight of the person : %d -> ",i+1);
        for(int j=0; j<2; j++){
            scanf("%d",&hw[i][j]);
        }
        if (hw[i][0] > 170 || hw[i][0] < 50)
        {
            count++;
        }
    }

    printf("Greater or Lower Number of heights : %d",count);
    return 0;

}