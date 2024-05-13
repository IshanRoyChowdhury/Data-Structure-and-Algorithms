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
    ListNode* removeNodes(ListNode* head) {
        
        ListNode * new_head{head};
        while (!isListDescending(new_head)) {
            ListNode* node{new_head};
            ListNode* prev{nullptr};
            while (node->next) {
                ListNode* node_on_right = node->next;
                ListNode* next_node{node->next};
                bool del_curr_node{false};
                // do we need to delete current node
                // while(node_on_right){
                if (next_node->val > node->val) {
                    del_curr_node = true;
                    // break;
                }
                //     node_on_right = node_on_right->next;
                // }
                if (del_curr_node) {
                    if (prev == nullptr) {
                        // need new head
                    } else {
                        prev->next = next_node;
                        node->val = next_node->val;
                        node->next = next_node->next;
                    }
                } else {
                    prev = node;
                    if (new_head == nullptr) {
                        new_head = node;
                    }
                }
                // shift to next node

                node = node->next;
            }
        }
        return new_head;
    }
    bool isListDescending(ListNode* head) {
        ListNode* node{head};
        bool is_desc{true};
        ListNode* node_on_right = node->next;
        while (node->next) {
            while (node_on_right) {
                if (node_on_right->val > node->val) {
                    is_desc = false;
                    break;
                }
                node_on_right = node_on_right->next;
            }
        }
        return is_desc;
    }
};