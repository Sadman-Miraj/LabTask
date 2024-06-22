#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
    int n = 5;
    int top;
    string *s;

public:
    Stack(int n) {
        this->n = n;
        top = -1;
        s = new string[n];
    }

    bool isFull() {
        return top >= n - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(string x) {
        if (isFull()) {
            cout << "Stack is full" << endl;
        } else {
            top++;
            s[top] = x;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            top--;
        }
    }

    int Findtop() {
        return top;
    }

    void printStack() {
        for (int i = top; i >= 0; i--) {
            cout << s[i] << endl;
        }
        cout << "========================" << endl;
    }
};

int main() {
    Stack *a = new Stack(20);
    a->push("Sadman");
    a->push("Hasan");
    a->push("Miraj");
    a->push("SHM");
    a->printStack();

    delete a;
    return 0;
}
