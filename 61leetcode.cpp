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
    ListNode* rotateRight(ListNode* head, int k) {
        // base cases
        if(head == NULL || head->next==NULL||k==0) return head;
        // calculating the length of the list 
        ListNode* temp = head;
        int length =1;
        while(temp->next !=NULL) {
            ++ length;
            temp = temp->next;
        }
        // linked the last node to the first node
        temp->next = head;
        k = k%length;
        int end = length-k;
        // because of above line we will have the end of the new linked list
        while(end--){
            temp = temp->next;
        }
        // break the last node link and point to NULL
        head = temp->next;
        temp->next = NULL;
        return head;

    }
};
