/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Fix 1: Handle empty list or single-node list safely
        if (head == nullptr || head->next == nullptr) {
            return false;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        // Fix 3: Ensure both fast and fast->next are safe to traverse
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;       // Move 1 step
            fast = fast->next->next; // Move 2 steps (Fix 2: Actually move them!)
            
            // Fix 4: Compare addresses, not values
            if (slow == fast) {
                return true; 
            }
        }
        
        return false; // Fast reached the end, so there is no cycle
    }
};
