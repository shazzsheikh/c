#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    int i=1,j=1;
    for(;;)
    {
        if(i>5)
            break;
        else
          j+=i;
          printf("%d\n",j);
          i+=j;
           return 0;
    }
   
    
    
}
