//
// Created by gabim on 28.03.2025.
//

#include "Rata.h"

Rata::Rata() {
    this->viteza = 0;
    this->rezistenta = 0;
    this->dist_parcursa = 0;

}

Rata::Rata(int viteza, int rezistenta, int dist_parcursa) {
    this->viteza = viteza;
    this->rezistenta = rezistenta;
    this->dist_parcursa = dist_parcursa;
}

Rata::~Rata() {

}

int Rata::getViteza() {
    return this->viteza;
}

int Rata::getRezistenta() {
    return this->rezistenta;
}

int Rata::getDistParcursa() {
    return this->dist_parcursa;
}

void Rata::setViteza(int viteza) {
    this->viteza = viteza;
}

void Rata::setRezistenta(int rezistenta) {
    this->rezistenta = rezistenta;
}

void Rata::setDistParcursa(int dist_parcursa) {
    this->dist_parcursa = dist_parcursa;
}
