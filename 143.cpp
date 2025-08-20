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
    void reorderList(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast != nullptr && fast->next !=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* head1 = head;
        ListNode* head2 = slow->next;
        slow->next = nullptr;

        ListNode* curr = head2;
        ListNode* prev = nullptr;
        ListNode* next;

        while(curr != nullptr){
            next = curr -> next;
            curr -> next = prev;

            prev = curr;
            curr = next;

        }

        head2 = prev;

        ListNode* h1;
        ListNode* h2;
        while(head1 != nullptr && head2 != nullptr){
            h1 = head1 -> next;
            h2 = head2 -> next;
            head1 -> next = head2;
            head2 -> next = h1;
            head1 = h1;
            head2 = h2;

        }

    }
};