#include "cartesien.hpp"
#include "polaire.hpp"
#include <cmath>


using namespace std;
Polaire::Polaire(const Cartesien & c){
    c.convertir(*this);
} 
Polaire::Polaire(const Polaire & p){ p.convertir(*this);}  
Polaire::Polaire(double a, double d): angle(a), distance(d) {} 
Polaire::~Polaire(){} 
double Polaire::getAngle()const {return angle;} 
double Polaire::getDistance()const {return distance;} 
void Polaire::afficher(stringstream &flux)const  {flux << "(a="<< angle << ";" << "d=" << distance <<")";} 

void Polaire::setDistance(double n_d){distance = n_d;} 
void Polaire::setAngle(double n_a){angle = n_a;} 

stringstream & operator<<(stringstream & flux, const Polaire & p){
    flux << "(a="<< p.getAngle() << ";" << "d=" << p.getDistance() <<")";
    return flux;
}  


void Polaire::convertir( Polaire & p)const{
    p.setAngle(getAngle());
    p.setDistance(getDistance());
} 

void Polaire::convertir( Cartesien & c)const{
    c.setX(getDistance() * cos(getAngle() * M_PI / 180));
    c.setY(getDistance() * sin(getAngle() * M_PI / 180));
}

