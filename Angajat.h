class Angajat{
    char*nume;
    char CNP[13];
    int salariu;
    bool fem;
public:
    Angajat();

    Angajat(char*,char[], int, bool);
    Angajat(const Angajat&);


    ~ Angajat();
    void afisare() const;
    void modificare(const Angajat&);
    int getSalariu() const;
    bool eFemeie() const;
};