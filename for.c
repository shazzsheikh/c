#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,k;
    for (i=1;i<=3;i++)
    {
        for (j=1; j <= 3; j++)
        {
            for ( k = 1; k <= 3; k++)
            {
                if (i==j || j==k || k==i)
                 continue;
                 printf("%dthis is your no.\n",i*100+j*10+k);
                    
                
                
            }
            
        }
    }
    return 0;
}