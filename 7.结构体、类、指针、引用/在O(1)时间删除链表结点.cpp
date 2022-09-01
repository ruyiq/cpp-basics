class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }
};

/*

class Solution {
public:
    void deleteNode(ListNode* node) 
    {
        auto p=node->next;

        node->val=p->val;
        node->next=p->next;
        //这两步的作用就是将*(node->next)赋值给*node,所以可以合并成一条语句：
        //*node=*(node->next);

        delete p; 
    }
};

*/