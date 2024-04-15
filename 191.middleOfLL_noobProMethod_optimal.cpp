class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        //0 or 1 node
        if(head == NULL || head->next == NULL){
            return head;
        }
        //2 nodes
        if(head->next->next == NULL){
            return head->next;
        }
        //algo for others
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
            }
            slow = slow->next;
        }
        return slow;
    }
};
//TC -> O(n)
//sc -> O(1)