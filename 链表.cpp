#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
	int data;
	struct list* next;
}SLIST; 
void insert_list(SLIST* head, int index, int num) {
    SLIST* new_node = (SLIST*)malloc(sizeof(SLIST));  // 创建新节点
    new_node->data = num;  // 设置新节点的值
    
    if (index == 0) {
        // 在头部插入节点
        new_node->next = head;
        head = new_node;
    } else {
        SLIST* current = head;
        int i = 0;

        // 找到要插入位置的前一个节点
        while (current != NULL && i < index - 1) {
            current = current->next;
            i++;
        }

        if (current != NULL) {
            // 插入新节点
            new_node->next = current->next;
            current->next = new_node;
        } else {
            // 当前链表长度小于插入位置时，直接插入到末尾
            new_node->next = NULL;
            current->next = new_node;
        }
    }
}
