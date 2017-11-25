#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

/*
	to replicate a queue using two stacks, we must think about this
	with common sense.  Stacks are LIFO, and Queues are FIFO, meaning
	we input values into the new stack, and then pop them so they are
	on top of the old stack so that the very first value is now able
	to be accessed and returned for printing using stack::top()
*/

class MyQueue {

  public:
    stack<int> stackNewestOnTop, stackOldestOnTop;

    void push(int x) {
      stackNewestOnTop.push(x);
    }

    void pop() {
      if (stackOldestOnTop.empty()) {
			  while (!stackNewestOnTop.empty()) {
  				stackOldestOnTop.push(stackNewestOnTop.top());
  				stackNewestOnTop.pop();
			  }
		  }
      stackOldestOnTop.pop();
    }

    int front() {
      if (stackOldestOnTop.empty()) {
			  while (!stackNewestOnTop.empty()) {
				  stackOldestOnTop.push(stackNewestOnTop.top());
				  stackNewestOnTop.pop();
			  }
		  }
		  return stackOldestOnTop.top();
    }
};

int main() {
    MyQueue q1;
    int q, type, x;
    cin >> q;

    for(int i = 0; i < q; i++) {
        cin >> type;
        if(type == 1) {
            cin >> x;
            q1.push(x);
        }
        else if(type == 2) {
            q1.pop();
        }
        else cout << q1.front() << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
