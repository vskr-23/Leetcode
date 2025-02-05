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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        ListNode*temp=head;
        vector<vector<int>>ans(m,vector<int>(n,-1));
        int left=0,top=0;
        int right=n-1,bottom=m-1;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                if(temp){
                    ans[top][i]=temp->val;
                    temp=temp->next;
                }
            }
            top++;
            for(int i=top;i<=bottom;i++){
                if(temp){
                    ans[i][right]=temp->val;
                    temp=temp->next;
                }
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    if(temp){
                        ans[bottom][i]=temp->val;
                        temp=temp->next;
                    }
                }
            }
            bottom--;
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    if(temp){
                        ans[i][left]=temp->val;
                        temp=temp->next;
                    }
                }
            }
            left++;
        }
        return ans;
    }
};