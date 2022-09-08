#include <stdio.h>

#include <unistd.h>

#define N 7

int stack[N];
int top = -1;

void push()
{
    int x;
    printf("Enter the data \n");
    scanf("%d", &x);

    if (top == N - 1)
    {
        printf("stack is overflow\n");
    }
    else
    {

        top++;
        stack[top] = x;
    }
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    for (i = top; i >= 0; i--)
    {
        printf("stack is [%d]\n", stack[i]);
        
    }


}
void sorting_stack()
{
        int flag ,a,i,j,temp,n;
        int stack[top];

    for(i=0;i<top-1;i++)
    {
        flag= 0;
        for(j=0;j<top-1-i;j++)
        {
            if(stack[j]>stack[j+1])
            {
                temp=stack[j];
                stack[j] = stack[j+1];
                stack[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
        printf("array is sorted\n");
        break;
        }
    }
}

int main()
{
    int choice;
    printf(" 1 for push\n 2 display\n 3 sorting \n");
    while(1)
    {
        printf("Enter the choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            display();
            break;
        
        case 3:
              sorting_stack();  
            break;
        default:
            printf("Enter the valid choice\n");
        }
    }
    
}