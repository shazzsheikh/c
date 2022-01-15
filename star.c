#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,j;
    printf("how many row to print a tringle");
    scanf("%d",&n);
   printf("type of 0 for trigular and type of 1 for trigular ");
   scanf("%d",&i);
   if (i==0)
   {
       for ( i = 0; i < n; i++)
       {
           for ( j = 0; j <=i ; j++)
           {
               printf("*");
               
           }
          printf("\n"); 
       }
       
   }
   else if (i==1)
   {
       for ( i = 0; i < n; i++)
       {
            for ( j = n-1; j >= i ; j--)
            {
                printf("*");
            }
           printf("\n");
       }
       
   } 
    return 0;
}
