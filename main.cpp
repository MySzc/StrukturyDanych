#include <iostream>
#include "stack.h"
#include "queue.h"
#include "priorityqueue.h"
#include "linkedlist.h"


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

    //TODO DOES NOT WORK PROPERLY
/* ************************************************************************************************
    std::cout << std::endl << std::endl << "Running test: PRIORITYQUEUE" << std::endl << std::endl;

    PriorityQueue<int> pq;

    pq.enqueue(2,3);
    pq.enqueue(4,2);
    pq.enqueue(5,1);
    pq.enqueue(1,1);
    pq.enqueue(5,0);
    pq.dequeue();
    pq.dequeue();
    pq.dequeue();
    pq.dequeue();
    pq.dequeue();
    pq.dequeue();

*************************************************************************************************** */


    std::cout << std::endl << std::endl << "Running test: DOUBLELINKEDLIST" << std::endl << std::endl;

    List<int> l;

    l.pushFront(1);
    l.pushFront(2);



    return 0;
}