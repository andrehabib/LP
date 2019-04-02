# include "carro.h"
# include <iostream>

using namespace std ;

int main ( int argc, char const * argv []){



Carro meuCarro ("Fusca", 1976, 40, 7);

meuCarro.mover(5.0);

meuCarro.abastecer(35.0);

cout << " Temos agora " << meuCarro.getQuantidadeCombustivel() << " litros . " << endl;
cout << " Autonomia atual de " << meuCarro.getAutonomia() << " km . " << endl;

meuCarro.mover(127.6);

meuCarro.mover(3.2);

cout << " Ja percorremos " << meuCarro.getDistanciaPercorrida() << " km " << endl;

cout << " Ainda temos " << meuCarro.getQuantidadeCombustivel() << " litros . " << endl;
cout << " Autonomia atual de " << meuCarro.getAutonomia() << " km . " << endl;

return 0;

}