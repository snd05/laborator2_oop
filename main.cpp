#include <iostream>
#include "Angajat.h"
#include <string.h>
using namespace std;


int main() {
    char nume[]="Teodorescu_Alex";
    char v[]="5020405100180";
    int salariu=1200;
    Angajat   a(nume,v, salariu,1);
    Angajat b(a),c;
    a.afisare();
    cout<<"\n";
    return 0;
}
