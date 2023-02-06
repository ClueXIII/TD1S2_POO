#ifndef _POINT_H_
#define _POINT_H_
#include <iostream>

class Point {
    private :
        double x;
        double y;
    public :
        //Point(double x, double y); //Exo 3)a)
        Point(int x = 0, int y = 0);//Exo 3)b)
        void afficher();
        void saisie();
        double distance(Point & p);
};

#endif