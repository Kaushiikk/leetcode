// You are given the head of a singly linked-list.

// The positions of a linked list of length = 7 for example, can intially be represented as:

// [0, 1, 2, 3, 4, 5, 6]

// Reorder the nodes of the linked list to be in the following order:

// [0, 6, 1, 5, 2, 4, 3]

// Notice that in the general case for a list of length = n the nodes are reordered to be in the following order:

// [0, n-1, 1, n-2, 2, n-3, ...]

// You may not modify the values in the list's nodes, but instead you must reorder the nodes themselves.

// Example 1:

// Input: head = [2,4,6,8]

// Output: [2,8,4,6]
// Example 2:

// Input: head = [2,4,6,8,10]

// Output: [2,10,4,8,6]
// Constraints:

// 1 <= Length of the list <= 1000.
// 1 <= Node.val <= 1000
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head) return;
        vector<ListNode*> a;
        ListNode* x = head;
        while(x)
        {
            a.push_back(x);
            x = x->next;
        }
        int i = 0, j = a.size() - 1;
        while(i<j)
        {
            a[i]->next = a[j];
            i++;
            if(i>=j) break;
            a[j]->next = a[i];
            j--;
        }
        a[i]->next = nullptr;
    }
};
