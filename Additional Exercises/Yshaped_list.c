/* Intersection Point in Y Shapped Linked Lists */

#include <stdio.h>
#include <stdlib.h>

#define LISTS_EMPTY 1

typedef struct Node
{
        int data;
        struct Node* next;
} Slist;

int Intersect_Node(int d, Slist *head1, Slist *head2);

int Get_Intersection_Node(Slist *head1, Slist *head2)
{
        if (head1 == NULL || head2 == NULL)
                return LISTS_EMPTY;

        /* calculate the lengths of the two lists */
        Slist *temp = head1;
        int len1 = 0, len2 = 0;
        while (temp)
        {
                ++len1;
                temp = temp->next;
        }
        temp = head2;
        while (temp)
        {
                ++len2;
                temp = temp->next;
        }

        int d;
        if (len1 > len2)
        {
                d = len1 - len2;
                return Intersect_Node(d, head1, head2);
        }
        else
        {
                d = len2 - len1;
                return Intersect_Node(d, head2, head1);
        }
}

int Intersect_Node(int d, Slist *head1, Slist *head2)
{
        for (int i = 0; i < d; ++i)
        {
                if (head1 == NULL)
                        return -1;
                head1 = head1->next;
        }

        while (head1 && head2)
        {
                if (head1== head2)
                        return head1->data;
                head1 = head1->next;
                head2 = head2->next;
        }
        return -1;
}


/* IGNORE THE BELOW LINES OF CODE. THESE LINES
   ARE JUST TO QUICKLY TEST THE ABOVE FUNCTION */
int main()
{
  /*
    Create two linked lists

    1st 3->6->9->15->30
    2nd 10->15->30

    15 is the intersection point
  */

  struct Node* newNode;
  struct Node* head1 =
            (struct Node*) malloc(sizeof(struct Node));
  head1->data  = 10;

  struct Node* head2 =
            (struct Node*) malloc(sizeof(struct Node));
  head2->data  = 3;

  newNode = (struct Node*) malloc (sizeof(struct Node));
  newNode->data = 6;
  head2->next = newNode;

  newNode = (struct Node*) malloc (sizeof(struct Node));
  newNode->data = 9;
  head2->next->next = newNode;

  newNode = (struct Node*) malloc (sizeof(struct Node));
  newNode->data = 15;
  head1->next = newNode;
  head2->next->next->next  = newNode;

  newNode = (struct Node*) malloc (sizeof(struct Node));
  newNode->data = 30;
  head1->next->next= newNode;

  head1->next->next->next = NULL;

  printf("\n The node of intersection is %d \n",
          Get_Intersection_Node(head1, head2));
}
