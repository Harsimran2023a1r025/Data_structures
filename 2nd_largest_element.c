#include<stdio.h>
int main()
{
    int a[20],n,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d elements in array are\n",n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    int l,sl;
    l=a[0];sl=a[1];
    for(i=2;i<n;i++)
    {
        if(a[i]>l)
        {
            sl=l;
            l=a[i];
        }
        else if (a[i]>sl)
        {
            sl=a[i];
        }
    }
    printf("Second largest element is %d",sl);
    
}
 