#pragma once
#include "DualList.h"
class EdKarp
{
private:
    int Vertices;
    int** Graph_Matrix; //and also the capacity of the edges of the graph
    int** maxStream;
    int from, to;
    int resultStream;
    char* VerticesName;
    int findFlow();
public:
    void readList(string);
    int MaxFlow();
};
