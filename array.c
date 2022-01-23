#include<stdio.h>
#include<stdlib.h>
void main(){
    int c=1;
    int i,l,v,p=0,j=0,k=0;
    //limt
    printf("Enter the limi");
    scanf("%d",&l);
    // initialisation arry
    int a[l];
    //reading arry
    for(i=0;i<l;i++){
        scanf("%d",&a[i]);
    }

    while(c>0){
        
        printf("\n\nARRAY OPERATIONS\n1.Traversal\n2.Insertion\n.3.Deletion\n4.Searching\n5.Sorting2n\nEnter your choice:");
        scanf("%d",&c);
        switch(c){
                   case 1: printf("\n\nARRAY:");
                            for(i=0;i<l;i++){
                                            printf("  %d  ",a[i]);
                                             }
                                             break;
                    case 2:
                            printf("\nEnter the position");
                            scanf("%d",&p);
                            printf("\nEnter the value");
                            scanf("%d",&v);
                            l=l+1;
                            k=a[p];
                            a[p]=v;
                            for(i=p+1;i<l;i++){
                                                k=a[i+1];
                                                a[i+1]=a[i];
                                                a[i]=k;   
                                            }
                                            break;
                    case 3: 
                        printf("\nEnter the position");
                        scanf("%d",&p);
                        
                        for(i=0;i<l;i++){
                                        if(a[i]==p){
                                             for(j=i;j<l;j++){
                                                            a[j]=a[j+1];
                                                         }
                                                    }
                        l=l-1;
                    }
                    break;
                    case 4:
                    printf("\nEnter the value");
                    scanf("%d",&v);
                    for(i=0;i<l;i++){
                                    if(v==a[i]){
                                                printf("\nThe value is present @ : %d",i+1);
                                                }
                                    }   
                     break;
                    case 5:
                                for(i=0;i<l;i++){
                                        for(int j=0;j<l;j++){
                                                        if(a[i]<a[j]){
                                                                        int k;
                                                                        k=a[i];
                                                                        a[i]=a[j];
                                                                        a[j]=k;
                                                                        }
                        }
                    }
                    break;
                   case 6: exit(0);
                   break;
        }
}
}
    
