#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
	int data;
	struct list* next;
}SLIST; 
void insert_list(SLIST* head, int index, int num) {
    SLIST* new_node = (SLIST*)malloc(sizeof(SLIST));  // �����½ڵ�
    new_node->data = num;  // �����½ڵ��ֵ
    
    if (index == 0) {
        // ��ͷ������ڵ�
        new_node->next = head;
        head = new_node;
    } else {
        SLIST* current = head;
        int i = 0;

        // �ҵ�Ҫ����λ�õ�ǰһ���ڵ�
        while (current != NULL && i < index - 1) {
            current = current->next;
            i++;
        }

        if (current != NULL) {
            // �����½ڵ�
            new_node->next = current->next;
            current->next = new_node;
        } else {
            // ��ǰ������С�ڲ���λ��ʱ��ֱ�Ӳ��뵽ĩβ
            new_node->next = NULL;
            current->next = new_node;
        }
    }
}
