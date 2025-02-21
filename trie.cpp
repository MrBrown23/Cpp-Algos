#include <iostream>

using namespace std;

const int NUM_CHARS = 200;

typedef struct trienode{
    struct trienode *children[NUM_CHARS];
    bool terminal;
}trienode;

trienode *createnode()
{
    trienode *newnode = new trienode();
    for(int i=0; i< NUM_CHARS; i++)
    {
        newnode->children[i] = nullptr;
    }

    newnode->terminal = false;

    return newnode;

}




int main()
{

}