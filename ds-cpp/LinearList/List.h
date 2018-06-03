//
// Created by InnF on 2018/6/3.
//

#ifndef LINEARLIST_LIST_H
#define LINEARLIST_LIST_H

#define LIST_INIT_SIZE 100
#define LIST_INCREMENT 10

namespace List {

    template<typename T>
    class List {
    public:
        List(int size);

        List();

        ~List();

        void clear();

        bool isEmpty();

        int getLength();

        T get(int idx);

        int locateItem(T item, int(*compare)(T, T));

        T priorItem(T item);

        T nextItem(T item);

        bool insert(int idx, T item);

        T remove(int idx);

        void traverse(void(*visit()));

    private:
        T *elem;
        int length; // total length of the list
        int size; // current size of the list
    };


    template<typename T>
    List<T>::List(int size) {

    }

    template<typename T>
    List<T>::List() {

    }

    template<typename T>
    List<T>::~List() {

    }

    template<typename T>
    void List<T>::clear() {

    }

    template<typename T>
    bool List<T>::isEmpty() {
        return false;
    }

    template<typename T>
    int List<T>::getLength() {
        return 0;
    }

    template<typename T>
    T List<T>::get(int idx) {
        return nullptr;
    }

    template<typename T>
    int List<T>::locateItem(T item, int (*compare)(T, T)) {
        return 0;
    }

    template<typename T>
    T List<T>::priorItem(T item) {
        return nullptr;
    }

    template<typename T>
    T List<T>::nextItem(T item) {
        return nullptr;
    }

    template<typename T>
    bool List<T>::insert(int idx, T item) {
        return false;
    }

    template<typename T>
    T List<T>::remove(int idx) {
        return nullptr;
    }

    template<typename T>
    void List<T>::traverse(void (*visit)()) {

    }

}

#endif //LINEARLIST_LIST_H

