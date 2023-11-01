#include <iostream>
#include <stack>
using namespace std;

void removeLowest(stack<int>& s) {
    if (s.empty()) {
        cout << "Stack is empty." << endl;
        return;
    }
    int min = s.top();
    stack<int> temp;
    while (!s.empty()) {
        if (s.top() < min) {
            min = s.top();
        }
        temp.push(s.top());
        s.pop();
    }
    while (!temp.empty()) {
        if (temp.top() != min) {
            s.push(temp.top());
        }
        temp.pop();
    }
}

int main() {
    stack<int> s;
    cout << "Input some elements onto the stack:" << endl;
    s.push(7);
    s.push(4);
    s.push(2);
    s.push(5);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    removeLowest(s);
    cout << "Find and remove the lowest element 2 from the stack." << endl;
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    cout << "Input two more elements" << endl;
    s.push(-1);
    s.push(2);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    removeLowest(s);
    cout << "Find and remove the lowest element -1 from the stack." << endl;
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}
