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
        T *elemSet;
    };

    template<typename T>
    Triplet<T>::Triplet(T e1, T e2, T e3) {
        this->elemSet = new T[3];
        this->elemSet[0] = e1;
        this->elemSet[1] = e2;
        this->elemSet[2] = e3;
    }

    template<typename T>
    Triplet<T>::~Triplet() {
        delete[] elemSet;
    }

    template<typename T>
    T Triplet<T>::get(int idx) {
        assert(idx >= 0 && idx < 3);
        return this->elemSet[idx];
    }

    template<typename T>
    void Triplet<T>::put(int idx, T e) {
        assert(idx >= 0 && idx < 3);
        this->elemSet[idx] = e;
    }

    template<typename T>
    bool Triplet<T>::isAscending() {
        for (int i = 1; i < 3; ++i) {
            if (this->elemSet[i - 1] > this->elemSet[i]) {
                return false;
            }
        }
        return true;
    }

    template<typename T>
    bool Triplet<T>::isDescending() {
        for (int i = 1; i < 3; ++i) {
            if (this->elemSet[i - 1] < this->elemSet[i]) {
                return false;
            }
        }
        return true;
    }

    template<typename T>
    T Triplet<T>::max() {
        T max = this->elemSet[0];
        for (int i = 1; i < 3; ++i) {
            if (this->elemSet[i] > max) {
                max = this->elemSet[i];
            }
        }
        return max;
    }

    template<typename T>
    T Triplet<T>::min() {
        T min = this->elemSet[0];
        for (int i = 1; i < 3; ++i) {
            if (this->elemSet[i] < min) {
                min = this->elemSet[i];
            }
        }
        return min;
    }
}
#endif //TRIPLET_TRIPLET_H
