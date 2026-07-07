#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *p1 = headA;
        ListNode *p2 = headB;

        while (p1 != p2)
        {
            if (p1 == nullptr)
            {
                p1 = headB;
            }
            else
            {
                p1 = p1->next;
            }

            if (p2 == nullptr)
            {
                p2 = headA;
            }
            else
            {
                p2 = p2->next;
            }
        }

        return p1;
    }
};

int main()
{
    /*
        Create the following intersecting lists:

        List A: 4 -> 1 \
                        8 -> 4 -> 5
        List B: 5 -> 6 -> 1 /
    */

    // Common part
    ListNode *common = new ListNode(8);
    common->next = new ListNode(4);
    common->next->next = new ListNode(5);

    // List A
    ListNode *headA = new ListNode(4);
    headA->next = new ListNode(1);
    headA->next->next = common;

    // List B
    ListNode *headB = new ListNode(5);
    headB->next = new ListNode(6);
    headB->next->next = new ListNode(1);
    headB->next->next->next = common;

    Solution obj;
    ListNode *intersection = obj.getIntersectionNode(headA, headB);

    if (intersection != nullptr)
    {
        cout << "Intersection Node Value: " << intersection->val << endl;
    }
    else
    {
        cout << "No intersection found." << endl;
    }

    return 0;
}