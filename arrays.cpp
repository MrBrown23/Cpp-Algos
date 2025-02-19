#include <iostream>

using namespace std;

int main()
{
    float monthArray[6] = {100, 220, 300, 0, 200, 250};
    float average = 0;

    for(int i=0; i<sizeof(monthArray)/sizeof(monthArray[0]); i++)
    {
        cin>> monthArray[i];
    }

    for(int i=0; i<sizeof(monthArray)/sizeof(monthArray[0]); i++)
    {
        average += monthArray[i];
    }

    average /= sizeof(monthArray)/sizeof(monthArray[0]);
    cout << "The average: " << average << endl;

    return 0;
}