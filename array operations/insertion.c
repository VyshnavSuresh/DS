#include<stdio.h>
main()
{
    int ar[50];
    int i,n;
        printf("enter the limit\n");
        scanf("%d",&n);
        printf("array elements\n");
        for(i=0;i<n;i++)
        {
          scanf("%d",&ar[i]);
        }
    int pos;
       printf("enter position of element\n");
       scanf("%d",&pos);
    int elem;
       printf("enter the element\n");
       scanf("%d",&elem);
    if(pos>n)
        printf("invalid\n");
    else
        {
    for(i=n-1;i>=pos-1;i--)
            ar[i+1]=ar[i];
            ar[pos-1]=elem;
        printf("array after insertion\n");
    for(i=0;i<=n;i++)
        printf("%d\n",ar[i]);
    }
    }


