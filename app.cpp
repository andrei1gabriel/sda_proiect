#include "Culoar.h"
#include "Rata.h"
#include "Multime.h"
#include <iostream>
using namespace std;
struct Pereche {
    Rata r;
    Culoar c;
};
bool cmp_lung(const Culoar &a,const Culoar &b) {
    return a.getLungime()<b.getLungime();
}

//bool (*cmp)(const Culoar &a, const Culoar &b) = cmp_lung;
void app() {
    Comparator<Culoar> c=cmp_lung;
    Multime<Culoar> culoare(c);
    Culoar c1(1,2);
    Culoar c2(2,4);
    Culoar c3(3,3);
    culoare.add(c1);
    culoare.add(c2);
    culoare.add(c3);
    for(int i=0;i<culoare.size();i++) {
        cout<<culoare.getElem(i).getId()<<' '<<culoare.getElem(i).getLungime()<<endl;
    }
}