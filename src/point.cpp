#include "point.hpp" 
using namespace std;

//void Point::afficher(stringstream&){} 





/* 
void Point::operator=(const Point & n_p){
    setX(convertir(n_p).getX());
    setY(convertir(n_p).getY());
}  */


stringstream & operator<<(stringstream & flux, const Point & p){
    p.afficher(flux);
    return flux;
} 


