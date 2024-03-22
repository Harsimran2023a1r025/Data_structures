#include <stdio.h>
#include<string.h>
#define max 10
char stack[max];
int i,top=-1;
void push(char);
char pop();

void main()
{
    char expression[max], temp;
    int count = 1;
    
    printf("Enter the expression\n");
    scanf("%s", expression);
    int a=strlen(expression);
    for ( i = 0; i < a; i++)
    {
        if (expression[i] == '(' || expression[i] == '{' || expression[i] == '[' )
        {
            push(expression[i]);
        }
        else if(expression[i] == ')' || expression[i] == '}' || expression[i] == ']' )
        {
            if(top==-1)
            {
                count=0;
            }
            else{
                temp=pop();
                if(expression[i] == ')' && (expression[i] == '}' || expression[i] == ']'))
                {
                    count=0;
                }
                else if(expression[i] == '}' && (expression[i] == ')' || expression[i] == ']'))
                {
                    count=0;
                }
                else if (expression[i] == ']' &&( expression[i] == ')' || expression[i] == '}'))
                {
                    count=0;
                }

            }
        }
        
    }
    if(top>=0)
    {
        count=0;
    }
    if(count==1)
    {
        printf("Valid expression\n");
    }
    else{
        printf("Not valid expression\n");
    }
}
void push(char c)
{
    
    if(top==max-1)
    {
        printf("\n overflow");
    }
    else{
        top=top+1;
        stack[top]=c;
    }
    printf("\n");
}
char pop(){
    if(top==-1)
    {
        printf("Underflow");
    }
    else{
        return (stack[top--]);
    }
}
 
