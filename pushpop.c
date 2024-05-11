#include<stdio.h>
void push();
void pop();
int display();
int stack[100],top=-1,max,i,n,c;
int main(){
    printf("Enter the no. od elements \n");
    scanf("%d",&max);
    int choice;
    while(1){
    printf("ENter 1.for push\n2.for pop\n3.for display\n4.for exit\n");
    scanf("%d",&choice);
    switch(choice){

        case 1:
            push();
            break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        printf("Exited\n");
        break;
        default:
        printf("Invalid choice\n");
       }
    }
    return 0;

}

void push()
{
    
    if(top==max-1)
    {
        printf("Stack is full\n");
    
    }
    else {
        
        while(top<max-1)
        {
            top=top+1;
            printf("Enter the element to be pushed at index pos %d\n",top);
            scanf("%d",&n);
            stack[top]=n;
        }
    }
}
void pop(){
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else{
        
        printf("Enter the  no. of elements to popped\n");
        scanf("%d",&c);
        if(c>max)
        {
            printf("not enough elements\n");
        }
        else{
            top=top-c;

        }
    }    
}
 int display(){
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}