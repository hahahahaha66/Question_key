struct ListNode *detectCycle(struct ListNode *head) {
    if(head==NULL||head->next==NULL){
        return NULL;
    }
    struct ListNode*slow=head,*fast=head;
    while(fast&&fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            fast=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
    }
    return NULL;
}
