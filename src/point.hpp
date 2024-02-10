#ifndef _POINT_HPP__
#define _POINT_HPP__
#include <iostream>
#include <sstream>
#include <cmath>



class Polaire;
class Cartesien;


using namespace std;

class Point{
    
    public :         
        virtual void afficher(stringstream&) const  = 0;
        virtual void convertir( Polaire &) const= 0;
        virtual void convertir( Cartesien &) const= 0;
};
stringstream & operator<<(stringstream & , const Point &);

#endif