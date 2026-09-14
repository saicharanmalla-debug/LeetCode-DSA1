
 

struct ListNode* reverseList(struct ListNode* head) {
if(head==NULL){
    return head;
}
struct ListNode *prev,*aft;
struct ListNode *temp=head;
prev=NULL;
aft=NULL;
while(temp!=NULL){
    aft=temp->next;
    temp->next=prev;
    prev=temp;
    temp=aft;

}

return prev;



}