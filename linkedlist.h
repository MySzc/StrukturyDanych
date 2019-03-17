//
// Created by msz on 3/17/19.
//

#ifndef STRUKTURYDANYCH_LINKEDLIST_H
#define STRUKTURYDANYCH_LINKEDLIST_H

#include "node.h"

template<typename T>
class List{
public:
    Node<T> *head;

    List();
    void pushBack(const T& newElement);
    void pushFront(const T& newElement);
    void insert(const T& newElement ,int index);
    void remove(const T& element);

};

template<typename T>
List<T>::List() {
    head = nullptr;
}

template<typename T>
void List<T>::pushBack(const T &newElement) {

}

template<typename T>
void List<T>::pushFront(const T &newElement) {

    std::cout << "Pushing the value: '" << newElement << "' to the front of the queue!" << std::endl;

    Node<T> *tmp = new Node<T>;
    tmp->data = newElement;

    tmp->next = head;
    tmp->previous = nullptr;

    if(head != nullptr)
        head->previous = tmp;

    head = tmp;

}

template<typename T>
void List<T>::insert(const T &newElement, int index) {

}

template<typename T>
void List<T>::remove(const T &element) {

}




#endif //STRUKTURYDANYCH_LINKEDLIST_H
