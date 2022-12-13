#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL;

void create (int A[],int n){
    int i;
    struct Node *t, *last;
    // first = (struct Node *)malloc(sizeof(struct Node)); for c
    first = new Node;
        
    first->data=A[0];
    first->next=NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        // t = (struct Node *)malloc(sizeof(struct Node));
        t = new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    
}

void Display(struct Node *p){
    while(p!=0){
        // printf("%d",p->data);
        cout<<p->data<<endl;
        p=p->next;
    }
}

int main(){
    int A[]={3,5,7,10,15};
    create(A,5);
    Display(first);
    return 0;
}