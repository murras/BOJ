#include <iostream>
#include <cstring>
using namespace std;
#define NMEM 5

class CCustomer {
   private:
    char *names;
    int id;
    int dob;

   public:
    CCustomer(){};
    CCustomer(const char *);
    CCustomer(const char *, int, int);
    ~CCustomer();
    void SetName(char *);
    void SetID(int);
    void SetDOB(int);
    void Print();
};
CCustomer::CCustomer(const char *name) {
    cout << strlen(name);
    this->names = (char *)name;
    this->id = -1;
    this->dob = -1;
}
CCustomer::CCustomer(const char *name, int id, int dob) {
    this->names = (char *)name;
    this->id = id;
    this->dob = dob;
}
CCustomer::~CCustomer() {
    cout << this->names << " deleted!\n";
}
void CCustomer::SetName(char *name) {
    this->names = name;
}
void CCustomer::SetID(int id) {
    this->id = id;
}
void CCustomer::SetDOB(int dob) {
    this->dob = dob;
}
void CCustomer::Print() {
    cout << "Name : " << this->names << '\n';
    cout << "ID : ";
    if (id != -1) cout << this->id;
    cout << "\n DOB : ";
    if (id != -1) cout << this->dob;
    cout << "\n";
}
int main() {
    char names[NMEM][10] = {"Liz", "Bob", "Charles", "David", "Amy"};
    int DOBs[NMEM] = {880101, 890101, 910101, 920103, 880102};

    CCustomer m1("Kim Yeon-Suk");
    CCustomer m2("Max", 1, 931208);
    CCustomer memlist[NMEM];

    m1.Print();
    m2.Print();
    for (int i = 0; i < NMEM; i++) {
        memlist[i].SetName(names[i]);
        memlist[i].SetID(i + 2);
        memlist[i].SetDOB(DOBs[i]);
        memlist[i].Print();
    }
}
