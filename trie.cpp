#include <iostream>
#include <string.h>

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

bool inserttrie(trienode **root, char *signedtext)
{
    if(*root == nullptr)
    {
        *root = createnode();
    }

    unsigned char *text = (unsigned char*)signedtext;

    trienode *tmp = *root;
    int length = strlen(signedtext);

    for(int i=0; i < length; i++)
    {
        if(tmp->children[text[i]] == nullptr){
            tmp->children[text[i]] = createnode();
        }
        tmp = tmp->children[text[i]];
    }
    if(tmp->terminal)
    {
        return false;
    }
    else{
        return true;
    }

}




int main()
{

}