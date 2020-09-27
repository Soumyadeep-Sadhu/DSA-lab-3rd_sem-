/*Display address and value at address of 2-D array in different ways*/
#include<stdio.h>
void main()
{
    int a[3][4]={{100,101,102,103},{200,201,202,203},{300,301,302,303}};
    int (*p)[4];
    int i,j;
    p=a;
    printf("Printing the addresses of elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%u %u %u %u\n",&a[i][j],(*(a+i)+j),(*(i+a)+j),&p[i][j]);
        }
    }
    printf("Printing the addresses of elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d %d %d %d\n",&a[i][j],(*(p+i)+j),(*(i+p)+j),&p[i][j]);
        }
    }
}