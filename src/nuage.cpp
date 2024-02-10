#include "nuage.hpp"
/* 
using namespace std;

Nuage::Nuage(){}
Nuage::~Nuage(){}

size_t Nuage::size(){
    return nuage_points.size() ; 
} 

void Nuage::ajouter(Point & p){ 
    nuage_points.push_back(&p);
} 

Nuage::const_iterator Nuage::begin(){
    return nuage_points.begin();
} 

Nuage::const_iterator Nuage::end(){
    return nuage_points.end();
} 

Cartesien barycentre(Nuage & n){
    Cartesien resultat;
    
    double x = 0.0;
    double y = 0.0;

    int nb = 0;

    for (Point * p : n ){
        (p)->convertir(resultat);

        x+=resultat.getX();
        y+=resultat.getY();
        ++nb;
    } 
    return Cartesien(x/nb, y/nb);
} 
*/