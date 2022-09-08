#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *newnode, *head, *temp;

void adding_node()
{
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter the data\n");
    scanf("%d", &newnode->data);

    newnode->next = 0;
    if (temp == NULL)
    {
        temp = head = newnode;
    }
    else
    {
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void display()
{
    temp = head;
    if (temp == NULL)
    {
        printf("Link is empty\n");
    }
    else
    {
        printf("Elements: ");
        while (temp->next != 0)
        {
            printf("%d\t", temp->data);
              temp=temp->next;
        }
      
    }
}
void add_end()
{
     temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter the data\n");
    scanf("%d", &newnode->data);

    newnode->next = 0;
    if (temp == NULL)
    {
        temp = head = newnode;
    }
    else
    {
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }


}


int main()
{
    temp = NULL;
    int choice;
    printf("1. add nodes\n 2. display \n 3. add at end \n 4. EXIT\n");

   

    while (1)
    {
         printf("Enter the choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            adding_node();
            break;

        case 2:
            display();
            break;

        case 3:
            add_end();
            break;

        case 4:
            return -1;

        default:
            printf("Enter the valid choice\n");
            break;
        }
    }
}
