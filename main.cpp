#include <iostream>
#include "stack.h"
#include "queue.h"
#include "priorityqueue.h"


int main() {
    std::cout << "Starting up..." << std::endl;

    std::cout << std::endl << std::endl << "Running test: STACK" << std::endl << std::endl;

    Stack<int> s;

    s.push(10);
    s.push(11);
    s.push(12);
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    std::cout << std::endl << std::endl << "Running test: QUEUE" << std::endl << std::endl;

    Queue<int> q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    std::cout << std::endl << std::endl << "Running test: PRIORITYQUEUE" << std::endl << std::endl;

    PriorityQueue<int> pq;

    pq.enqueue(2,3);
    pq.enqueue(4,5);
    pq.enqueue(5,8);
    pq.enqueue(1,1);
    pq.enqueue(5,4);
    pq.dequeue();
    pq.dequeue();
    pq.dequeue();
    pq.dequeue();
    pq.dequeue();
    pq.dequeue();


    return 0;
}