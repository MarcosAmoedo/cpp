/*||Zoolóxico||-------------------------------------------------------------|
  |Realice un programa que constrúa unha solución para a xerarquía(herdanza)|
  |de clases mostrada na seguinte figura____________________________________|
  |_________________________________________________________________________|
  |-------------------------------------------------------------------------|
                            ____________
                            || Animal ||    atrib: -Comer 
                            ------------           -Durmir
                             /          \
                            /            \
                           /              \
                   ---------------         \
                   || Hervívoro ||          \
                   ---------------           \
                          |             ---------------  
                          |             || Carnívoro ||
                          |             ---------------\
                   _______________            |         \
                   ||   Coello  ||            |          \
                   ---------------    -------------------    etc,etc.          
                                      ||      León     ||               
                                      -------------------*/

#include <iostream>
#include <string>

using namespace std;

class Animal 
{
protected:
    string nome;
    int idade;

public:
    Animal(const string& _nome, const int& _idade);
    virtual void come();
    void durme();
};

class Herbivoros : public Animal 
{
public:
    Herbivoros(const string& _nome, const int& _idade);
    virtual void come();
    void durme();
};

class Carnivoros : public Animal 
{
public:
    Carnivoros(const string& _nome, const int& _idade);
    virtual void come();
    void durme();
};

class Omnivoros : public Animal 
{
public:
    Omnivoros(const string& _nome, const int& _idade);
    virtual void come();
    void durme();
};

class Coello : public Herbivoros 
{
public:
    Coello(const string& _nome, const int& _idade);
    virtual void come();
    void durme();
};

class Leon : public Carnivoros 
{
public:
    Leon(const string& _nome, const int& _idade);
    virtual void come();
    void durme();
};

class Hiena : public Carnivoros 
{
public:
    Hiena(const string& _nome, const int& _idade);
    virtual void come();
    void durme();
};

class Home : public Omnivoros 
{
public:
    Home(const string& _nome, const int& _idade);
    virtual void come();
    virtual void durme();
};

Animal::Animal(const string& _nome, const int& _idade) 
{
    nome = _nome;
    idade = _idade;
}

Herbivoros::Herbivoros(const string& _nome, const int& _idade) : Animal(_nome, _idade) 
{
}

Carnivoros::Carnivoros(const string& _nome, const int& _idade) : Animal(_nome, _idade) 
{
}

Omnivoros::Omnivoros(const string& _nome, const int& _idade) : Animal(_nome, _idade) 
{
}

Coello::Coello(const string& _nome, const int& _idade) : Herbivoros(_nome, _idade) 
{
}

Leon::Leon(const string& _nome, const int& _idade) : Carnivoros(_nome, _idade) 
{
}

Hiena::Hiena(const string& _nome, const int& _idade) : Carnivoros(_nome, _idade) 
{
}

Home::Home(const string& _nome, const int& _idade) : Omnivoros(_nome, _idade) 
{
}

void Animal::come() 
{
    cout << nome << " cunha vida máxima estimada de " << idade << " anos come";
}

void Animal::durme() 
{
    cout << nome << " durme";
}

void Herbivoros::come() 
{
    cout << "Os Hervíboros ";
    Animal::come();
    cout << "en vexetáis" << endl;
}

void Herbivoros::durme() 
{
    cout << "Os Hervíboros ";
    Animal::durme();
    cout << "n ao ar libre ou en covas" << endl;
}

void Carnivoros::come() 
{
    cout << "Os Carnívoros ";
    Animal::come();
    cout << "n carne" << endl;
}
void Carnivoros::durme() 
{
    cout << "Os carnivoros ";
    Animal::durme();
    cout << "n ao ar libre, nas madrigueiras e nas covas" << endl;
}
void Omnivoros::come() 
{
    cout << "Os Omnivoros ";
    Animal::come();
    cout << "n vexetáis, carne, \ninsectos e químicos sintéticos como os dos medicamentos" << endl;
}
void Omnivoros::durme() 
{
    cout << "Os Omnivoros ";
    Animal::durme();
    cout << "n ao ar libre, en madrigueiras, en covas, ou en camas" << endl;
}

void Coello::come() 
{
    cout << "O Coello ";
    Animal::come();
    cout << " alfalfa" << endl;
}
void Coello::durme() 
{
    cout << "O Coello ";
    Animal::durme();
    cout << " ao ar libre ou na súa madrigueira" << endl;
}

void Leon::come() 
{
    cout << "O León ";
    Animal::come();
    cout << " cebras" << endl;
}
void Leon::durme() 
{
    cout << "O Leon ";
    Animal::durme();
    cout << " ao ar libre no chan" << endl;
}

void Hiena::come() 
{
    cout << "A Hiena ";
    Animal::come();
    cout << " carroña" << endl;
}
void Hiena::durme() 
{
    cout << "A Hiena" ;
    Animal::durme();
    cout << " ao ar libre, no chan e entre herbas" << endl;
}

void Home::come() 
{
    cout << "O Home ";
    Animal::come();
    cout << " aguachile" << endl;
}
void Home::durme() 
{
    cout << "A Home ";
    Animal::durme();
    cout << " na cama, nunha tenda de campaña ou por onde lle dé" << endl;
}

int main() {
    string nome;
    int idade = 0, opc = 0, opc1 = 0;

    setlocale(LC_ALL, "spanish");

    cout << "|______________________________________________________________________________________________|" << endl;
    cout << "|------------------------------------|      Zoolóxico     |------------------------------------|" << endl;
    cout << "|==============================================================================================|" << endl;
    cout << "\n" << endl;
    cout << "Por favor escolla de qué Animal ou de qué tipo de Animal quere saber as características:" << endl;
    cout << "A continuación mostrarémoslle o Menú->" << endl;
    cout << "|______________________________________________________________________________________________|\n" << endl;

    do {
        cout << "\n\tDixite a opción que desexe:\n" << endl;
        cout << "\t1.-> Herbívoros" << endl;
        cout << "\t2.-> Carnívoros" << endl;
        cout << "\t3.-> Omnívoros" << endl;
        cin >> opc;
        cout << "|________________________________________________________________________________________________|\n" << endl;

        switch (opc) {
            case 1: {
                do {
                    cout << "\n\tDixite a opción que desexe:\n" << endl;
                    cout << "\t1.-> Un Herbívoro calquer" << endl;
                    cout << "\t2.-> Un Coello" << endl;
                    cin >> opc1;
                    cout << "|______________________________________________________________________________________|\n" << endl;

                    switch (opc1) {
                        case 1: {
                            Herbivoros H1("Animal herbívoro", 0);
                            H1.come();
                            H1.durme();
                            break;
                        }
                        case 2: {
                            Coello C1("Xigante de Flandes", 12);
                            C1.come();
                            C1.durme();
                            
                            Coello C2("Belier", 11);
                            C2.come();
                            C2.durme();
                            
                            Coello C3("Branco de Hotot", 10);
                            C3.come();
                            C3.durme();
                            
                            break;
                        }
                        default: {
                            cout << "Opción inválida" << endl;
                            break;
                        }
                    }
                } while (opc1 != 1 && opc1 != 2); return main();
                break;
            }
            case 2: {
                do {
                    cout << "\n\tDixite a opción que desexe:\n" << endl;
                    cout << "\t1.-> Un Carnívoro calquer" << endl;
                    cout << "\t2.-> Un León" << endl;
                    cout << "\t3.-> Unha Hiena" << endl;
                    cin >> opc1;
                    cout << "|____________________________________________________________________________________________|\n" << endl;

                    switch (opc1) {
                        case 1: {
                            Carnivoros C1("Animal carnívoro", 0);
                            C1.come();
                            C1.durme();
                            break;
                        }
                        case 2: {
                            Leon L1("Kataga", 15);
                            L1.come();
                            L1.durme();
                            
                            Leon L2("Transvaal", 14);
                            L2.come();
                            L2.durme();
                            
                            Leon L3("Asiático", 16);
                            L3.come();
                            L3.durme();
                            
                            break;
                        }
                        case 3: {
                            Hiena H1("Listrada", 15);
                            H1.come();
                            H1.durme();
                            
                            Hiena H2("Marrón", 20);
                            H2.come();
                            H2.durme();
                            
                            Hiena H3("Manchada", 25);
                            H3.come();
                            H3.durme();
                            
                            break;
                        }
                        default: {
                            cout << "Opción inválida" << endl;
                            break;
                        }
                    }
                } while (opc1 != 1 && opc1 != 2 && opc1 != 3);return main();
                break;
            }
            case 3: {
                do {
                    cout << "\n\tDixite a opción que desexe:\n" << endl;
                    cout << "\t1.-> Un Omnívoro calquer" << endl;
                    cout << "\t2.-> Un Home" << endl;
                    cin >> opc1;
                    cout << "|__________________________________________________________________________________________|\n" << endl;

                    switch (opc1) {
                        case 1: {
                            Omnivoros O1("Animal omnívoro", 0);
                            O1.come();
                            O1.durme();
                            break;
                        }
                        case 2: {
                            Home H1("Homo Sapiens Sapiens", 100);
                            H1.come();
                            H1.durme();
                            
                            Home H2("Homo Erectus", 50);
                            H2.come();
                            H2.durme();
                            
                            Home H3("Homo Cromagnon", 60);
                            H3.come();
                            H3.durme();
                            break;
                        }
                        default: {
                            cout << "Opción inválida" << endl;
                            break;
                        }
                    }
                } while (opc1 != 1 && opc1 != 2);return main();
                break;
            }
            default: {
                cout << "Opción inválida" << endl;
                break;
            }
        }
    } while (opc != 1 && opc != 2 && opc != 3);

    return 0;
}