//
// Created by gabim on 28.03.2025.
//

#include "Culoar.h"

Culoar::Culoar() {
    this->id = 0;
    this->lungime = 0;
}

Culoar::Culoar(int id, int lungime) {
    this->id = id;
    this->lungime = lungime;
}

int Culoar::getId() const {
    return this->id;
}

int Culoar::getLungime() const {
    return this->lungime;
}
void Culoar::setLungime(int lungime)  {
    this->lungime = lungime;
}
void Culoar::setId(int id) {
    this->id = id;
}

Culoar::~Culoar() {
}
