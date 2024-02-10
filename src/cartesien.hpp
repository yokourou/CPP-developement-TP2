#ifndef _CARTESIEN_HPP__
#define _CARTESIEN_HPP__ 

#include "point.hpp"
#include <iostream>
#include <sstream>


using namespace std;

class Cartesien: public Point{
    protected :
        double x;
        double y;
    public : 
        Cartesien(const Polaire &);
        Cartesien(const Cartesien &);
        Cartesien(double x = 0.0, double y=0.0);
        ~Cartesien();
        double getX()const;
        double getY()const;
        void setX(double);
        void setY(double); 
        void afficher(stringstream&)const ;   
        void convertir( Polaire &)const;
        void convertir( Cartesien &) const; 
} ;

stringstream & operator<<(stringstream & , const Cartesien &);

#endif


