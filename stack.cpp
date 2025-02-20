#include <iostream>
#include <stack>
using namespace std;



int main()
{
    stack<int> numberStack;

    numberStack.push(11);
    numberStack.push(12);
    numberStack.push(13);
    int num = numberStack.top();
    numberStack.pop();
    if(numberStack.empty())
    {
        cout << "Empty stack" << endl;
    }
    else
        cout << "Stack is not Empty" << endl;
    cout << "Stack size is " << numberStack.size() << endl;

    cout << "The head of the stack: "<< num<<endl;

    return 0;
}