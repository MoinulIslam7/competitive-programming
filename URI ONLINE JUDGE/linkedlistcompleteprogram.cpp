#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
struct node //declare node type class
{
    char data;
    struct node *next;
};

struct node *start = NULL;
int count = 0;

void Push_Back()
{
    /// start-> a -> b -> c ->null
    struct node *x, *temp;
    x = new node;

    char c;
    cout << "Enter a char into the List.\n";
    cin >> c;
    x->data = c;
    x->next = NULL;

    if(start==NULL)
        start = x;
    else
    {
        temp = start;
        while(temp->next!=NULL)
            temp = temp->next;
        temp->next = x;
    }


}

char Pop()
{
    struct node *temp1, *temp2;
    temp1 = start;
    while(temp1->next!=NULL)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = NULL;
    delete temp1;
    return temp2->data;

}


void traverse()
{
    struct node *temp;
    temp = start; /// 1st node temp
    cout << "\nPrinting Linked List: \n";
    while(temp!=NULL) {
        cout << temp->data << " ";
        temp = temp->next; ///jumping next node
    }
}


int main ()
{
/// start -> a -> b -> c -> d ->null
/// a

    Push_Back();
    Push_Back();
    Push_Back();
    Push_Back();
    Push_Back();
    Push_Back();
    Push_Back();
    Push_Back();
    traverse();


    Pop();
    cout << "\nAfter Pop one element.\n";
    traverse();
    Pop();
    traverse();
    Pop();
    traverse();
    Pop();
    traverse();

}


/**
struct node *x;
    x = new node;
    x->data = 'a';
    x->next = NULL;
    start = x;


    struct node *x1;
    x1 = new node;
    x1->data = 'b';
    x1->next = NULL;
    start->next = x1;

    struct node *x2;
    x2 = new node;
    x2->data = 'c';
    x2->next = NULL;
    start->next->next = x2;


    struct node *x3;
    x3 = new node;
    x3->data = 'd';
    x3->next = NULL;
    start->next->next->next = x3;


*/

/***


void insert_at_end(char x)
{
    struct node *t, *temp;

    t = new node;
    t->data = x;
    count++;

    temp = start;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = t;
    t->next   = NULL;
}

void traverse()
{
    struct node *t;

    t = start;

    if (t == NULL)
    {
        printf("Linked list is empty.\n");
        return;
    }

    printf("There are %d elements in linked list.\n", count);

    while (t->next != NULL)
    {
        printf("%c ", t->data);
        t = t->next;
    }
    printf("%c\n", t->data); // Print last node
}

*/
