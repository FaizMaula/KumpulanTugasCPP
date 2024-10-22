#ifndef GRAF_H_INCLUDED
#define GRAF_H_INCLUDED

#include <iostream>
using namespace std;


#define idVertex(p) p->idVertex
#define nextVertex(p) p->nextVertex
#define firstEdge(L) L->firstEdge
#define firstVertex(L) L.firstVertex
#define weight(v) v->weight
#define nextEdge(v) v->nextEdge
#define destVertex(v) v->destVertex

typedef struct vertex *adrVertex;
typedef struct edge *adrEdge;
struct vertex {
    char idVertex;
    adrVertex nextVertex;
    adrEdge firstEdge;
};
struct edge {
    char destVertex;
    int weight;
    adrEdge nextEdge;
};
struct graph{
    adrVertex firstVertex;
};

void createVertex_1301223017(char newVertexID, adrVertex &v);
void initGraph_1301223017(graph &G);
void addVertex_1301223017(graph &G, char newVertexID);
void buildGraph_1301223017(graph &G);
void showGraph_1301223017(graph G);

void createEdge_1301223017(char idVertex,int bobot, adrEdge &v);
void addEdge_1301223017(graph &G, adrVertex p ,adrEdge v);
void showEdge(adrEdge p);
adrVertex searchVertex_1301223017(graph G, char idVertex);
void addArah(graph &G, char idVertex,int bobot);

#endif // GRAF_H_INCLUDED
