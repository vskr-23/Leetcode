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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* newhead=head->next;
        ListNode*prev=nullptr;
        ListNode* node1=head;;
        ListNode* node2=head->next;
        while(node1 && node2){
            ListNode* nextpair=node2->next;
            node2->next=node1;
            node1->next=nextpair;
            if(prev) prev->next=node2;
            prev=node1;
            node1=nextpair;
            if(node1) node2=node1->next;
        }
        return newhead;
    }
};