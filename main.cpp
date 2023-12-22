#include <iostream>
using namespace std;
int a;
class samochod{
private:
    string marka;
    string model;
    double pojemnosc_silnika;
    string rodzaj_paliwa;
    int szybko;
public:
    samochod(const string &marka, const string &model, double pojemnoscSilnika, const string &rodzajPaliwa, int szybko);

    void create();
    void show();
    void predkosc(){
        cin>>a;
        if (a<210 && a>0) szybko=a;
    };
};
//samochod git;
void samochod::create(){
    cout<<"Marka"<<endl;
    cin>>marka;
    cout<<"model"<<endl;
    cin>>model;
    cout<<"pojemnosc silnika"<<endl;
    cin>>pojemnosc_silnika;
    cout<<"rodzaj paliwa"<<endl;
    cin>>rodzaj_paliwa;
    cout<<"szybko"<<endl;
    cin>>szybko;
}

void samochod::show(){
    cout<<marka<<" ";
    cout<<model<<" ";
    cout<<pojemnosc_silnika<<endl;
    cout<<rodzaj_paliwa<<endl;
    cout<<szybko<<endl;
}

samochod::samochod(const string &marka, const string &model, double pojemnoscSilnika, const string &rodzajPaliwa,
                   int szybko) : marka(marka), model(model), pojemnosc_silnika(pojemnoscSilnika),
                                 rodzaj_paliwa(rodzajPaliwa), szybko(szybko) {}

int main() {
    int a=1;
    string b;
    //git.create();
    //git.show();
    samochod Skoda("Skoda", "Karoq", 1.5, "benzyna", 0);
    samochod Citroen("Citroen", "C4", 2.0, "diesel", 0);
    while (a!=0)
    {
        cout<<"Wybierz auto: "<<endl;
        Skoda.show();
        Citroen.show();
        cin>>b;
        if (b=="Skoda")
        {
            cout<<"Mozesz zmienic predkosc"<<endl;
            Skoda.predkosc();
        }
        if (b=="Citroen")
        {
            cout<<"Mozesz zmienic predkosc"<<endl;
            Citroen.predkosc();
        }
    }
    return 0;
}


//Utwórz metody w klasie Car pozwalające na zwiększanie i zmniejszanie prędkości
//Utwórz dwa obiekty klasy Car, Skodę i Citroena
//Program powinien pozwolić użytkownikowi przy użīciu terminala na wybór jakiegoś samochodu
// i zwiększenie lub zmniejszenie jego prędkości oraz wydrukować prędkość danego samochodu po zmianie jej wartości