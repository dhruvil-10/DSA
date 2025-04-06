#include "bits/stdc++.h"
using namespace std;

struct que
{
    int data;
    struct que *link;
} *head = NULL;

void push(int val)
{
    struct que *ptr, *temp;
    ptr = (struct que *)malloc(sizeof(struct que));
    ptr->data = val;
    ptr->link = NULL;
    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        temp = head;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = ptr;
    }
}
void pop()
{
    struct que *ptr;
    if (head == NULL)
    {
        printf("\nQueue is empty");
    }
    else
    {

        ptr = head;
        head = head->link;
        free(ptr);
    }
}

int main()
{
    vector<int> ans;
    while (1)
    {
        int choise;
        cin >> choise;

        if (choise == 1)
        {
            int val1;
            cout << "Enter value :";
            cin >> val1;
            push(val1);
        }
        else if (choise == 2)
        {
            ans.push_back(head->data);
            pop();
        }

        else
            break;
    }
    for (auto num : ans)
    {
        cout << num << " ";
    }
    return 0;
}