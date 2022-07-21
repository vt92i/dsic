#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#include "linked_list.h"

int ll_init(node *target, int size) {
    if (size < 1)
        return 0;

    node *n = target;
    for (int i = 1; i <= size; i++) {
        n->data = i;
        n->next = NULL;
        if (i != size) {
            n->next = malloc(sizeof(node));
            n = n->next;
        }
    }

    return 1;
}

void ll_print(node target) {
    node *n = &target;
    while (n != NULL) {
        printf("%d", n->data);
        if (n->next != NULL) {
            printf(" -> ");
            n = n->next;
            continue;
        }
        n = NULL;
    }
    printf("\n");
}
