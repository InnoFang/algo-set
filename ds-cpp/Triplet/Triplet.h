//
// Created by InnF on 2018/6/1.
//

#ifndef TRIPLET_TRIPLET_H
#define TRIPLET_TRIPLET_H

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

}

#endif //TRIPLET_TRIPLET_H
