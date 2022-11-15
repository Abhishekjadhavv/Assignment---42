
#include <iostream>
#include <queue>
using namespace std;
void ascending_order(queue<int> &q)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    while (!q.empty())
    {
        pq.push(q.front());
        q.pop();
    }

    while (!pq.empty())
    {
        q.push(pq.top());
        pq.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(38);
    q.push(60);
    q.push(21);
    q.push(10);
    q.push(11);
    q.push(2);
    q.push(4);
    q.push(1);
    ascending_order(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}