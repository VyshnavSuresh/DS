#include<stdio.h>
main()
{

    int i,ar[50],n;

        printf("enter the limit\n");
        scanf("%d",&n);
        printf("enter the elements\n");
    for(i=0;i<n;i++)
{
        scanf("%d",&ar[i]);
}
         printf("Traverse of elements");
    for(i=0;i<=n-1;i++)
{
             printf("%3d",ar[i]);
}
}
