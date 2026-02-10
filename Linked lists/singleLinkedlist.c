#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

/* Append value to tail (maintains head via pointer-to-pointer) */
void append(node **head_ref, int val) {
    node *newn = malloc(sizeof(node));
    if (!newn) { perror("malloc"); exit(EXIT_FAILURE); }
    newn->data = val;
    newn->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = newn;
        return;
    }
    node *t = *head_ref;
    while (t->next) t = t->next;
    t->next = newn;
}

/* Print all nodes */
void print_list(node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    node *p = head;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

/* Count nodes */
int count_nodes(node *head) {
    int cnt = 0;
    node *p = head;
    while (p) { cnt++; p = p->next; }
    return cnt;
}

/* Free whole list */
void free_list(node **head_ref) {
    node *p = *head_ref;
    while (p) {
        node *tmp = p;
        p = p->next;
        free(tmp);
    }
    *head_ref = NULL;
}

/* Create list from user input until sentinel -1111 */
node *create_from_input(void) {
    node *head = NULL;
    int x;
    printf("Enter integers to append to list (enter -1111 to stop):\n");
    while (1) {
        if (scanf("%d", &x) != 1) { fprintf(stderr,"Bad input\n"); break; }
        if (x == -1111) break;
        append(&head, x);
    }
    return head;
}

int main(void) {
    node *head = create_from_input();

    printf("List contents: ");
    print_list(head);

    printf("Node count: %d\n", count_nodes(head));

    free_list(&head);
    return 0;
}