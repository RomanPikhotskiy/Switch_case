#pragma once 
#include <iostream>
#include "Fraction.h"

class Quadratic_eq{
private:
    Fraction _a;
    Fraction _b;
    Fraction _c;
    Fraction _discriminant;
    Fraction x1;
public:
    Quadratic_eq(Fraction a, Fraction b, Fraction c){
        _a = a ;
        _b = b ;
        _c = c ;
    }

    Fraction find_dis(Quadratic_eq qua_eq){
        auto a = 4 * qua_eq._a * qua_eq._c;
        qua_eq._discriminant = (qua_eq._b * qua_eq._b) - (qua_eq._a * qua_eq._c * 4);
    }

    Fraciton roots(const Quadratic_eq& qua_eq){
        if (find_dis(qua_eq) > 0){

        }
    }

    inline Fraction getA() const {return _a;}
    inline Fraction getB() const {return _b;}
    inline Fraction getC() const {return _c;}
 
    void setA(Fraction A){ _a = A;}
    void setB(Fraction B){ _b = B;}
    void setC(Fraction C){ _c = C;}

    friend std::istream& operator >> (std::istream& in, Quadratic_eq& qua_eq)
    {
        double a;
        double b;
        double c;
        in >> a >> b >> c;
        qua_eq.setA(a);
        qua_eq.setB(b);
        qua_eq.setC(c);
        return in;
    }
};
