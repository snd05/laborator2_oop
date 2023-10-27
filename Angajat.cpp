#include <iostream>
#include "Angajat.h"
#include <string.h>

using namespace std;

Angajat::Angajat() {
    this->nume= nullptr;
}

Angajat::Angajat(char *nume_angj, char cod_numeric[], int sal, bool fem) {

    this->nume = new char[strlen(nume_angj) + 1];
    for (int i = 0; i < strlen(nume_angj); i++) {
        this->nume[i] = nume_angj[i];
    }

    if (strlen(cod_numeric) == 13) {
        for (int i = 0; i < 13; i++){
            this->CNP[i] = cod_numeric[i];
        }

    }
    else {
        cout << "Numarul de cifre al CNP-ului este invalid." << "\n";
    }
    this->salariu = sal;
    this->fem=fem;
}

Angajat::Angajat(const Angajat &a) {
    if(this->nume!=NULL){
        delete[] this->nume;}
    this->nume = new char[strlen(a.nume)+1];
    for(int i=0;i<strlen(a.nume);i++){
        this->nume=a.nume;
    }

    for(int i=0;i<13;i++){
        this->CNP[i]=a.CNP[i];
    }

    this->salariu = a.salariu;
    this->fem=a.fem;
}

void Angajat::afisare() const {

    for(int i=0;i<strlen(nume);i++){
        cout<<nume[i];
    }

    cout<<" ";

    for(int i=0;i<13;i++){
        cout<<CNP[i];}

    cout<<" ";

    cout<<salariu;

    cout<<" ";

    if(fem==0){
        cout<<"Barbat";
    }
    else{
        cout<<"Femeie";
    }
}

Angajat::~Angajat(){
    delete[] nume;
}

void Angajat::modificare(const Angajat &b) {
    if(this->nume!=NULL){
        delete[] this->nume;
    }

    for(int i=0;i<strlen(nume);i++){
        this->nume=b.nume;
    }

    for(int i=0;i<13;i++){
        this->CNP[i]=b.CNP[i];
    }

    this->salariu=b.salariu;

    this->fem=b.fem;
}

int Angajat::getSalariu() const {
    return this->salariu;
}

bool Angajat::eFemeie() const {
    bool fem;
    cin>>fem;
    if(fem==1){
        cout<<"Femeie";
    }
    else{
        cout<<"Barbat";
    }
}