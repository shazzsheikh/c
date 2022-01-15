#include<stdio.h>
int main()
{
    int m,o,n,p,temp,teen;
    char a[5][5],b[5][5],ab[5][5];
    printf("enter the matrix that is you\n");
    printf("enter the rows and coloum of a matrix:");
    scanf("%d%d",&m,&o);
    getchar();
    printf("you have chioce %d element of ",m*o);
    for (int i = 0; i < m; i++)
    {
        for ( int j = 0; j < o ; j++)
        {
            printf("enter the vlaue rows:%d and colomn:%d",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("enter the rows and coloum of b matrix");
    scanf("%d%d",&n,&p);
    getchar();
    printf("you have chioce %d element of ",n*p);
    for (int i = 0; i < n; i++)
    {
        for ( int j = 0; j < p ; j++)
        {
            printf("enter the vlaue rows:%d and colomn %d:",i,j);
            scanf("%d",&a[i][j]);
        }
    }


    printf("your result is veiws");
    for (int i = 0; i < o; i++)
    {
        for ( int j = 0; j < n ; j++)
        {
              temp=a[i][j]*b[j][i];
              printf("temp print %d\n",temp);

          // for (int k = 1; k < 3; k++)
          // {
          //     teen=a[j][k]*b[j][k];
          //     break;
          // }
           
            
        }
    }
    //for (int i = 0; i < 5; i++)
    //{
      //  printf("%d that is your result",temp+teen);
   // }
    
    return 0;
}

