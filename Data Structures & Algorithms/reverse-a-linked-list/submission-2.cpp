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
ListNode* RevLinkedList(ListNode* head, ListNode* curr, ListNode* prev){
    if(curr == nullptr)
    return prev;
    ListNode* nxt = curr->next;
    curr->next = prev;
    return RevLinkedList(head, nxt, curr);
}
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //Iterative approach
        // ListNode* curr = head;
        // ListNode* nxt = nullptr;
        // ListNode* prev = nullptr;
        // while(curr){
        //     ListNode* nxt = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = nxt;
        // }   
        // return prev;

        //Recursive approach
        ListNode* curr = head;
        ListNode* prev = nullptr;
        return RevLinkedList(head, curr, prev);
    }
};
