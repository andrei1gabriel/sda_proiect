//
// Created by gabim on 28.03.2025.
//

#ifndef CULOAR_H
#define CULOAR_H



class Culoar {
private:
    int id;
    int lungime;
public:
    Culoar();
    Culoar(int id, int lungime);
    int getId() const;
    int getLungime() const ;
    void setLungime(int lungime);
    void setId(int id);
    ~Culoar();
};



#endif //CULOAR_H
