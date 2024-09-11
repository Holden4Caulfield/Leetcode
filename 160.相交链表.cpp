/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:

    int getlen(ListNode *head)
    {
        int len = 0;
        while(head)
        {
            head=head->next;
            len++;
        }
        return len;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *pa = headA,*pb=headB;
        int lenA = getlen(pa);
        int lenB = getlen(pb);
        int diff = abs(lenA-lenB);
        auto getnode = [](int diff,ListNode *ha,ListNode *hb)
        {
            while(diff--)
            {
                ha=ha->next;
            }
            while(ha!=hb)
            {
                ha=ha->next;
                hb=hb->next;
            }
            return ha;
        };
        if(lenA>lenB)return getnode(diff,pa,pb);
        else return getnode(diff,pb,pa);
    }
};
// @lc code=end

