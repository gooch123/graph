//
// Created by gooch on 2023-12-12.
//
#include "node.h"
#include "stdlib.h"

NODE* make_node(int vertex){
    NODE* temp = (NODE*) malloc(sizeof (NODE));
    temp->vertex = vertex;
    temp->link = NULL;
}

void make_graph(){
    NODE* temp = make_node(0);
    temp->link = make_node(1);
    temp->link->link = make_node(2);
    graph[0] = temp;

    temp = make_node(1);
    temp->link = make_node(0);
    temp->link->link = make_node(3);
    temp->link->link->link = make_node(4);
    graph[1] = temp;

    temp = make_node(2);
    temp->link = make_node(0);
    temp->link->link = make_node(5);
    temp->link->link->link = make_node(6);
    graph[2] = temp;

    temp = make_node(3);
    temp->link = make_node(1);
    temp->link->link = make_node(7);
    graph[3] = temp;

    temp = make_node(4);
    temp->link = make_node(1);
    temp->link->link = make_node(7);
    graph[4] = temp;

    temp = make_node(5);
    temp->link = make_node(2);
    temp->link->link = make_node(7);
    graph[5] = temp;

    temp = make_node(6);
    temp->link = make_node(2);
    temp->link->link = make_node(7);
    graph[6] = temp;

    temp = make_node(7);
    temp->link = make_node(3);
    temp->link->link = make_node(4);
    temp->link->link->link = make_node(5);
    temp->link->link->link->link = make_node(6);
    graph[7] = temp;

}