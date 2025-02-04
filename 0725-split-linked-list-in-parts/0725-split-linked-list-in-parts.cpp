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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans(k,nullptr);
        int size=0;
        ListNode*temp=head;
        while(temp){
            temp=temp->next;
            size++;
        }
        int basesize=size/k;
        int extra=size%k;
        
        ListNode*current=head;
        for(int i=0;i<k && current;i++){
            ans[i]=current;
            int partsize=basesize+(extra-->0?1:0);
            
            for(int j=1;j<partsize;j++){
                if(current) current=current->next;
            }
            if(current){
                ListNode*nextPart=current->next;
                current->next=nullptr;
                current=nextPart;
            }
        }
        return ans;
    }
};