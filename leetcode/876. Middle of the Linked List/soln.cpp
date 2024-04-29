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
    ListNode* middleNode(ListNode* head) {
        ListNode* curr{head};
        auto num_nodes{1};
        while(curr->next){
            curr = curr->next;
            num_nodes++;
        }
        int8_t mid_node{1};
        if(num_nodes%2==0){
            mid_node = (num_nodes / 2) + 1;
        } else{
            mid_node = (num_nodes + 1) / 2;
        }
        curr = head;
        int8_t count{1};
        while(curr->next){
            curr = curr->next;
            count++;
            if(count == mid_node){
                break;
            }
        }
        return curr;

    }
};