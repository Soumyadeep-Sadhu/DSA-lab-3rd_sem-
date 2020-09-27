//Wap to arrange the elements of an array such that all even numbers are followed by all odd numbers.
//Roll-1928129
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,i,n;
    printf("Enter the no.of integers you want to enter\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("Memory Not Available");
        exit(1);
    }
    printf("Enter the Elements\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    int *arr;
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("Memory Not Available");
        exit(1);
    }
    int count=0;
    for (i=0;i<n;i++)
    {
        if(p[i]%2==0)
        arr[count++]=p[i];
    }
    for (i=0;i<n;i++)
    {
        if(p[i]%2!=0)
        arr[count++]=p[i];
    }    
    printf("Printing the elements\n");
    for (i=0;i<n;i++)
    {  
        printf("%d ",arr[i]);
    }
    free(p);
    free(arr);
}