//1928129
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
    int a,b,count=0;
    printf("Enter A and B\n");
    scanf("%d %d",&a,&b);
    for(int i=0;i<n;i++)
    {
        if(p[i]>=a && p[i]<=b)
        {
            count++;
            printf("%d ",p[i]);
        }
    }
    printf("\nThe no.of elements are: %d",count);    
    free(p);
}