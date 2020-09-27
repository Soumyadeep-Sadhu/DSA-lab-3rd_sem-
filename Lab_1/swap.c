#include<stdio.h>
void swap(int a,int b)
{
    int c=0;
    c=a;
    a=b;
    b=c;
    printf("After swapping 1st no is %d and 2nd no is %d:",a,b);
}
void main()
{
    int x,y;
    printf("enter 2 nos");
    scanf("%d %d",&x,&y);
    printf("Before swapping 1st no is %d and 2nd no is %d\n",x,y);
    swap(x,y);
}