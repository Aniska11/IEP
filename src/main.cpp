#include <iostream>

using namespace std;

class Uncopyable {
protected:
    Uncopyable() {}
    ~Uncopyable() {}
private:
    Uncopyable(const Uncopyable&); //item 6
    Uncopyable& operator=(const Uncopyable&); //item 6
};

class Carte: private Uncopyable{
private:
    string nume, autor;
    int dataPub, pagini;
public:
    string getNume();
    string getAutor();
    int getDataPub();
    int getPag();
    
    void print();
    
    //Carte(){};  //item 5
    Carte(string, string, int, int);
};

Carte::Carte(string n, string a, int an, int p): nume(n), autor(a), dataPub(an), pagini(p){} //item 4

void Carte::print(){
    cout << "Cartea " << nume 
         << " scrisa de " << autor 
         << " in anul " << dataPub 
         << " are " << pagini 
         << " pagini." << endl;
}

string Carte::getNume(){return nume;}

string Carte::getAutor(){return autor;}

int Carte::getDataPub(){return dataPub;}

int Carte::getPag(){return pagini;}


int main(){
    Carte c1("Minunata lume noua", "Aldous Huxley", 1932, 311);           //item 4
    Carte c2("De veghe in lanul de secara", "J. D. Salinger", 1951, 277); //item 4
    Carte c3("1984", "George Orwell", 1949, 328);                         //item 4
    Carte c4("Noi", "Evgheni Zamiatin", 1924, 210);                       //item 4
    
    c1.print();
    c2.print();
    c3.print();
    c4.print();
    
    // Carte c5(c3);       //eroare -> item 6
    // Carte c5 = c3;      //eroare -> item 6
    
    return 0;
}
