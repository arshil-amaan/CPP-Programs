#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node *next;
};
 
//linked list print
void printlinkdlist(node *n) {
    while(n!=NULL) {
        cout<<n->data<<" ";
        n=n->next;
    }
}
int main() {
    //creating three nodes with no value
    //created 3 instance
    node *head =NULL;
    node *second =NULL;
    node *third =NULL;
 
    //allocating 3 nodes in the heap
    head = new node();
    second = new node();
    third = new node();
 
    head->data = 10;
    head->next = second;


    second->data = 20;
    second->next = third;


    third->data = 30;
    third->next = NULL;

    //calling function to print elements
    printlinkdlist(head);

    return 0;
}
