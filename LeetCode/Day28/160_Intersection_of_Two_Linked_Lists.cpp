#include <iostream>
using namespace std;

//  * Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ptrA = headA;
        ListNode* ptrB = headB;

        while(ptrA != ptrB){
            if(ptrA == NULL){
                ptrA = headB;
            }
            else{
                ptrA = ptrA->next;
            }
            if(ptrB == NULL){
                ptrB = headA;
            }
            else{
                ptrB = ptrB->next;
            }
        }
        return ptrA;
    }
};

int main() {
    Solution solution;

    // Create two linked lists that intersect
    ListNode* headA = new ListNode(4);
    headA->next = new ListNode(1);
    ListNode* intersection = new ListNode(8);
    headA->next->next = intersection;
    intersection->next = new ListNode(4);
    intersection->next->next = new ListNode(5);

    ListNode* headB = new ListNode(5);
    headB->next = new ListNode(0);
    headB->next->next = new ListNode(1);
    headB->next->next->next = intersection; // Intersection point

    // Find the intersection node
    ListNode* result = solution.getIntersectionNode(headA, headB);

    // Print the value of the intersection node
    if (result != NULL) {
        cout << "Intersection at node with value: " << result->val << endl;
    } else {
        cout << "No intersection." << endl;
    }

    return 0;
}