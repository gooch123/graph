//
// Created by gooch on 2023-12-12.
//
#include "bfs.h"
#include <stdio.h>
#define TRUE 1
#define FALSE 0
short int queue[8];
short int visited[8];
int front = -1;
int rear = -1;

int deleteq(){
    if(rear == front) return -1;
    front = (front + 1) % 8;
    return queue[front];
}

void addq(int v){
    rear = (rear+1) % 8;
    if(rear == front) return;
    queue[rear] = v;
}

void bfs(int v){
    make_graph();
    NODE *w;
    printf("%5d",v);
    visited[v] = TRUE;
    addq(v);
    while (rear != front){
        v=deleteq();
        for(w = graph[v]; w; w= w->link)
            if(!visited[w->vertex]){
                printf("%5d",w->vertex);
                addq(w->vertex);
                visited[w->vertex] = TRUE;
            }
    }
}

void bfs_exec(){
    bfs(0);
}