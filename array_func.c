#include<stdio.h>
int insert();
int delete();
int linear();
int a[20],n,i,count=0;
int main()
{
    int choice;
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
    printf("Enter the choice\n");
    printf("1. for insertion, 2. for deletion and 3. for linear search\n ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        insert();
        break;

        case 2:
        delete();
        break;

        case 3:
        linear();
        break;

        default:
        printf("Invalid choice\n");
    }
}
int insert()
{
    int ele,pos;
    printf("Enter the element to insert\n");
    scanf("%d",&ele);
    printf("Enter the position to insert\n");
    scanf("%d",&pos);
    for(i=n;i>=pos;i--)
    {
        a[i+1]=a[i];
        a[i]=ele;
    }
    n=n+1;
    printf("After insertion array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
int delete()
{
    int e,p;
    printf("Enter the element to delete\n");
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        if(e==a[i])
        {
            count++;
            p=i;
            break;
        }
    }
    if(count==0)
    {
        printf("No such element found\n");
    }
    else{
        for(i=p;i<n;i++)
        {
            a[i]=a[i+1];
        }
        n=n-1;

    }
    printf("Array after deletion is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
int linear()
{
    int el,po;
    printf("ENter the element to search\n");
    scanf("%d",&el);
    for(i=0;i<n;i++)
    {
        if(el==a[i])
        {
            count++;
            po=i;
            break;
        }
    }
    if(count==0)
    {
        printf("No such element found\n");
    }
    else{
        printf("Element found at index position %d\n",po);
    }
}
