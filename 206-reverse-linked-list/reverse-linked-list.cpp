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

    vector<int> solve(ListNode *node){
       // ListNode* tail;
        vector<int>temp;
        while(node!=NULL){
            temp.push_back(node->val);
            
            node=node->next;
        }
        
        return temp;

    }
    ListNode* reverseList(ListNode* head) {
        vector<int>straight=solve(head);
        if(straight.size()==0 )return NULL;
        reverse(begin(straight),end(straight));
        ListNode *h=new ListNode(straight[0]);
        ListNode* temp=h;
        for(int i=1;i<straight.size();i++){
            temp->next=new ListNode(straight[i]);
            temp=temp->next;
        }
        return h;
        
    }
};