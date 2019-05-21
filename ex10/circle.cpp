#include "circle.h"

CCircle::CCircle(int a, int b, double r) : CShape(a, b), Radius(r) {}
double CCircle::GetArea() {
    return (3.14 * Radius * Radius);
}
void CCircle::Print() {
    cout << GetArea() << endl;
}