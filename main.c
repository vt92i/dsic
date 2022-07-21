#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

int main(void) {
    int ok;

    node *n = malloc(sizeof(node));

    ok = ll_init(n, 7);
    if (!ok) {
        printf("error: ll_init() failed\n");
        return 1;
    }

    ll_print(*n);
    ll_reverse_print(*n);

    free(n);

    return 0;
}
