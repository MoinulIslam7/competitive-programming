#include<bits/stdc++.h>
using namespace std;

struct node                 ///declare node type class
{
    char data;              ///Any value
    struct node *next;      ///pointer next that contains address of the next node
};

struct node *start = NULL; ///for creating linked list assign beginning start point to null

void Push_Back()            ///push back or input function where we can input value at the end
{
    /// start-> a -> b -> c ->null
    struct node *x, *temp;    ///create two pointer node variable
    x = new node;       ///assign x in new node
    char c;             ///character type variable for input
    cout << "Enter a char into the List.\n";
    cin >> c;
    x->data = c;            ///assign input character on node
    x->next = NULL;         ///we have to declare null at the end of every node

    if(start==NULL)         ///if start equal null then start node equal x means x first node
        start = x;
    else
    {
        temp = start;               ///when temp equal start
        while(temp->next!=NULL)     ///input character until temp next value not equals to null
            temp = temp->next;      ///assign every temp value his next element like temp next temp next next temp next next next
        temp->next = x;             ///temp next assign on node x
    }
}
char Pop()      ///pop function or delete function for linked list from last
{
    struct node *temp1, *temp2;        ///create to pointer node type variable
    temp1 = start;                     ///1st one assign on start
    while(temp1->next!=NULL)        ///if temp1 next element is not null then
    {
        temp2 = temp1; ///copy data from temp1 to temp2
        temp1 = temp1->next;        ///move temp1 to its next element
    }
    temp2->next = NULL;         ///assign null for finish node
    delete temp1;               ///delete value
    return temp2->data;         ///return next element
}


void traverse()                 ///function where jump one node from another node and print linked list
{
    struct node *temp;          ///create a node type pointer variable
    temp = start;               /// 1st node temp
    cout << "\nPrinting Linked List: \n";
    while(temp!=NULL)           ///print all character until temp not equal null
    {
        cout << temp->data << " ";      ///displaying character
        temp = temp->next;              ///jumping his next node
    }
}
int main ()
{
/// start -> a -> b -> c -> d ->null

    Push_Back();    ///for input 1st character 1st node
    Push_Back();    ///second character second node
    Push_Back();
    Push_Back();
    Push_Back();
    Push_Back();
    traverse();     ///displaying linked list value


    Pop();              ///delete from last
    cout << "\nAfter Pop one element.\n";
    traverse();         ///after delete last node
    Pop();              ///delete second last node
    traverse();         ///displaying value after delete second last node
    Pop();              ///delete third last node
    traverse();         ///displaying value after delete third last node
    Pop();              ///delete four last node
    traverse();         ///displaying value after delete four last node
}
