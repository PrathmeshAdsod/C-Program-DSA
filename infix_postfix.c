#include<stdio.h>
#include<string.h>
#include<ctype.h>
# define MAX 100

char stack[100];
char postfix[100];
char infix[100];
int top=-1;

void push(char c)
{
    top++;
    stack[top]=c;
}

char pop()
{
    char c;
    c=stack[top];
    top--;
    return c;
}

int isoperator(char c)
{
    if(c=='^'||c=='+'||c=='-'||c=='/'||c=='*')
        return 1;
    else
        return 0;
}

int precedence(char c)
{
    if(c=='^')
        return 3;
    else if(c=='*'||c=='/')
        return 2;
    else if(c=='+'||c=='-')
        return 1;
    else
        return 0;
}

void convert()
{
    int i=0,j=0;
    char input,x;
    push('(');
    strcat(infix,")");
    while(infix[i]!='\0')
    {
        input=infix[i];
        i++;
        if(isalpha(input)||isdigit(input))
        {
            postfix[j]=input;
            j++;
        }
        else if(input=='(')
        {
            push(input);
        }
        else if(input==')')
        {
            x=pop();
            while(x!='(')
            {
                postfix[j]=x;
                j++;
                x=pop();
            }
        }
        else if(isoperator(input))
        {
            x=pop();
            while(isoperator(x)&&precedence(x)>=precedence(input))
            {
                postfix[j]=x;
                j++;
                x=pop();
            }
            push(x);
            push(input);
        }
    }
    postfix[j]='\0';
}


void main()
{
    printf("enter the infix expression to be converted");
    gets(infix);
    convert();
    puts(postfix);
}