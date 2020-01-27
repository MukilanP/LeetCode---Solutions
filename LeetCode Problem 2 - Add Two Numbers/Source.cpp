/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public
    ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int curco = 0;
        int prevco = 0;
        int reminder = 0;
        ListNode AddedList = NULL;
        
        int num1 = 0;
        int num2 = 0;
        int result = 0;
        
        while(l1!=NULL  l2!=NULL)
        {
            curco = 0;
            if (l1!=NULL)
                num1 = l1-val;
            else
                num1 = 0;
            
            if (l2!=NULL)
                num2 = l2-val;
            else
                num2 = 0;
            
            result = num1 + num2 + prevco;
            
            reminder = result%10;
            curco = result10;
            
            if (AddedList == NULL)
            {
                AddedList = new ListNode(reminder);
            }
            else
            {
                ListNode ptr = AddedList;
                while(ptr-next!= NULL)
                    ptr = ptr-next;
                ListNode temp = new ListNode(reminder);
                ptr-next = temp;
               
            }
            
            prevco = curco;
            if (l1!=NULL)
				l1 = l1-next;
			if (l2!=NULL)
				l2 = l2-next;
        }
        
       if (curco!=0)
       {
            if (AddedList == NULL)
            {
                AddedList = new ListNode(curco);
            }
            else
            {
                ListNode ptr = AddedList;
                while(ptr-next!= NULL)
                    ptr = ptr-next;
                ListNode temp = new ListNode(curco);
                ptr-next = temp;
               
            }
       }
        
	   return AddedList;
        
    }
};