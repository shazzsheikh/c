#include <stdio.h>
#include <stdio.h>
#include <time.h>
int randomgenrate(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main(int argc, char const *argv[])
{
    char name[20];
    int y, r, p,s;
    printf("welcome aur game rock,paper and sessrios\n\n\n\n");
    printf("enter the name of the player that has played\n");
    scanf("%s", &name);
    // printf("enter the name of the player that has played  %s ",name);
    for (int i = 0; i < 3; i++)
    {
        printf("enter the your choice that you have to played\n 0 for rouck \n 1 for paper\n 2 for sessior");
        /*
    rock vs scissors=rock         0 vs 2 =0
    paper vs scissors=scissors      1 vs 2=2
    paper vs rock=paper           1 vs 0=1
    */
        scanf("\n%d", &y);
        printf("wait for computer turns \n");
        r = randomgenrate(3);
        printf("computer turns that %d\n", r);
        if (y == 0 && r == 2)
        {
            p++;
            printf("the  winner is %d\n ", y);
        }
        else if (y == 2 && r == 0)
        {
            s++;
            printf("the winner is %d\n", r);
        }
        else if (y == 1 && r == 2)
        {
            s++;
            printf("the winner is %d\n", r);
        }
        else if (y == 2 && r == 1)
        {
            p++;
            printf("the winner is %d\n", r);
        }
        else if (y == 1 && r == 0)
        {
            p++;
            printf("the winner is %d\n", r);
        }
        else if (y == 0 && r == 1)
        {
            s++;
            printf("the winner is %d\n", r);
        }
    }

    return 0;
}
