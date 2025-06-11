#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node *next;

};

void InsertAtBeg(struct node **head);
void Display(struct node *head);
void InsertAtEnd(struct node **head);
void InsertAtPos(struct node **head);
void DeleteAtBeg(struct node **head);
void DeleteAtEnd(struct node **head);
void DeleteAtPos(struct node **head);
int main()
{
	struct node *head=NULL;
	int ch;

	while(1)
	{
		printf("Enter your choice : \n"
			"1.InsertAtBeg\n"
			"2.InsertAtEnd\n"
			"3.InsertAtPos\n"
			"4.DeleteAtBeg\n"
			"5.DeleteAtEnd\n"
			"6.DeleteAtPos\n"
			"7.Display\n"
			"8.Exit\n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				InsertAtBeg(&head);
				break;
			case 2:
				InsertAtEnd(&head);
				break;
			case 3:
				InsertAtPos(&head);
				break;
			case 4:
				DeleteAtBeg(&head);
				break;
			case 5:
				DeleteAtEnd(&head);
				break;
			case 6:
				DeleteAtPos(&head);
				break;
			case 7:
				Display(head);
				break;
			case 8:
				exit(1);
			default:
				printf("You entered wrong number. Try Again!\n");
				break;

		}
	}
}

void InsertAtBeg(struct node **head)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("memory allocation is failed\n");
		return;
	}

	printf("Enter a data\n");
	scanf("%d",&temp->data);
	temp->next=NULL;

	temp->next=*head;
	*head=temp;

}
void Display(struct node *head)
{
	struct node *t1;
	t1=head;

	if(head==NULL)
	{
		printf("No data to print\n");
		return;
	}
	else
	{
		while(t1!=NULL)
		{
			printf("%d-->",t1->data);
			t1=t1->next;
		}
	}
}
void InsertAtEnd(struct node* *head)
{
	struct node *temp,*t1;
	temp=(struct node*)malloc(sizeof(struct node));

	if(temp==NULL)
	{
		printf("Memory allocation is failed\n");
		return;
	}

	printf("Enter data\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	t1=*head;

	if(*head==NULL)
	{
		*head=temp;
		return;
	}

	else
	{
		while(t1->next!=NULL)
		{
			t1=t1->next;
		}

		t1->next=temp;
	}
}
void InsertAtPos(struct node **head)
{
    int pos, count = 1;
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    if (temp==NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    
    printf("Enter position: ");
    scanf("%d", &pos);
    printf("Enter data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (pos <= 0) 
    {
        printf("Invalid position!\n");
        free(temp);
        return;
    }

    if (pos == 1) 
    {
        temp->next = *head;
        *head = temp;
        return;
    }

    struct node *t1 = *head;
    while (t1 != NULL && count < pos - 1) 
    {
        t1 = t1->next;
        count++;
    }

    if (t1 == NULL) {
        printf("Position out of bounds!\n");
        free(temp);
        return;
    }

    temp->next = t1->next;
    t1->next = temp;
}

void DeleteAtBeg(struct node **head)
{
	struct node *t1=*head;

	if(*head==NULL)
	{
		printf("No data to delete!\n");
		return;
	}
	if(t1->next==NULL)
	{
		free(t1);
		*head=NULL;
		return;
	}
	*head=t1->next;
	free(t1);
}
void DeleteAtEnd(struct node **head)
{
	struct node *t1,*t2;
	t1=*head;
	t2=NULL;

	if(*head==NULL)
	{
		printf("No data to delete\n");
		return;
	}
	if(t1->next==NULL)
	{
		free(t1);
		*head=NULL;
	}
	else
	{
		while(t1->next!=NULL)
		{
			t2=t1;
			t1=t1->next;
		}
		free(t1);
		t2->next=NULL;
	}

}
void DeleteAtPos(struct node **head)
{
	struct node *t1,*t2;
	t1=*head;

	int pos;
	int count=1;

	if(*head==NULL)
	{
		printf("No data to delete\n");
		return;
	}

	printf("Enter position : \n");
	scanf("%d",&pos);

	if(pos==1&&t1->next==NULL)
	{
		printf("Deleted ele is %d\n",t1->data);
		free(t1);
		*head=NULL;
		return;
	}

	if(pos==1)
	{
		printf("Deleted Ele is %d\n",t1->data);
		*head=t1->next;
		free(t1);
		return;
	}

	while(t1->next!=NULL && count<=pos)
	{
		count++;
		t2=t1;
		t1=t1->next;

		if(count==pos)
		{
			t2->next=t1->next;
			printf("Deleted Ele is %d\n",t1->data);
			free(t1);
			return;
		}
	}
	printf("Entered Position is Not found!\n");

}
