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
    ListNode* reverse(ListNode*&head){
        if(!head || !head->next){
            return head;
        }
        ListNode*front=nullptr;
        ListNode*current=head;
        ListNode*prev=nullptr;
        while(current){
            front=current->next;
            current->next=prev;
            prev=current;
            current=front;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        ListNode*head=new ListNode(0);
        ListNode*temp=head;
        ListNode*temp1=l1;
        ListNode*temp2=l2;
        int carry=0;
        while(temp1 || temp2 || carry){
            int sum=0;
            if(temp1){
                sum+=temp1->val;
                temp1=temp1->next;
            }
            if(temp2){
                sum+=temp2->val;
                temp2=temp2->next;
            }
            sum+=carry;
            temp->next=new ListNode(sum%10);
            carry=sum/10;
            temp=temp->next;
        }
        ListNode*newhead=head->next;
        head->next=nullptr;
        delete head;
        newhead=reverse(newhead);
        return newhead;
    }
};