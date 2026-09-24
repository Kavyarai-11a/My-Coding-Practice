#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}Node;

typedef struct
{
    Node *head;
    Node *tail;
    int count;
}List;

Node *createNode(int data)
{
    Node *newNode = malloc(sizeof(Node));
    if(newNode == NULL)
    {
        return -1;
    }

    newNode->data = data;
    newNode->link = NULL;

    return newNode;
}

List *createList(void)
{
    List *newList = malloc(sizeof(List));
    if(newList == NULL)
    {
        return -3;
    }

    newList->head = NULL;
    newList->tail = NULL;
    newList->count = 0;

    return newList;
}

int InsertFront(List *l, int data)
{
    if(l == NULL)
    {
        return -3;
    }

    Node *newNode = createNode(data);

    if(newNode == NULL)
    {
        return -1;
    }

    newNode->link = l->head;
    l->head = newNode;

    if(l->tail == NULL)
    {
        l->tail = newNode;
    }

    l->count++;

    return 0;
}

int InsertEnd(List *l, int data)
{
    if(l == NULL)
    {
        return -3;
    }

    Node *newNode = createNode(data);

    if(newNode == NULL)
    {
        return -1;
    }

    if(l->head == NULL)
    {
        l->head = newNode;
        l->tail = newNode;
    }
    else
    {
        l->tail->link = newNode;
        l->tail = newNode;
    }

    l->count++;

    return 0;
}

int insertPos(List *l,int data,int Pos)
{
    if(l == NULL)
    {
        return -3;
    }

    if(Pos < 1 || Pos > l->count + 1)
    {
        return -2;
    }

    if(Pos == 1)
    {
        return insertFront(l,data);
    }

    if(Pos == l->count + 1)
    {
        return insertEnd(l,data);
    }
    
    Node *newNode = createNode(data);
    if(newNode == NULL)
    {
        return -1;
    }

    Node *temp = l->head;
    for(int i=1;i<Pos-1;i++)
    {
        temp = temp->link;
    }

    newNode->link = temp->link;
    temp->link = newNode;

    l->count++;

    return 0;

}

int deleteFront(List *l)
{
    if(l == NULL)
    {
        return -3;
    }

    if(l->count == 0)
    {
        return -4;
    }

    Node *temp = l->head;
    l->head = l->head->link;

    if(l->head == NULL)
        l->tail = NULL;

    free(temp);
    
    l->count--;

    return 0;
}

int deleteEnd(List *l)
{
    if(l == NULL)
    {
        return -3;
    }

    if(l->count == 0)
    {
        return -4;
    }

    Node *temp = l->head;
    
    if(l->count == 1)
    {
        l->tail = l->tail->link;
        l->head = NULL;
        free(temp);
    }

    else
    {
        while(temp->link->link != NULL)
        {
            temp = temp->link;
        }

        temp->link = NULL;
        free(l->tail);
        l->tail = temp;
    }

    l->count--;

    return 0;

}

int deletePos(List *l,int Pos)
{
    if(l == NULL)
    {
        return -3;
    }

    if(l->count == 0)
    {
        return -4;
    }

    if(Pos < 1 || Pos > l->count)
    {
        return -2;
    }

    if(Pos == 1)
    {
        return deleteFront(l);
    }

    if(Pos == l->count)
    {
        return deleteEnd(l);
    }

    else
    {
        Node *temp = l->head;
        Node *prev = l->head;
        for(int i=1;i<Pos-1;i++)
        {
            prev = temp;
            temp = temp->link;
        }

        prev->link = temp->link;
        free(temp);
    }

    l->count--;

    return 0;

}

int deleteKey(List *l,int key)
{
    if(l == NULL)
    {
        return -3;
    }

    if(l->count == 0)
    {
        return -4;
    }

    int count = 1;
    Node *temp = l->head;
    while(temp != NULL)
    {
        if(temp->data == key && temp == l->head)
        {
            return deleteFront(l);
        }

        else if(temp->data == key && temp == l->tail)
        {
            return deleteEnd(l);
        }

        else if(temp->data == key)
        {
            return deletePos(l,count);
        }

        temp = temp->link;
        count++;
    }

    return -5;
}

int deleteList(List *l)
{
    if(l == NULL)
    {
        return -3;
    }

    if(l->count == 0)
    {
        return -4;
    }

    Node *temp = l->head;
    while(temp != NULL)
    {
        temp = l->head;
        l->head = l->head->link;
        free(temp);
    }

    l->tail = NULL;
    l->count = 0;
    return 0;
}

int ReverseList(List *l)
{
    if(l == NULL)
    {
        return -3;
    }

    if(l->count == 0)
    {
        return -4;
    }

    Node *prev = NULL;
    Node *curr = l->head;
    Node *next = curr->link;

    while(curr != NULL)
    {
        next = curr->link;
        curr->link = prev;
        prev = curr;
        curr = next;
    }
    l->tail = l->head;
    l->head = prev;
    return 0;
}

int TransversList(List *l)
{
    if(l == NULL)
    {
        return -3;
    }

    if(l->count  == 0)
    {
        return -4;
    }

    Node *temp = l->head;
    while(temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp->link;
    }
    printf("NULL");

    return 0;

}

Node *SearchList(List *l,int key)
{
    if(l == NULL)
    {
        return NULL;
    }

    if(l->count  == 0)
    {
        return NULL;
    }

    Node *temp = l->head;
    while(temp != NULL)
    {
        if(temp->data == key)
        {
            return temp;
        }
        temp = temp->link;
    }
    
    return NULL;

}

int concateList(List *l1,List *l2)
{
    if(l1 == NULL || l2 == NULL)
    {
        return -3;
    }

    if(l1->count == 0)
    {
        l1->head = l2->head;
        l1->tail = l2->tail;
        l1->count = l2->count;
    }

    else if(l2->count == 0)
    {
        return 0;
    }

    else
    {
        l1->tail->link = l2->head;
        l1->tail = l2->tail;
        l1->count += l2->count;
    }
    
    l2->head = NULL;
    l2->tail = NULL;
    l2->count = 0;
    return 0;
}

void printResult(int result)
{
    switch(result)
    {
        case 0:
            printf("Operation successful\n");
            break;

        case -1:
            printf("Memory allocation failed\n");
            break;

        case -2:
            printf("Invalid position\n");
            break;

        case -3:
            printf("Null list\n");
            break;

        case -4:
            printf("List is empty\n");
            break;

        case -5:
            printf("Data not found\n");
            break;

        default:
            printf("Unknown error\n");
    }
}

int main()
{
    printf("Choices\n");
    printf("1.InsertFront\n");
    printf("2.InsertEnd\n");
    printf("3.InsertPos\n");
    printf("4.DeleteFront\n");
    printf("5.DeleteEnd\n");
    printf("6.DeletePos\n");
    printf("7.DeleteKey\n");
    printf("8.DeleteList\n");
    printf("9.Reverse List\n");
    printf("10.Travers List\n");
    printf("11.Search Key\n");
    printf("12.Concate List\n");

    int c;
    printf("Enter your choice : ");
    if(scanf("%d",&c) != 1)
    {
        printf("Invalid Input\n");
        return 0;
    }

    List *l = createList();

    switch(c)
    {
        case 1:
        {
            int data,result;
            printf("Enter data to insert : ");
            scanf("%d",&data);

            result = InsertFront(l,data);
            printResult(result);
            break;
        }

        case 2:
        {
            
            int data,result;
            printf("Enter data to insert : ");
            scanf("%d",&data);
            
            result = InsertEnd(l,data);
            printResult(result);
            break;
        }


        case 3:
        {
            int data,pos,result;

            printf("Enter data to insert : ");
            if(scanf("%d",&data) != 1)
            {
                printf("scanf fail\n");
                break;
            }

            printf("Enter position to insert : ");
            if(scanf("%d",&pos) != 1)
            {
                printf("scanf fail\n");
                break;
            }

            result = InsertPos(l,data,pos);
            printResult(result);
            break;
        }

        case 4:
        {
            int result;
            result = deleteFront(l);
            printResult(result);
            break;
        }

        case 5:
        {
            int result;
            result = deleteEnd(l);
            printResult(result);
            break;
        }

        case 6:
        {

            int result,pos;

            printf("Enter position : ");
            if(scanf("%d",&pos) != 1 || pos < 1 || pos > l->count)
            {
                printf("Invalid Position\n");
            }
            result = deletePos(l,pos);
            printResult(result);
            break;
        }

        case 7:
        {

            int data,result;
            printf("Enter data to insert : ");
            scanf("%d",&data);
            
            result = deleteKey(l,data);
            printResult(result);
            break;
        }

        case 8:
        {

            int result;

            result = deleteList(l);
            printResult(result);
            break;
        }

        case 9:
        {
            int result;

            result = ReverseList(l);
            printResult(result);
            break;
        }

        case 10: 
        {
            int result;

            result = TransversList(l);
            printResult(result);
            break;
        }

        case 11:
        {
            int data;
            Node *result;
            printf("Enter data to insert : ");
            scanf("%d",&data);
            
            result = SearchList(l,data);
            printResult(result);
            break;
        }

        case 12:
        {
            int result;
            List *l1 = createList();
            List *l2 = createList();

            result = concateList(l1,l2);
            printResult(result);
            break;
        }
    default:
        printf("Invalid choice\n");

    }
}