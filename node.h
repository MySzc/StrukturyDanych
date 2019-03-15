//
// Created by msz on 3/15/19.
//

#ifndef STRUKTURYDANYCH_NODE_H
#define STRUKTURYDANYCH_NODE_H

//Node struct to hold the data in
template <typename T>
struct Node{
public:
    T data;
    Node *next;

    Node();
    Node(T value);
};

template<typename T>
Node<T>::Node() {
    data = 0;
    next = nullptr;
}

template<typename T>
Node<T>::Node(T value) {
    data = value;
    next = nullptr;
}

#endif //STRUKTURYDANYCH_NODE_H
