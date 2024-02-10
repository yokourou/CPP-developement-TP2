#ifndef _NUAGE_HPP__
#define _NUAGE_HPP__

#include <vector>
#include "point.hpp"
#include "cartesien.hpp"
#include "polaire.hpp"


using namespace std;




template <typename T, typename C = vector<T>>
class Nuage {
    public :
        using value_type = typename vector<T>::value_type;
    public:
        // attributs --------------
        C nuage_points;
        // iterateurs 
        using const_iterator = typename C::const_iterator; 

        const_iterator begin();
        const_iterator end(); 
        // methodes  --------------
        Nuage();
        ~Nuage();
        void ajouter(T);
        size_t size();
} ;

template <typename T, typename C> 
T barycentre_v1(Nuage<T, C> n);

template <typename Conteneur> 
typename Conteneur::value_type barycentre_v2(Conteneur & c);

template <typename T, typename C >
Nuage<T, C>::Nuage(){} 


template <typename T, typename C >
Nuage<T, C>::~Nuage(){} 

template <typename T, typename C >
size_t Nuage<T, C>::size(){
    return nuage_points.size() ; 
} 

template <typename T, typename C >
void Nuage<T, C>::ajouter(T p){ 
    nuage_points.push_back(p);
} 

template <typename T, typename C >
typename Nuage<T, C>::const_iterator Nuage<T, C>::begin(){
    return nuage_points.begin();
} 

template <typename T, typename C >
typename Nuage<T, C>::const_iterator Nuage<T, C>::end(){
    return nuage_points.end();
} 


template <typename T, typename C>
T barycentre_v1(Nuage<T, C> n){
    Cartesien resultat;
    
    double x = 0.0;
    double y = 0.0;

    int nb = 0;

    for (T  p : n ){
        (p).convertir(resultat);

        x+=resultat.getX();
        y+=resultat.getY();
        ++nb;
    } 
    if (nb == 0) return Cartesien(0.0, 0.0);
    else return Cartesien(x/nb, y/nb);
} 
// valeuètype prend le type du conteneur
// on fait un typename quand on accede au conteneur 
template <typename Conteneur>
typename Conteneur::value_type barycentre_v2(Conteneur & c){
    Cartesien resultat;
    double x = 0.0;
    double y = 0.0;

    int nb = 0;

    using point_ = typename Conteneur::value_type ;

    for (const point_ & p : c){
        p.convertir(resultat);
        x+= resultat.getX();
        y+= resultat.getY();
        ++nb;
    } 
    if (nb == 0) return point_(0.0, 0.0);
    else return point_(x/nb, y/nb);
} 


/*
class BarycentreCartesien{
    public : 
        Cartesien operator()(Nuage & n){ return barycentre(n);} 
};

class BarycentrePolaire
{
    public : 
        Polaire operator()(Nuage & n){ 
            Polaire p;
            barycentre(n).convertir(p);
            return p;
        } 
};

*/
#endif