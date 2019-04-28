#include<iostream>
#define N 3


class TicTacToe{

    enum Stan{
    puste,
    kolko,
    krzyzyk,
};

    Stan plansza [3][3];
    Stan gracz;

    public:
    void rysuj();
    void graj();
    bool ruch();
    bool szukaj(int x, int y);
    bool koniec();
    bool poprawny(int x, int y);
};
