#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* result) {
    Node* temp = result; 

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next; 
    }
    cout << "NULL" << endl;
}

int main(){
    Node* headA = new Node(2);
    Node* secondA = new Node(4);
    Node* thirdA = new Node(3);
    headA->next = secondA;
    secondA->next = thirdA;

    Node* headB = new Node(5);
    Node* secondB = new Node(6);
    Node* thirdB = new Node(7);
    headB->next = secondB;
    secondB->next = thirdB;

    Node* result = nullptr;

    Node* pA = headA;
    Node* pB = headB;
    int carry,sum=0;

    while(pA != nullptr || pB != nullptr || carry != 0){
        int val1 = (pA != nullptr)? pA->data : 0;
        int val2 = (pB != nullptr)? pB->data : 0;
        int sum = pA->data + pB->data + carry;

        int digit = sum % 10;
        carry = sum / 10;

        Node*result = new Node(digit);
    }

    printList(result);

    return 0;
}