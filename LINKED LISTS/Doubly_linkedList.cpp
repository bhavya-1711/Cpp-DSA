#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d){
        this-> data = d;
        this-> prev = NULL;
        this-> next = NULL;
    }

    // destructor
    ~Node(){
        int val = this-> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data "<<val << endl;
    }
};

// traversing a linked list
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp-> data<<" ";
        temp = temp-> next;
    }
    cout<< endl;
}

// gives length of Linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp-> next;
    }

    return len;
}

void insertAtHead(Node* &head,Node* &tail, int d){

    //empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp-> next = head;
        head->prev = temp;
        head = temp;
    }
 
}

void insertAtTail(Node* &head, Node* &tail, int d){

    //empty list
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail-> next = temp;
        temp-> prev = tail;
        tail = temp; 
    }

}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){

    // insert at Start
    if(position==1){
        insertAtHead(head,tail, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt< position-1){
        temp = temp-> next;
        cnt++;
    }

    // inserting at Last Position
    if(temp-> next == NULL){
        insertAtTail(head,tail, d);
        return;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert-> next = temp-> next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert-> prev = temp;

}

void deleteNode(int position, Node* &head){

    // deleting start node
    if(position ==1){

        Node* temp = head;
        temp->next->prev = NULL;
        head = temp-> next;
        temp-> next = NULL;
        delete temp;

    }
    else{
        //deleting any middle node or Last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt< position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr-> prev = NULL;
        prev-> next = curr-> next;
        curr-> next = NULL;
        delete curr;
    }
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    cout<< getLength(head)<< endl;

    insertAtHead(head,tail, 11);
    print(head);

    insertAtHead(head, tail,13);
    print(head);

    insertAtHead(head,tail, 8);
    print(head);

    insertAtTail(head,tail, 25);
    print(head);

    insertAtPosition(tail,head, 2 , 100);
    print(head);

    insertAtPosition(tail,head, 1, 200);
    print(head);

    insertAtPosition(tail,head, 7 , 202);
    print(head);

    deleteNode(6, head);
    print(head);
    cout<<"head "<<head->data << endl;
    cout<<"tail "<<tail->data << endl;


    
    return 0;
}