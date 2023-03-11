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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
    vector<int> v;
    int n;
    TreeNode* check(int s,int l){
        if(l<0 || l>=n || s<0 || s>=n || s>l){
            return NULL;
        }
        
        int mid=(s+l)/2;
        TreeNode *head=new TreeNode(v[mid]);
        head->left=check(s,mid-1);
        head->right=check(mid+1,l);
        return head;
    } 

public:
    TreeNode* sortedListToBST(ListNode* head) {
        
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        n=v.size();
        return check(0,n-1);
    }
};