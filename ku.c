#include <stdio.h>
#include <string.h>

void parser(char * k)
{
 while(k[0] ==' ')
  {
        //Shift the string to the left
        for (int i = 0; i < strlen(k); i++)
        {
            /* code */
            k[i] = k[i+1];
        }
    }
}    
int main()
{
    char string[] = "               <harrysdfsdfsdf>this is a heading    </harry>     ";
    parser(string);
    printf("The parsed string is ~~%s~~", string);
    return 0;
}