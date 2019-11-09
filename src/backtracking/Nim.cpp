/*
 * Archivo: Nim.cpp
 * ----------------
 * Este programa simula una simple variante de el juego de Nim. En esta
 * versión, el juego comienza con una pila de 13 monedas en una mesa. Los jugadores
 * pueden tomar turnos removiendo 1, 2 o 3 monedas de la pila. El jugador que tome la
 * última moneda pierde.
 */
#include <iostream>
#include <string>
#include "error.h"
#include "simpio.h"
#include "strlib.h"
using namespace std;

/* Constantes */
const int N_COINS = 13;       /* Número inicial de monedas */
const int MAX_MOVE = 3;       /* Número de monedas que un jugador puede tomar */
const int NO_GOOD_MOVE = -1;  /* Marcardor para indicar que no hay un buen movimiento */

/*
 * Tipo: Jugador
 * ------------
 * Esto tipo enumerado diferencia los jugadores humano y máquina.
 */
enum Player { HUMAN, COMPUTER };

/*
 * Método: opponent
 * Uso: Player other = opponent(player);
 * -------------------------------------
 * Retorna el oponente de un jugador. El oponente de el computador
 * es el jugador humano y viceversa.
 */

Player opponent(Player player) {
    return (player == HUMAN) ? COMPUTER : HUMAN;
}

/*
 * Constante: STARTING_PLAYER
 * --------------------------
 * Indica cuál jugado debería empezar el juego.
 */
const Player STARTING_PLAYER = HUMAN;

/*
 * Clase: SimpleNim
 * ----------------
 * La clase SimpleNim implementa la versión simple de Nim.
 */
class SimpleNim {
public:

    void play() {
        nCoins = N_COINS;
        whoseTurn = STARTING_PLAYER;
        while (nCoins > 1) {
            cout << "Hay " << nCoins << " monedas in la pila." << endl;
            if (whoseTurn == HUMAN) {
                nCoins -= getUserMove();
            } else {
                int nTaken = getComputerMove();
                cout << "Yo tomaré " << nTaken << "." << endl;
                nCoins -= nTaken;
            }
            whoseTurn = opponent(whoseTurn);
        }
        announceResult();
    }

    void printInstructions() {
        cout << "Bienvenido a el juego de Nim!" << endl;
        cout << "En este juego, empezaremos con una pila de" << endl;
        cout << N_COINS << " monedas en la mesa. En cada turno, tú" << endl;
        cout << "y yo tomaremos alternativamente monedas entre 1 y" << endl;
        cout << MAX_MOVE << " de la mesa. El jugador que" << endl;
        cout << "tome la última moneda pierde." << endl << endl;
    }

private:
    int getComputerMove() {
        int nTaken = findGoodMove(nCoins);
        return (nTaken == NO_GOOD_MOVE) ? 1 : nTaken;
    }

    int findGoodMove(int nCoins) {
        int limit = (nCoins < MAX_MOVE) ? nCoins : MAX_MOVE;
        for (int nTaken = 1; nTaken <= limit; nTaken++) {
            if (isBadPosition(nCoins - nTaken)) return nTaken;
        }

        return NO_GOOD_MOVE;
    }

    bool isBadPosition(int nCoins) {
        if (nCoins == 1) return true;
        return findGoodMove(nCoins) == NO_GOOD_MOVE;
    }

    int getUserMove() {
        while (true) {
            int nTaken = getInteger("¿Cuánts quieres? ");
            int limit = (nCoins < MAX_MOVE) ? nCoins : MAX_MOVE;

            if (nTaken > 0 && nTaken <= limit) return nTaken;
            cout << "¡Eso es trampa! Por favor escoja otro número";
            cout << " entre 1 y " << limit << "." << endl;
            cout << "Hay " << nCoins << " monedas en la pilas." << endl;
        }
    }

    void announceResult() {
        if (nCoins == 0) {
            cout << "Tomaste la última moneda. Tú pierdes." << endl;
        } else {
            cout << "Hay solamente una moneda restante." << endl;
            if (whoseTurn == HUMAN) {
                cout << "Yo gano." << endl;
            } else {
                cout << "Yo pierdo." << endl;
            }
        }
    }

    int nCoins;
    Player whoseTurn;
};

int main() {
    SimpleNim game;
    game.printInstructions();
    game.play();
    return 0;
}







