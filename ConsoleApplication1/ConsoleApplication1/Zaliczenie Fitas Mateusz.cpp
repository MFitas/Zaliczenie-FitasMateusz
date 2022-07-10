

#include <iostream>
#include <vector>
#include"Figura.h"
using namespace std;
Figura::Figura() {
    nazwa = "Kwadrat";
    wysokosc = 10;
    szerokosc = 10;
    kolor = "czarny";
}
Figura::Figura(string a, float b, float c, string d) {
    nazwa = a;
    wysokosc = b;
    szerokosc = c;
    kolor = d;
}
Figura::Figura(float a, string b) {
    wysokosc = a;
    szerokosc = a;
    nazwa = "kwadrat";
    kolor = b;
}
Figura::Figura(float a) {
    szerokosc = a;
    wysokosc = a;
    kolor = "czarny";
    nazwa = "kwadrat";
}
float Figura::oblicz_Pole() {
    float wynik;
    if (nazwa == "trojkat")
    {
        wynik = (szerokosc * wysokosc) / 2;
    }
    else
    {
        wynik = szerokosc * wysokosc;
    }
    return wynik;
}
bool Figura::operator==(Figura& arg) {
    if (wysokosc == arg.wysokosc && szerokosc == arg.szerokosc && kolor == arg.kolor)
    {
        return true;
    }
    else
    {
        return false;
    }
}
    void Figura:: pisz_Dane() {
        cout << "Nazwa: " << nazwa << endl;
        cout << "wysokosc: " << wysokosc << endl;
        cout << "szerokosc: " << szerokosc << endl;
        cout << "kolor: " << kolor << endl;
    }
    ostream& operator<<(ostream& wyj, Figura& a) {
        cout << "Nazwa: " << a.nazwa << endl;
        cout << "wysokosc: " << a.wysokosc << endl;
        cout << "szerokosc: " << a.szerokosc << endl;
        cout << "kolor: " << a.kolor << endl;
        return wyj;

    }
   Figura Figura::operator=(Figura& cos) {
       Figura Ta;
        Ta.nazwa = cos.nazwa;
        Ta.wysokosc = cos.wysokosc;
        Ta.szerokosc = cos.szerokosc;
        Ta.kolor = cos.kolor;
        cout << "operator";
        return Ta;
        
    }


int main()
{
    Figura p2(20.5, "Zielony");
    cout << "Pole prostokata p2 jest rowne: " << p2.oblicz_Pole() << endl;
    Figura k1("prostokat", 10, 20, "czerwony");
    Figura t1("trojkat", 13.5, 11.7, "czerwony");
    k1.pisz_Dane();
    Figura p3 = p2;
    cout <<endl << p3<< endl;
    Figura t3(12);
    cout << "Pole figury k1 jest rowne: " << t1.oblicz_Pole() << endl;
    cout << "Pole figury t1 jest rowne: " << t3.oblicz_Pole()<<endl;
    cout << t3 << endl;

    vector<Figura> geometria;
    
    for (int i = 0; i < 20; i++)
    {
        Figura testowa("prostokat", i + 4, (i + 4) * 5, "zielony");
        geometria.push_back(testowa);

    }
    for (int i = 0; i < geometria.size(); i++)
    {
        cout << geometria[i].oblicz_Pole() << endl;
    }
    
 //https://github.com/MFitas/Zaliczenie-FitasMateusz   
}

