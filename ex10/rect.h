#ifndef RECT_H
#define RECT_H
#include "shape.h"

class CRect : public CShape {
   private:
    int Garo, Sero;

   public:
    CRect(int a, int b, int g, int s) : CShape(a, b), Garo(g), Sero(s) {}
    double GetArea() { return (Garo * Sero); }
    void Print();
};
#endif