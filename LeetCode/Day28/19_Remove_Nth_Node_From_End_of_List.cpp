#include <iostream>
using namespace std;

// Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy= new ListNode(0);

        dummy->next= head;
        ListNode* slow= dummy;
        ListNode* fast = dummy;

        for (int i = 0; i < n + 1; i++) {
    fast = fast->next;
}
        while(fast != NULL){
            slow= slow->next;
            fast= fast->next;
        }
        slow->next=slow->next->next;
        return dummy->next;
    }
};

int main() {
    Solution solution;

    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int n = 2; // Remove the 2nd node from the end

    // Remove the nth node from the end
    ListNode* result = solution.removeNthFromEnd(head, n);

    // Print the resulting linked list
    while (result != NULL) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;

    return 0;
}