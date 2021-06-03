#include <iostream>
#include"EdKarp.h"

int main()
{
    EdKarp* t = new EdKarp();
    t->readList("in.txt");
    cout << "MaxFlow is " << t->MaxFlow();
}