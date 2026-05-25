
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // firstly we have stor of all val in hashmap list of A
        unordered_map<ListNode *,int>mp;
        ListNode *temp=headA;
        while(temp!=NULL){
            mp[temp]=1;
             temp=temp->next;
        }
       
        temp=headB;
        while(temp!=NULL){
            if(mp.find(temp)!=mp.end()){
                return temp;
            } else{
            temp=temp->next;
            }
        }
       return NULL;
    }
     
};