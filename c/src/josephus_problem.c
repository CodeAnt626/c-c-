/*************************************************************************
	> File Name: Josephus_problem.c
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Fri 13 Nov 2020 02:15:21 PM CST
 ************************************************************************/

/*
 * 用链表解决一个稍有改动的“约瑟夫环（Josephus problem）”问题
 *
 * 输出为一行，包含 N 个整数，为依次顺序出列的学生编号，由空格分隔开。
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node *circle_create(int n);
Node *search_node(Node *head, int n);
Node *delete_node(Node *head, int n);
void count_off(Node *head, int n, int k, int m);

int main() {
    int n, k, m;
    scanf("%d%d%d", &n, &k, &m);
    Node *head = circle_create(n);
    count_off(head, n, k, m);

    return 0;
}

Node *circle_create(int n) {
    Node *temp, *new_node, *head;
    int i;

    // 创建第一个链表节点并加数据
    temp = (Node *) malloc(sizeof(Node));
    head = temp;
    head->data = 1;

    // 创建第 2 到第 n 个链表节点并加数据
    for(i = 2; i <= n; i++) {
        new_node = (Node *) malloc(sizeof(Node));
        new_node->data = i;
        temp->next = new_node;
        temp = new_node;
    }

    // 最后一个节点指向头部构成循环链表
    temp->next = head;

    return head;
}

void count_off(Node *head, int n, int k, int m) {
    Node *tmp = search_node(head, k);
    for(int i = n; i > 0; i--) {
        tmp = delete_node(tmp, m);
        if (i != 1) {
            printf(" ");
        }
    }
}

Node *search_node(Node *head, int n) {
    Node *tmp = head;

    for (int i = 1; i < n; i++) {
        tmp = tmp->next;
    }

    return tmp;
}

Node *delete_node(Node *head, int n) {
    Node *res = head;
    Node *tmp;
    if (n  == 1) {
        head = head->next;
        printf("%d", res->data);
        free(res);
    } else {
        res = search_node(res, n - 1);
        tmp = res->next;
        res->next = res->next->next;
        head = res->next;
        printf("%d", tmp->data);
        free(tmp);
    }

    return head;

}
