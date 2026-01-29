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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>arr;
        while(list1 !=NULL){
            arr.push_back(list1->val);
            list1=list1->next;
        }
        while(list2!=NULL){
            arr.push_back(list2->val);
            list2=list2->next;
        }
        sort(begin(arr),end(arr));
        if(arr.size()==0)return NULL;
        ListNode *head=new ListNode(arr[0]);
        ListNode *temp=head;
        for(int i=1;i<arr.size();i++){
            temp->next=new ListNode(arr[i]);
            temp=temp->next;
        }
        return head;
        
    }
};