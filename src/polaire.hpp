#ifndef _POLAIRE_HPP__
#define _POLAIRE_HPP__

#include <iostream>
#include <sstream>
#include <ostream> 
#include "point.hpp"


using namespace std;

class Polaire: public Point{ 
    protected :
        double angle;
        double distance;
    public : 
        Polaire(const Cartesien &);
        Polaire(const Polaire &);
        Polaire(double a = 0.0, double d=0.0);
        ~Polaire();
        double getAngle()const ;
        double getDistance()const;
        void setDistance(double);
        void setAngle(double);
        void afficher(stringstream&)const ;
        void convertir( Polaire &)const ;
        void convertir( Cartesien &)const ;
} ;

stringstream & operator<<(stringstream  &, const Polaire &);
#endif