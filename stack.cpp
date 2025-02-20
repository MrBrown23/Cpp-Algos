#include <iostream>
#include <stack>
using namespace std;



void printStackElements(stack<int> s)
{
    int num;
    while (!s.empty())
    {
        num = s.top();
        s.pop();
        cout << num << endl;

    }
    
}

int main()
{
    stack<int> numberStack;

    numberStack.push(11);
    numberStack.push(12);
    numberStack.push(13);
    if(numberStack.empty())
    {
        cout << "Empty stack" << endl;
    }
    else
        cout << "Stack is not Empty" << endl;
    cout << "Stack size is " << numberStack.size() << endl;

    printStackElements(numberStack);

    return 0;
}