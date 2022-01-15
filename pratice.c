#include <stdio.h>
#include <stdio.h>
#include <time.h>
int randomgenrate(int n)
{
    srand(time(NULL));
    return rand() % n; 
}

int main(int argc, char const *argv[])
{
    int r; 
    r=randomgenrate(4);
    printf("computer turns that %d",r);
    return 0;
}
