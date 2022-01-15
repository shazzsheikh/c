#include<stdio.h>
int main(int argc, char const *argv[])
{
  int a,b,c,d,f[10][10],s[10][10];

  printf("enter a first matrix row ans coloum " );
  scanf("%d%d",&a,&b );
  printf("enter the that element %d of  first matrix no.",a*b );
  for (int i =0 ; i < a; i++) {
    for (int j = 0; j < b; j++) {
      scanf("%d\n",&f[i][j]);
    }
  }
  printf("enter a secound matrix row ans coloum " );
  scanf("%d%d",&c,&d );
  if (b!=c) {
   printf("mtrix connot be maltiplay");
  }
  else
  printf("matrix can maltiplay\n");
  printf("enter the that element %d of  secound matrix no.",c*d );

  for (int i =0 ; i < c; i++) {
    for (int j = 0; j < d; j++) {

      scanf("%d\n",&s[i][j]);
    }
  }


  return 0;
}
