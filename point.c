#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    int arr[]={10,20,30,40,50,60,70,80};
    int *i,*j;
    i=&arr[1];
    j=&arr[6];
    printf("%d %d",j-i,*j-*i);
    return 0;
}
