class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* first = list1;
        for(int i=0; i<a-1; i++){
            first = first->next;
        }
        ListNode* second = first->next;

        for(int i=0; i<b-a+1; i++){
            second = second->next;
        }
        first->next = list2;
        while(list2->next){
            list2 = list2->next;
        }
        list2->next = second;

        return list1;
    }
};