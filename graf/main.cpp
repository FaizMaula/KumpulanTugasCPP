#include "graf.h"

using namespace std;

int main()
{
    graph G;
    char id;
    int weight;
    initGraph_1301223017(G);
    buildGraph_1301223017(G);
    showGraph_1301223017(G);

    for (int i = 0;i<4;i++){
        cin >> id >> weight;
        addArah(G,id,weight);
    }

    showGraph_1301223017(G);

}
