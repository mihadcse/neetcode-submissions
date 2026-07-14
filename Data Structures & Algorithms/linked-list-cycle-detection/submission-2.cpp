/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;is 
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode* head) {
        //unordered_set<ListNode*>visited;
     //   while (head){
            //if(visited.count(head)){
            //    return true;
         //   }
           // visited.insert(head);
            //  head = head ->next;
      //  }
        //return false;
       
       ListNode* slow= head;
       ListNode* fast= head;
      
       while(fast && fast->next){
          slow = slow->next;
          fast= fast->next->next;
         
          if(slow == fast)
         	return true;
       }
       return false;
    }
};
