#include<stdio.h>
#include<math.h>

int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int i;
    for(i=0; i<10; i++){
        if(a[i]%2==0)
        {
            printf(" %d is Even. \n",a[i]);
        }
        else{
            printf(" %d is Odd. \n",a[i]);
        }
    }

}