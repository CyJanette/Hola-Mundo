#include <iostream>
#include <Alimento.hpp>
#include <Mascota.hpp>
#include <Dibujo.hpp>
using namespace std;
int main(int argc, char const *argv[])
{
    Dibujo dibujo("./assets/kokoa.txt");
    dibujo.Dibujar();

    Mascota m1;
    Mascota m2;
    Mascota m3;

    Alimento alimento(5);

    m1.Comer(alimento);
    m2.Comer(alimento);
    m3.Comer(alimento);

    cout<<"Mascota"<<m1.LeerEnergia()<<endl;
    return 0;
}
