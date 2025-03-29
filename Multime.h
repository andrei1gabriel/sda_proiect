
#ifndef MULTIMEORDONATA_MULTIME_H
#define MULTIMEORDONATA_MULTIME_H


template<class T>
using Comparator = bool (*)(const T&, const T&);  //pointer la functie

template<class T>
class Multime {
private:
    T* elems;
    int capacitate;
    int noElems;

    Comparator<T> cmp;  // folosește aliasul de tip

    void resize();
    int search(const T& e) const;

public:
    Multime(Comparator<T> cmpFunc);
    ~Multime();

    void add(const T& e);
    int remove(const T& e);
    bool ifExist(const T& e) const;
    int size() const;
    T getElem(int poz) const;
};

#include "Multime.tpp"

#endif //MULTIMEORDONATA_MULTIME_H
