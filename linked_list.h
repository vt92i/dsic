struct node {
    int data;
    struct node *next;
};

typedef struct node node;

int ll_init(node *target, int size);
void ll_print(node target);
