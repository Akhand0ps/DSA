#include <bits/stdc++.h>
using namespace std;

void explainQueue() {
    queue<int> q;
    q.push(2);
    q.push(6);
    q.push(4);
    q.push(8);

    // Print and pop elements from the queue until it is empty
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // Pushing elements again to demonstrate other operations
    q.push(2);
    q.push(6);
    q.push(4);
    q.push(8);

    // Accessing the back element
    if (!q.empty()) {
        cout << "Back element: " << q.back() << endl;
    }

    // Print and pop elements from the queue until it is empty
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // Pushing elements again to demonstrate front operation
    q.push(2);
    q.push(6);
    q.push(4);
    q.push(8);

    // Accessing the front element
    if (!q.empty()) {
        cout << "Front element: " << q.front() << endl;
    }

    // Print and pop elements from the queue until it is empty
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    explainQueue();
    return 0;
}
