struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node_stack {
    int data;
    struct node *next;
};

struct node_queue {
    int data;
    struct node_queue *front;
    struct node_queue *rear;
};

struct node_tree {
    int data;
    struct node_tree *left;
    struct node_tree *right;
};

typedef struct node node;
typedef struct node_stack node_stack;
typedef struct node_queue node_queue;
typedef struct node_tree node_tree;
