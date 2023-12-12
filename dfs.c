//
// Created by gooch on 2023-12-12.
//
#include "dfs.h"
#include <stdio.h>
#define FALSE 0
#define TRUE 1
short int visited[8];

void dfs(int v){
    make_graph();
    NODE *w;
    visited[v] = TRUE;
    printf("%5d",v);
    for(w = graph[v]; w; w=w->link)
        if(!visited[w->vertex])
            dfs(w->vertex);
}

void dfs_exec(){
    dfs(0);
};
