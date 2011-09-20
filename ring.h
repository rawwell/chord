#ifndef _RING_H
#define _RING_H

#include "chord_types.h"
#include "node.h"

void ring_get_node(int idx);
void ring_create_node(char *node_id);
int ring_size();
int ring_key_max();
void ring_insert(Node *node);
void ring_insert_before(Node *before_node, Node *node);
void ring_insert_after(Node *after_node, Node *node);
void ring_print();

#endif