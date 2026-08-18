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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* newHead = reverseList(head->next);

        head->next->next = head;
        head->next = NULL;

        return newHead;

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

    // Reverse the linked list
    ListNode* reversedHead = solution.reverseList(head);

    // Print the reversed linked list
    while (reversedHead != NULL) {
        cout << reversedHead->val << " ";
        reversedHead = reversedHead->next;
    }
    cout << endl;

    return 0;
}