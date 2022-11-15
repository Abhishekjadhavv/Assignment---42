// Check if a queue is empty or not using queue::size() function
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    if (q.empty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    return 0;
}