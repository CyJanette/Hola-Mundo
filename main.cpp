#include <iostream>
#include <Alimento.hpp>
#include <Mascota.hpp>
#include <Dibujo.hpp>
#include<list>
using namespace std;
int main(int argc, char const *argv[])
{
    Dibujo dibujo1("./assets/kokoa.txt");
    dibujo1.Dibujar();

    Dibujo dibujo2("./assets/kokoa.txt");
    dibujo2.Dibujar();
    list<Dibujo> dibujos;

    //dibujos.push_front(dibujo1);
   // dibujos.push_front(dibujo2);

    Mascota m1;
    Mascota m2;
    Mascota m3;

    Alimento alimento(5);

    list<Mascota>mascotas;
    mascotas.push_front(m1);
    mascotas.push_front(m2);
    mascotas.push_front(m3);

    for (auto &&mA : mascotas)
    {
        mA.Comer(alimento);
    }


    for (auto &&mascotaActual : mascotas)
    {
        cout<<"Mascota"<<mascotaActual.LeerEnergia()<<endl;
    }
    

    
    return 0;
}
