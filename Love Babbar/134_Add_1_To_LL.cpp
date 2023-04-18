/*
  Platform : GeeksForGeeks
  Problem : https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1
*/

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
    private:
    void insertHead(Node* &head, int data) {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
    
    Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        
        while(curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
    
    public:
    Node* addOne(Node *head) {
        Node* answer = NULL;
        Node* temp = reverse(head);
        int carry = 1;
        
        while(temp != NULL) {
            carry += temp->data;
            insertHead(answer, carry%10);
            carry /= 10;
            temp = temp->next;
        }
        
        if(carry != 0) {
            insertHead(answer, carry);
        }
        
        head = reverse(head);
        return answer;
    }
};
