#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a,i,j,s=0,n;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    a=(int**)malloc(n*sizeof(int*));
    printf("enter the elements : ");
    for(i=0;i<n;i++)
    {
        *(a+i)=(int*)malloc(n*sizeof(int));
        for(j=0;j<n;j++)
        {
            scanf("%d",(*(a+i)+j));
        }
    }
    printf("the elements are :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",*(*(a+i)+j));
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            s=s+(*(*(a+i)+j));
        }
    }
    printf("the sum of the diagonal is : %d",s);
    return 0;
}
