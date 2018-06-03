//
// Created by InnF on 2018/6/1.
//

#ifndef TRIPLET_TRIPLET_H
#define TRIPLET_TRIPLET_H

#include <cassert>

namespace Triplet {

    template<typename T>
    class Triplet {
    public:

        Triplet(T e1, T e2, T e3);

        ~Triplet();

        T get(int idx);

        void put(int idx, T e);

        bool isAscending();

        bool isDescending();

        T max();

        T min();

    private:
        T *triplet;
    };

    template<typename T>
    Triplet<T>::Triplet(T e1, T e2, T e3) {
        triplet = new T[3];
        if (NULL == triplet)
            exit(0);
        triplet[0] = e1;
        triplet[1] = e2;
        triplet[2] = e3;
    }

    template<typename T>
    Triplet<T>::~Triplet() {
        delete[] triplet;
    }

    template<typename T>
    T Triplet<T>::get(int idx) {
        assert(idx >= 0 && idx < 3);
        return triplet[idx];
    }

    template<typename T>
    void Triplet<T>::put(int idx, T e) {
        assert(idx >= 0 && idx < 3);
        triplet[idx] = e;
    }

    template<typename T>
    bool Triplet<T>::isAscending() {
        return triplet[0] <= triplet[1]
               && triplet[1] <= triplet[2];
    }

    template<typename T>
    bool Triplet<T>::isDescending() {
        return triplet[0] >= triplet[1]
               && triplet[1] >= triplet[2];
    }

    template<typename T>
    T Triplet<T>::max() {
        return triplet[0] >= triplet[1]
               ?
               triplet[0] >= triplet[2] ? triplet[0] : triplet[2]
               :
               triplet[1] >= triplet[2] ? triplet[1] : triplet[2];
    }

    template<typename T>
    T Triplet<T>::min() {
        return triplet[0] <= triplet[1]
               ?
               triplet[0] <= triplet[2] ? triplet[0] : triplet[2]
               :
               triplet[1] <= triplet[2] ? triplet[1] : triplet[2];
    }
}
#endif //TRIPLET_TRIPLET_H
