//
// Created by gooch on 2023-12-12.
//

#ifndef GRAPH_NODE_H
#define GRAPH_NODE_H

typedef struct node{
    int vertex;
    struct node* link;
}NODE;
struct NODE *graph[8];

NODE* make_node(int);
void make_graph();

#endif //GRAPH_NODE_H
