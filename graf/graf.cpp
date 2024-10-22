#include "graf.h"
#include "ctype.h"
void createVertex_1301223017(char newVertexID, adrVertex &v){
    v = new vertex;
    idVertex(v) = newVertexID;
    nextVertex(v) = NULL;
    firstEdge(v) = NULL;

}
void initGraph_1301223017(graph &G){
    firstVertex(G) = NULL;
}
void addVertex_1301223017(graph &G, char newVertexID){
    adrVertex v;
    createVertex_1301223017(newVertexID,v);
    if (firstVertex(G) == NULL){
        firstVertex(G) = v;
    }else{
        nextVertex(v) = firstVertex(G);
        firstVertex(G) = v;
    }
}
void buildGraph_1301223017(graph &G){
    char p;
    cin >> p;
    while (isalpha(p) != 0){
        addVertex_1301223017(G,p);
        cin >> p;
    }
}
void showGraph_1301223017(graph G){
    adrVertex p = firstVertex(G);
    while (p != NULL) {
        cout << idVertex(p);
        showEdge(firstEdge(p));
        cout << endl;
        p = nextVertex(p);
    }
}

void showEdge(adrEdge p){
    while (p != NULL){
        cout << " -> " << destVertex(p) << weight(p);
        p = nextEdge(p);
    }
}
void createEdge_1301223017(char idVertex,int bobot, adrEdge &v){
    v = new edge;
    destVertex(v) = idVertex;
    weight(v) = bobot;
    nextEdge(v) = NULL;
}
adrVertex searchVertex_1301223017(graph G, char idVertex){
    adrVertex p = firstVertex(G);
    while (p!= NULL){
        if (idVertex(p) == idVertex){
            return p;
        }
        p = nextVertex(p);
    }
    return NULL;
}
void addEdge_1301223017(graph &G, adrVertex p ,adrEdge v){
    if (firstEdge(p) == NULL){
        firstEdge(p) = v;
    }else{
        nextEdge(v) = firstEdge(p);
        firstEdge(p) = v;
    }
}
void addArah(graph &G, char idVertex,int bobot){
    adrVertex p = searchVertex_1301223017(G,idVertex);
    cout << "hubungkan dengan ";
    char q;
    cin >> q;
    adrVertex f = searchVertex_1301223017(G,q);
    adrEdge v;
    createEdge_1301223017(idVertex(f),bobot,v);
    if (p != NULL and f != NULL) {
        addEdge_1301223017(G,p,v);
    }
}
/*
int countDerajatOut(graph &G, char idVertex){
    adrVertex p = searchVertex_1301223017(G,idVertex);
    int count = 0;
    q = firstEdge(p);
    while( q != NULL){
        q = nextEdge(q);
        count++;
    }
    return count;
}

int countDerajatIn(graph &G, char idVertex){
    adrVertex p = firstVertex(G);
    adrEdge q;
    int count;
    while (p != NULL){
        q = firstEdge(p);
        while(q!= NULL){
            if (destVertex(q) == idVertex){
                count++;
            }
            q = nextEdge(q);
        }
        nextVertex(p);
    }
    return count;
}
*/

