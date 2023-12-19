#include <iostream>
using namespace std;
class samochod{
public:
    string marka;
    string model;
    double pojemnosc_silnika;
    string rodzaj_paliwa;
    void create();
    void show();
};
samochod git;
void samochod::create(){
    cout<<"Marka"<<endl;
    cin>>git.marka;
    cout<<"model"<<endl;
    cin>>git.model;
    cout<<"pojemnosc silnika"<<endl;
    cin>>git.pojemnosc_silnika;
    cout<<"rodzaj paliwa"<<endl;
    cin>>git.rodzaj_paliwa;
}

void samochod::show(){
    cout<<git.marka<<endl;
    cout<<git.model<<endl;
    cout<<git.pojemnosc_silnika<<endl;
    cout<<git.rodzaj_paliwa<<endl;
}
int main() {

    git.create();
    git.show();
    return 0;
}


//marka, model, pojemność silnika, rodzaj paliwa oraz metody:
// a. create() – która zapyta użytkownika o wszystkie dane pojazdu
// b. show() – która wyświetli wszystkie te informacje.
// W funkcji main powinniśmy jedynie tworzyć obiekt klasy samochód
// i wywoływać obie metody.