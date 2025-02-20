#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> numQueue;
    numQueue.push(1);
    numQueue.push(2);
    numQueue.push(3);
    int num;
    while(!numQueue.empty())
    {
        num = numQueue.front();
        numQueue.pop();  
        cout << num << endl;
    }
    return 0;
}