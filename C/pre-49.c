#include<stdio.h>
int main(){
    int temp,a=10,*p,b=20,*q;
    p=&a;
    q=&b;
    printf("%d %d\n",*p,*q);

    temp=p;
    p=q;
    q=temp;

    printf("%d %d", *p, *q);

    return 0;

}