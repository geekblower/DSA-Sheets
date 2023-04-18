/*
  Platform : GeeksForGeeks
  Problem : https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1
*/

class Solution {
    public:
    void removeLoop(Node* head) {
        map<Node*, bool> visited;
        visited[head] = true;
        
        while(head != NULL) {
            if(visited[head->next] == true) {
                head->next = NULL;
                break;
            } else {
                visited[head->next] = true;
                head = head->next;
            }
        }
        
    }
};
