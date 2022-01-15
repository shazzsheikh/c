#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
  int a[25], i,num,count=0;
  for ( i = 0; i < 25; i++)
  {
    scanf("%d",&a[i]);
  }
printf("enter the value u can sarech");
scanf("%d",&num);
for ( i = 0; i < 25; i++)
{
  if (a[i]==num)
  {
   count++;  
  }
  else
  {
    printf("no oneis there");
  }
  
}
printf("%d is that times%d",num,count);


  return 0;
}
