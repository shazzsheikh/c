#include <stdio.h>
#include <conio.h>
struct travel
{
    char name[55];
    char dn[20];
    char route[40];
    int kms;
} d1, d2, d3;

int main()
{
    printf("enter the details of the driver\n\n");
    printf("enter the name of the first driver\n\n");
    scanf("%s", &d1.name);
    printf("enter the driving lincesence of the driver\n\n");
    scanf("%s", &d1.dn);
    printf("enter the route of the first driver\n\n");
    scanf("%s", &d1.route);
    printf("enter the kms of the first driver\n\n");
    scanf("%d", &d1.kms);

    printf("enter the details of the driver\n\n");
    printf("enter the name of the second driver\n\n");
    scanf("%s", &d2.name);
    printf("enter the driving lincesence of the second driver\n\n");
    scanf("%s", &d2.dn);
    printf("enter the route of the second driver\n\n");
    scanf("%s", &d2.route);
    printf("enter the kms of the second driver\n\n");
    scanf("%d", &d2.kms);

    printf("enter the details of the driver\n\n");
    printf("enter the name of the first driver\n\n");
    scanf("%s", &d3.name);
    printf("enter the driving lincesence of the driver\n\n");
    scanf("%s", &d3.dn);
    printf("enter the route of the first driver\n\n");
    scanf("%s", &d3.route);
    printf("enter the kms of the first driver\n\n");
    scanf("%d", &d3.kms);
    printf("\nprinting a self driver");
    printf("1st driver name %s", d1.name);
    printf("1st driver dreinhg %s", d1.dn);
    printf("1st driver route %s", d1.route);
    printf("1st driver kms %d", d1.kms);
    return 0;
}
