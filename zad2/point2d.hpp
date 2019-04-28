/*point2d.hpp*/
/*Plik nag��wkowy klasy Point2d.hpp*/
#ifndef POINT2D_HPP_INCLUDED
#define POINT2D_HPP_INCLUDED
#include <iostream>

class Point2d{
    public:
        //konstruktor bez argument�w zwraca punkt (0,0)
        Point2d();

        //destruktor nie jest zadeklarowany
        //b�dzie wykorzystywany domy�lny
        //~Point2d();

        //konstruktor pobieraj�cy wsp�rz�dne
        Point2d(double, double);

        //konstruktor kopiuj�cy
        Point2d(const Point2d& other);

        //przeci��ony operator przypisania
        Point2d& operator= (const Point2d& other);

        //gettery i settery
        double getX();
        double getY();
        double getR();
        double getPhi();
        void setXY(double, double);
        void setRPhi(double, double);
        void jednokladnosc(double);
        void obrot(double);

    private:
        //wsp�rz�dne punktu jako pola prywatne
        double _r;
        double _phi;
};

//deklaracja przeci��onego operatora <<
//na potrzeby wy�wietlania wsp�rz�dnych punktu
std::ostream& operator<<(std::ostream& out, Point2d& p);

#endif // POINT2D_HPP_INCLUDED
