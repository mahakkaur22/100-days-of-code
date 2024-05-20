
//   Definition for singly-linked list.
// YES DONE
// Complexity
// Time complexity: O(n)
// Space complexity: O(1)
// adding comments
// so now i can say i am able to add projects in my github with my account right!

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *node = nullptr;

        while (head != nullptr)
        {
            ListNode *temp = head->next;
            head->next = node;
            node = head;
            head = temp;
        }

        return node;
    }
};

// Solution 2 - Recursive Solution

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (!head || !head->next)
        {
            return head;
        }

        ListNode *newHead = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return newHead;
    }
};