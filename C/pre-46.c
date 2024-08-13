#include<stdio.h>
struct time_struct
{
    int hour;
    int minute;
    int second;
};
int main(){

    struct time_struct time_struct;

    printf("Enter the value For hours : ");
    scanf("%d",&time_struct.hour);

    printf("Enter the value For Minutes : ");
    scanf("%d",&time_struct.minute);

    printf("Enter the value For Second : ");
    scanf("%d",&time_struct.second);

    printf("\t%d:%d:%d\t",time_struct.hour,time_struct.minute,time_struct.second);
    return 0;
}