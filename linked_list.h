#include "node.h"

int ll_init(node *target, int size);
void ll_print(node target);
void ll_reverse_print(node target);
// TODO!!: implement doubly linked list

// TODO: implement ll_find()
int ll_find(node target, int data);

// TODO: implement ll_insert_beginning()
int ll_insert_beginning(node *target, int data);

// TODO: implement ll_insert_end()
int ll_insert_end(node *target, int data);

// TODO: implement ll_insert_before()
int ll_insert_before(node *target, int current_node, int data);

// TODO: implement ll_insert_after()
int ll_insert_after(node *target, int current_node, int data);

// TODO: implement ll_remove_beginning()
int ll_remove_beginning(node *target);

// TODO: implement ll_remove_end()
int ll_remove_end(node *target);

// TODO: implement ll_remove_before()
int ll_remove_before(node *target, int current_node);

// TODO: implement ll_remove_after()
int ll_remove_after(node *target, int current_node);

// TODO: implement ll_clear()
int ll_clear(node *target);

// TODO: implement ll_sort_asc()
int ll_sort_asc(node *target);

// TODO: implement ll_sort_desc()
int ll_sort_desc(node *target);

// TODO: implement ll_reverse()
int ll_reverse(node *target);
