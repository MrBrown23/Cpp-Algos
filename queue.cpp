#include <iostream>
#include <queue>

using namespace std;

void printqueue(queue<int> q)
{
    int num;
    while(!q.empty())
    {
        num = q.front();
        q.pop();  
        cout << num << endl;
    }
}

int main()
{
    queue<int> numQueue;
    numQueue.push(1);
    numQueue.push(2);
    numQueue.push(3);
    printqueue(numQueue);
    
    return 0;
}