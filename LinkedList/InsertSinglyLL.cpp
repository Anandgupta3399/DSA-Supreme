#include <iostream>
using namespace std;
class Node
{
public:
        int data;
        Node *next;

        Node()
        {
                this->data = 0;
                this->next = NULL;
        }
        Node(int data)
        {
                this->data = data;
                this->next = NULL;
        }
        ~Node()
        {
                // write your code here
                cout << "Node with value: " << this->data << "deleted" << endl;
        }
};
// I want to insert a node right at the head of Linked List
void insertAtHead(Node *&head, Node *&tail, int data)
{
        // check for Empty LL
        if (head == NULL)
        {
                Node *newNode = new Node(data);
                head = newNode;
                tail = newNode;
                return;
        }

        // step1:
        Node *newNode = new Node(data);
        // step2:
        newNode->next = head;
        // step3:
        head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
        if (head == NULL)
        {
                Node *newNode = new Node(data);
                head = newNode;
                tail = newNode;
                return;
        }
        Node *newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
}

int findLength(Node *&head)
{
        int len = 0;
        Node *temp = head;
        while (temp != NULL)
        {
                temp = temp->next;
                len++;
        }
        return len;
}

void insertAtPosition(int data, int position, Node *&head, Node *&tail)
{
        if (head == NULL)
        {
                Node *newNode = new Node(data);
                head = newNode;
                tail = newNode;
                return;
        }
        if (position == 0)
        {
                insertAtHead(head, tail, data);
                return;
        }
        int len = findLength(head);
        if (position <= len)
        {
                insertAtTail(head, tail, data);
                return;
        }
        // find prev and current
        int i = 1;
        Node *prev = head;
        while (i < position)
        {
                prev = prev->next;
                i++;
        }
        Node *curr = prev->next;

        // step2;
        Node *newNode = new Node(data);

        // step3:
        newNode->next = curr;

        // step4:
        prev->next = newNode;
}

void deleteNode(int position, Node *&head, Node *&tail)
{
        if (head == NULL)
        {
                cout << "Cannot delete, LL is empty";
                return;
        }

        // deleting first node
        if (position == 1)
        {
                Node *temp = head;
                head = head->next;
                temp->next = NULL;
                delete temp;
                return;
        }
        int len = findLength(head);

        // deleting last node
        if (position == len)
        {
                // find prev
                int i = 1;
                Node *prev = head;
                while (i < position - 1)
                {
                        prev = prev->next;
                        i++;
                }
                // step2:
                prev->next = NULL;
                // step3:
                Node *temp = tail;
                // step4:
                tail = prev;
                // step5:
                delete temp;
                return;
        }

        // deleting middle node

        // step  : find prev and curr
        int i = 1;
        Node *prev = head;
        while (i < position - 1)
        {
                prev = prev->next;
                i++;
        }
        Node *curr = prev->next;

        // step2:
        prev->next = curr->next;
        // step3:
        curr->next = NULL;
        // step4:
        delete curr;
}

void print(Node *&head)
{
        Node *temp = head;
        while (temp != NULL)
        {
                cout << temp->data << " ";
                temp = temp->next;
        }
}

int main()
{

        Node *head = NULL;
        Node *tail = NULL;
        insertAtHead(head, tail, 20);
        insertAtHead(head, tail, 30);
        insertAtHead(head, tail, 40);
        insertAtTail(head, tail, 50);

        print(head);
        cout << endl;

        // cout << "head: " << head -> data << endl;
        //         cout << "tail: " << tail->data << endl;

        //         insertAtPosition(101, 1, head, tail);
        //         cout<< "Printing after insert at position call" << endl;
        //         print(head);
        //         cout << endl;
        //         cout << "head: " << head -> data << endl;
        //         cout << "tail: " << tail->data << endl;

        deleteNode(0, head, tail);
        cout << endl;
        print(head);
        cout << endl;

        return 0;
}