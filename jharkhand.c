//dynamic mamory allcation
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char *ptr;
    int j, i = 0;
    while (i < 3)
    {
        printf("enter the charter that you have to  ");
        scanf("%d", &j);
        ptr = (char *)malloc((j + 1) * sizeof(char));
        printf("enter employer id  ");
        scanf("%s", ptr);
        printf("that is employer is  %s\n", ptr);

        i = i + 1;
    }

    /*printf("enter the no.  that you have to store");
    scanf("%d", &i);
    ptr = (char *)malloc(i);
    printf("enter  tha empoler id");
    scanf("%c", &ptr);
    printf("first emp no.%c", ptr);
    // free(ptr);
    printf("\n\nenter the no.  that you have to store");
    scanf("%d", &i);
    ptr = (char *)malloc(i);
    printf("enter  tha empoler id");
    scanf("%s", &ptr);
    printf("secoud emp no.%s", ptr);

    //free(ptr);
    printf("\n\nenter the no.  that you have to store");
    scanf("%d", &i);
    ptr = (char *)malloc(i);
    printf("enter  tha empoler id");
    scanf("%s", &ptr);
    printf("thirdt emp no.%s", ptr);

    //free(ptr);
*/
    return 0;
}
