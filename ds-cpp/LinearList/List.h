//
// Created by InnF on 2018/6/3.
//

#ifndef LINEARLIST_LIST_H
#define LINEARLIST_LIST_H

#define LIST_INIT_SIZE 20
#define LIST_INCREMENT 10

#include <cassert>
#include <iostream>

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

        int locateItem(T item, bool (*compare)(T));

        T priorItem(T item);

        T nextItem(T item);

        bool insert(T item);

        bool insert(int idx, T item);

        T remove(int idx);

        void traverse(void(*visit(T)));

    private:
        T *array;
        int length; // total length of the list
        int size; // current size of the list
    };


    template<typename T>
    List<T>::List(int size) {
        array = new T[size];
        length = 0;
    }

    template<typename T>
    List<T>::List() {
        List(LIST_INIT_SIZE);
    }

    template<typename T>
    List<T>::~List() {
        delete[] array;
    }

    template<typename T>
    void List<T>::clear() {
        assert(array != nullptr);
        for (int i = 0; i < length; ++i) {
            delete array[i];
            array[i] = new T;
        }
    }

    template<typename T>
    bool List<T>::isEmpty() {
        return length == 0;
    }

    template<typename T>
    int List<T>::getLength() {
        return length;
    }

    template<typename T>
    T List<T>::get(int idx) {
        assert(array != nullptr);
        assert(idx >= 0 && idx < length);
        return array[idx];
    }

    template<typename T>
    int List<T>::locateItem(T item, bool(*compare)(T)) {
        for (int i = 0; i < length; ++i) {
            if (compare(array[i])) return i;
        }
        return -1;
    }

    template<typename T>
    T List<T>::priorItem(T item) {
        for (int i = 1; i < length; ++i) {
            if (item == array[i]) return array[i - 1];
        }
        return nullptr;
    }

    template<typename T>
    T List<T>::nextItem(T item) {
        for (int i = 0; i < length - 1; ++i) {
            if (item == array[i]) return array[i + 1];
        }
        return nullptr;
    }

    template<typename T>
    bool List<T>::insert(T item) {
        return insert(length, item);
    }

    template<typename T>
    bool List<T>::insert(int idx, T item) {
        assert(idx >= 0 && idx < length + 1);
        if (length == size) {
            T *aux = array;
            delete[] array;
            array = new T[length + LIST_INCREMENT];
            for (int i = 0, j = 0; j < length; ++i, ++j) {
                if (idx == i) {
                    array[i] = item;
                    j -= 1; // reduce tmp's index one step,
                } else {
                    array[i] = aux[j];
                }
            }
            size += LIST_INCREMENT;
        } else if (idx == length) {
            array[length] = item;
        } else {
            T tmp = array[idx];
            array[idx] = item;
            for (int i = idx + 1; i < length + 1; ++i) {
                T t = array[i + 1];
                array[i] = tmp;
                tmp = t;
            }
        }
        length++;
        return true;
    }

    template<typename T>
    T List<T>::remove(int idx) {
        assert(idx >= 0 && idx < length);
        T rm = array[idx];
        for (int i = idx; i < length - 1; ++i) {
            array[i] = array[i + 1];
        }
        length--;
        return rm;
    }

    template<typename T>
    void List<T>::traverse(void (*visit)(T)) {
        for (int i = 0; i < length; ++i) {
            visit(array[i]);
        }
    }


}

#endif //LINEARLIST_LIST_H

