
#include <cmath>
#include "cartesien.hpp"
#include "polaire.hpp"





using namespace std;
Cartesien::Cartesien(const Polaire & p){
    p.convertir(*this);
} 
Cartesien::Cartesien(const Cartesien & c){ c.convertir(*this);} 
Cartesien::Cartesien(double a, double d): x(a), y(d) {} 
Cartesien::~Cartesien(){} 
double Cartesien::getX()const {return x;} 
double Cartesien::getY()const {return y;} 
void Cartesien::afficher(stringstream& flux)const{flux << "(x="<< x << ";" << "y=" << y <<")";} 

void Cartesien::setX(double n_x){x = n_x;}
void Cartesien::setY(double n_y){y = n_y;}  

stringstream & operator<<(stringstream & flux, const Cartesien & c){
    flux << "(x="<< c.getX() << ";" << "y=" << c.getY() <<")";
    return flux;
} 

void Cartesien::convertir(Polaire & p)const{
    p.setAngle(atan2(getY(), getX()) * 180 / M_PI);
    p.setDistance(hypot(getX(), getY()));
} 

void Cartesien::convertir(Cartesien & c)const {
    c.setX(getX());
    c.setY(getY());
}