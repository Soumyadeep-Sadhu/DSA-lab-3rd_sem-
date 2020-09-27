/*Display address and value at address of 1-D array in different ways*/
#include<stdio.h>
void main()
{
    int a[]={10,11,12,13,14};
    int i;
    int *p;
    p= &a[0];
    printf("printing the addresses of elements\n");    
     for(i=0;i<5;i++)
     {
         printf("%u %u %u %u\n",&a[i],&i[a],(a+i),(p+i));
     }
     printf("printing the value of elements\n");
     for(i=0;i<5;i++)
     {
         printf("%d %d %d %d \n",a[i],i[a],*(a+i),*(p+i));
     }
}
