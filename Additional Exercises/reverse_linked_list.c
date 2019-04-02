#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
        int data;
        struct _node* next;
} Slist;

int insert(Slist **head, int data);
//int reverse(Slist **head, Slist *prev, Slist *curr);
int reverse(Slist **head);
int print(Slist *head);

int main()
{
        Slist *head = NULL;
        insert(&head, 10);
        insert(&head, 20);
        insert(&head, 30);
        insert(&head, 40);
        insert(&head, 50);
        insert(&head, 60);

        print(head);
        //reverse(&head, NULL, head);
        reverse(&head);
        print(head);
}

int print(Slist *head)
{
        while (head)
        {
                printf("%d ", head->data);
                head = head->next;
        }
        putc('\n', stdout);
}
int insert(Slist **head, int data)
{
        Slist *new = malloc(sizeof(Slist));
        new->data = data;
        new->next = *head;
        *head = new;
}

int reverse(Slist **head)
{
        Slist *prev, *curr, *next;
        prev = NULL;
        curr = *head;

        while (curr != NULL)
        {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
        }
        *head = prev;
}
#if 0
int reverse(Slist **head, Slist *prev, Slist *curr)
{
        if (curr->next == NULL)
        {
                *head = curr;
                curr->next = prev;
                return 0;
        }

        Slist *next = curr->next;
        curr->next = prev;
        reverse(head, curr, next);
}
#endif
