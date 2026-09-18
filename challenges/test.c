// #include <stdio.h>

// #define SIZE 5

// int sum_array(int *arr, int n)
// {
//     int sum;
//     for (int i = 0; i <= n; i++) {
//         sum += arr[i];
//     }
//     return sum;
// }

// int main(void)
// {
//     int data[SIZE] = {10, 20, 30, 40, 50};
//     int result;

//     result = sum_array(data, SIZE);
//     printf("sum = %d\n", result);

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

Node *make_node(int value)
{
    Node *n = malloc(sizeof(Node));
    n->value = value;
    n->next = NULL;
    return n;
}

int sum_list(Node *head)
{
    int total = 0;
    Node *cur = head;

    /* value 가 -1 인 노드를 만나면 끝 */
    while (cur->value != -1) {
        total += cur->value;
        cur = cur->next;
    }
    return total;
}

int main(void)
{
    Node *a = make_node(10);
    Node *b = make_node(20);
    Node *c = make_node(30);

    a->next = b;
    b->next = c;

    printf("sum = %d\n", sum_list(a));
    printf("done\n");

    return 0;
}