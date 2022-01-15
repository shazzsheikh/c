#include <stdio.h>
void reversearr(int arr[])
{
    int i,temp;
    for (i = 0; i < 3; i++)
    {
        temp=arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=temp;
    }
}
int main(int argc, char const *argv[])
{
    int i;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    for (i = 0; i < 7; i++)
    {
        printf("%d", arr[i]);
    } 
    printf("\n");
    reversearr(arr);
    printf("\n\nafter the reverse the the ");
    for (i = 0; i < 7; i++)
    {
        printf("%d", arr[i]);
    } 
    return 0;
}
