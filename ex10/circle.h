#ifndef CCIRCLE_H
#define CCIRCLE_H
#include "shape.h"

class CCircle : public CShape {
   private:
    double Radius;

   public:
    CCircle(int a, int b, double r) : CShape(a, b), Radius(r) {}
    double GetArea();
    void Print();
};
#endif