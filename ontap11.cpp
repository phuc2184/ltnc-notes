#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

Node* createNode(int x){
    Node* p = new Node;
    p->data = x;
    p->next = NULL;
    return p;
}
void addHead(Node* &head, int x){
    Node* p = createNode(x);
    p->next = head;
    head = p;
}
void xuat(Node* head){
    Node* p = head;
    while(p != NULL){
        cout << p->data << " ";
        p = p->next;
    }
}
int main(){
    Node* head =NULL;
    addHead(head,10);
    addHead(head,20);
    addHead(head,30);
    xuat(head);
    return 0;

}