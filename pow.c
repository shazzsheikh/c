#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,i;
    float x,term,sum,act; 
    printf("enter the value");
    scanf("%f", &x);
    a=2;
    term=(x-1)/x;
    sum=term;

    for ( i = 1; i < 7; i++ )
    {
        act=pow(term,a)/2;
        //act=pow(term,a)/a;
        sum=sum+act;
        a++;

    }
    printf("%f this u sum\n", sum);
    return 0;
}