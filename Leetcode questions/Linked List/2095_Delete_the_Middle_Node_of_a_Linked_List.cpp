/*
💡 2095. Delete the Middle Node of a Linked List

🧩 Problem Description:
You are given the head of a singly linked list. You need to delete the **middle node** of the linked list and return the head of the modified list.

If there are `n` nodes in the linked list, the middle node is the ⌊n / 2⌋th node (0-indexed).
- For example, if the linked list has 5 nodes, delete the 2nd node (index 2).
- If it has 4 nodes, delete the 2nd node (index 2 as well).

If the list has only one node, return `NULL` after deletion.

---

🧠 Example:
Input: head = [1, 3, 4, 7, 1, 2, 6]
Output: [1, 3, 4, 1, 2, 6]

Explanation:
The number of nodes = 7.  
The middle node is at index 3 (0-based), which has the value 7.  
After deleting that node, the new list becomes [1, 3, 4, 1, 2, 6].

---

✅ Approach:
1. Use two pointers — **slow** and **fast** — to locate the middle node.
2. Keep track of the previous node to the `slow` pointer.
3. When `fast` reaches the end of the list, `slow` will be at the middle.
4. Delete the middle node by adjusting `prev->next` to skip it.

🕒 Time Complexity: O(n)
💾 Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to delete the middle node
ListNode* deleteMiddle(ListNode* head) {
    // If there is only one node, delete it and return NULL
    if (head == NULL || head->next == NULL)
        return NULL;

    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* prev = NULL;

    // Move fast by 2 and slow by 1 to find middle
    while (fast != NULL && fast->next != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    // Delete the middle node
    prev->next = slow->next;

    return head;
}

// Utility function to print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Utility function to create linked list from vector
ListNode* createList(vector<int> arr) {
    if (arr.empty()) return NULL;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < arr.size(); i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

// Main function to test the code
int main() {
    vector<int> arr = {1, 3, 4, 7, 1, 2, 6};
    ListNode* head = createList(arr);

    cout << "Original Linked List: ";
    printList(head);

    head = deleteMiddle(head);

    cout << "After Deleting Middle Node: ";
    printList(head);

    return 0;
}