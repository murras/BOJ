#ifndef CSHAPE_H
#define CSHAPE_H
#include <iostream>
using namespace std;
class CShape {
   protected:
    int x, y;

   public:
    CShape(int a, int b) : x(a), y(b) {}

    void Move(int a, int b) {
        x += a;
        y += b;
    }

    virtual void Print(){
        cout << "not defined" << endl;
    };
    friend ostream& operator<<(ostream& os, const CShape* cs);
};

ostream& operator<<(ostream& os, CShape& cs) {
    cs.Print();
    return os;
}
#endif