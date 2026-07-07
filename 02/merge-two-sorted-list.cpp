#include <iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* l = list1;
        ListNode* r = list2;

        ListNode dummy;
        ListNode* tail = &dummy;

        while (l != nullptr && r != nullptr) {

            if (l->val <= r->val) {
                tail->next = l;
                l = l->next;
            }
            else {
                tail->next = r;
                r = r->next;
            }

            tail = tail->next;
        }

        tail->next = (l != nullptr) ? l : r;

        return dummy.next;
    }
};

// Helper function to create a linked list
ListNode* createList(int arr[], int size) {

    if (size == 0)
        return nullptr;

    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;

    for (int i = 1; i < size; i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }

    return head;
}

// Helper function to print a linked list
void printList(ListNode* head) {

    while (head != nullptr) {
        cout << head->val;

        if (head->next != nullptr)
            cout << " -> ";

        head = head->next;
    }

    cout << endl;
}

int main() {

    int arr1[] = {1, 2, 4};
    int arr2[] = {1, 3, 4};

    ListNode* list1 = createList(arr1, 3);
    ListNode* list2 = createList(arr2, 3);

    cout << "List 1: ";
    printList(list1);

    cout << "List 2: ";
    printList(list2);

    Solution obj;

    ListNode* mergedList = obj.mergeTwoLists(list1, list2);

    cout << "\nMerged List: ";
    printList(mergedList);

    return 0;
}