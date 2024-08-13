#include<stdio.h>
struct cricket
{
    /* data */
    char player_name[25];
    char team_name[25];
    float batting_avg;
};

int main(){
    int n,i;

    printf("enter the number of players : ");
    scanf("%d",&n);
    struct cricket player[n];
    for(i=0; i<n; i++){
        printf("Enter the name of the player-%d : \t", i+1);
        scanf("%s",&player[i].player_name);

        printf("Enter the name of the Team of the Player-%d : \t",i+1);
        scanf("%s",&player[i].team_name);

        printf("Enter the batting average of the Player-%d : \t",i+1);
        scanf("%f",&player[i].batting_avg);
    }

    printf("\n\tPlayer Name\t\tTeam Name\t\tBatting Average\t\n");

    for(i=0; i<n; i++){
        printf("\n\t%s\t\t%s\t\t%.2f\t\n",player[i].player_name,player[i].team_name,player[i].batting_avg);
    }

    return 0;

}