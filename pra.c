#include <conio.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
       int i, k;
       float num;
       for (i = 1; i > 0; i++)
       {
              printf("\n\nenter the choice the you are prnted");
              printf("\n1. convert kms to miles ");
              printf("\n2. conver inches to foot ");
              printf("\n3. convert cms to inches");
              printf(" \n4. convert pound to kgs ");
              printf("\n 5 convert inches to meters ");
              printf("\n 6 exit ");
              scanf("%d", &k);
              switch (k)
              {
              case 1:
                     printf("enter the number the u are convert\n");
                     scanf("%f", &num);
                     printf(" that u know 1kms is 0.621371\n");

                     printf("%f", num * 0.621371);
                     break;
              case 2:
                     printf(" enter the number the u are convert ");
                     scanf("%f", &num);
                     printf(" that u know  is 1 inches is 0.0833\n");

                     printf("%f", num * 0.0833);
                     break;
              case 3:
                     printf(" enter the number the u are convert ");
                     scanf(" %f", &num);
                     printf(" that u know 1cms  is  0.394\n");

                     printf("  %f ", num * 0.394);
                     break;
              case 4:
                     printf(" enter the number the u are convert ");
                     scanf(" %f", &num);
                     printf(" that u know 1pound is 0.454kg\n ");

                     printf("  %f ", num * 0.454);
                     break;
              case 5:
                     printf(" enter the number the u are convert ");
                     scanf(" %f", &num);
                     printf(" that u know  is 0.0254m\n");

                     printf("  %f ", num * 0.0254);
                     break;
              }
               if (k == 6)
               {
                     printf("thank u using this program");
                     break;
               }
               if(k!=1||k!=2||k!=3||k!=4||k!=5||k!=6)
                     printf(" u are choice a wrong number please try again");
                     
              
       }
       return 0;
}
