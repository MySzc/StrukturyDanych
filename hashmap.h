//
// Created by msz on 3/19/19.
//

#ifndef STRUKTURYDANYCH_HASHMAP_H
#define STRUKTURYDANYCH_HASHMAP_H

#define SIZE 100
#define SEED

template<typename KeyType ,typename ValueType >
class Map{
public:


    void insert(const KeyType& key ,const ValueType& value);
    ValueType &operator[](const KeyType& key);
    void remove(const KeyType& key);

};

template<typename KeyType, typename ValueType>
void Map<KeyType, ValueType>::insert(const KeyType &key, const ValueType &value) {

}

template<typename KeyType, typename ValueType>
ValueType &Map<KeyType, ValueType>::operator[](const KeyType &key) {
}


template<typename KeyType, typename ValueType>
void Map<KeyType, ValueType>::remove(const KeyType &key) {

}


#endif //STRUKTURYDANYCH_HASHMAP_H
