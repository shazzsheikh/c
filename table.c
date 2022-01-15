#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,i,d;
    printf("enter the any no. that you are print");
    scanf("%d",&a);
    for ( i = 1; i <= 10; i++)
    {
        d=a*i;
        printf("%d*%d=%d\n",a,i,d);

    }

    return 0;
}
