class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Base cases: if either list is empty, return the other
        if (!list1) return list2;
        if (!list2) return list1;

        ListNode* sol = nullptr;

        // Step 1: Initialize head (sol) and tail with the smaller first node
        if (list1->val <= list2->val) {
            sol = list1;
            list1 = list1->next;
        } else {
            sol = list2;
            list2 = list2->next;
        }

        ListNode* tail = sol;

        // Step 2: Merge remaining nodes
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next; // Advance tail pointer
        }

        // Step 3: Attach remaining list
        tail->next = list1 ? list1 : list2;

        return sol;
    }
};