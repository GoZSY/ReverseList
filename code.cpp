/************************
断开后要保存后一段的起始
*************************/

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) 
    {
        if(pHead == NULL)
            return NULL;
        ListNode* pCurrent = pHead->next;
        ListNode* pNext = NULL;
        pHead->next = NULL;
        while(pCurrent != NULL)
        {
            pNext = pCurrent->next;
            pCurrent->next = pHead;
            pHead = pCurrent;
            pCurrent = pNext;
        }
		return pHead;
    }
};
