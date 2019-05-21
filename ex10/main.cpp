#include <iostream>
using namespace std;
#include "circle.h"
#include "rect.h"
#include "shape.h"

int main(void) {
    CCircle Cir(1, 1, 1);
    CRect Rect(2, 2, 2, 2);
    CShape *pSpe;

    pSpe = &Cir;
    cout << *pSpe;

    pSpe = &Rect;
    cout << *pSpe;

    return 0;
}