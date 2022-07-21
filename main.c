#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

int main(void) {
    int ok;

    node *n = malloc(sizeof(node));
    ok = ll_init(n, 5);
    (ok) ? ll_print(*n) : printf("error: ll_init() failed\n");

    free(n);

    return 0;
}
