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
    int pos;
       printf("enter position of element to be deleted\n");
       scanf("%d",&pos);
    if(pos>=n+1)
        printf("deletion not possible\n");
    else
{
    for(i=pos-1;i<n-1;i++)
        ar[i]=ar[i+1];
        printf("array after deletion\n");
    for(i=0;i<=n-2;i++)
{
        printf("%3d",ar[i]);
}

}
}
