//
// Created by InnF on 2018/6/1.
//

#ifndef TRIPLET_TRIPLET_H
#define TRIPLET_TRIPLET_H

template <typename T>
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
    T elemSet[3];
};


#endif //TRIPLET_TRIPLET_H
