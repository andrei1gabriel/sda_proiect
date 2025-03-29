//
// Created by gabim on 28.03.2025.
//

#ifndef RATA_H
#define RATA_H



class Rata {
private:
    int viteza;
    int rezistenta;
    int dist_parcursa;
public:
    Rata();
    Rata(int viteza, int rezistenta, int dist_parcursa);
    ~Rata();
    int getViteza();
    int getRezistenta();
    int getDistParcursa();
    void setViteza(int viteza);
    void setRezistenta(int rezistenta);
    void setDistParcursa(int dist_parcursa);
};



#endif //RATA_H
