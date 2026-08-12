#include <iostream>
using namespace std;


//   Definition for singly-linked list.
  struct ListNode {
      int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
 };
 

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!= NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution solution;
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next; // Create a cycle

    bool hasCycle = solution.hasCycle(head);
    cout << "Linked list has cycle: " << (hasCycle ? "true" : "false") << endl;

    return 0;
}