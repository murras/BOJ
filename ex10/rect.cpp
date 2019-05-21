#include "rect.h"

CRect::CRect(int a, int b, int g, int s) : CShape(a, b), Garo(g), Sero(s) {}
double CRect::GetArea(){
    return (Garo * Sero);
}
void CRect::Print(){
    cout << GetArea() << endl;
}