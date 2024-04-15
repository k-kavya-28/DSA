//it will return head of the reversed list
ListNode* reverse2(ListNode* &head){
    //base case
    if(head == NULL || head->next == NULL){
        return head;
    }

    //other cases
    ListNode* chhotahead = reverse2(head->next);
    head->next->next = head;
    head->next = NULL;

    return chhotahead;
}

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        return reverse2(head);        
    }
};