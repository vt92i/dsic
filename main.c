#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

int main(void) {
    int ok;

    node *n = malloc(sizeof(node));
    ok = ll_init(n, 2);
    (ok) ? ll_print(*n) : printf("error: ll_init() failed\n");

    printf("node1->ptr: %p\n", n);
    printf("node1->data: %d\n", n->data);
    printf("node1->prev: %p\n", n->prev);
    printf("node1->next: %p\n", n->next);

    printf("\n");

    printf("node2->ptr: %p\n", n->next);
    printf("node2->data: %d\n", n->next->data);
    printf("node2->prev: %p\n", n->next->prev);
    printf("node2->next: %p\n", n->next->next);

    free(n);

    return 0;
}
