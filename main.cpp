#include <iostream>
using namespace std;

class Localizacao {
public:
    void localizar() {
        cout << "robo localizado" << endl;
    }
};

class Posicao {
public:
    void setPosicao(int x, int y, int z) {
        cout << "ajustando posicao para x: " << x << ", y: " << y << ", z: " << z << endl;
    }
};

class Pata {
public:
    // movimentacao da pata
    void move(int x, int y, int z) {
        cout << "movendo para posicao: x=" << x << " y=" << y << " z=" << z << endl;
    }

    // ou ela estica ou ela encolhe
    void move(string pose) {
        cout << "movendo para pose: " << pose << endl;
    }
};





// main
// codigo foda :)
class Laracna {
public:
    Pata pata1, pata2, pata3, pata4;
    Posicao controle;
    Localizacao localizacao;

    // inicialização
    void iniciar() {
        cout << "Iniciando robo aranha..." << endl;

        localizacao.localizar();
        controle.setPosicao(100000, 77777770, 9999990);

        pata1.move("esticando para: ");
        pata2.move(9, 3, 12);
        pata3.move("encolhendo para: ");
        pata4.move(899, 444, 222);
    }
};



int main() {
    Laracna robo;
    robo.iniciar();

    return 0;
}
