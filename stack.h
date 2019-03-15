//
// Created by msz on 3/15/19.
//

#ifndef STRUKTURYDANYCH_STACK_H
#define STRUKTURYDANYCH_STACK_H

#include "node.h"

template<typename T>
class Stack {
public:
    Node<T> *top;

    Stack();
    void push(const T &NewElement);
    T pop();
};

template<typename T>
Stack<T>::Stack() {
    top = nullptr;
}


template<typename T>
void Stack<T>::push(const T &NewElement) {

    std::cout << "Pushing the value: " << NewElement << "!" << std::endl;

    Node<T> *tmp = new Node<T>;
    tmp->data = NewElement;
    tmp->next = top;

    top = tmp;
}

template<typename T>
T Stack<T>::pop() {

    T tmpData = top->data;

    if(top == nullptr){
        std::cout << "The stack is empty!" << std::endl;
        return tmpData;
    }else {
        std::cout << "Popping the value: " << top->data << "!" << std::endl;


        Node<T> *tmp = top;
        top = tmp->next;
        delete tmp;
        return tmpData;
    };

    return tmpData;
}




#endif //STRUKTURYDANYCH_STACK_H

