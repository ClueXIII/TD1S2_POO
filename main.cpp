#include "point.h"
#include <iostream>

using namespace std;

void afficherTablePoint (Point *point_table, int n){
    for (int i = 0; i < n; i++) {
        point_table[i].afficher();
        cout << " ";
    }
}

using namespace std;

int main(int argc, char ** argv)
{
//=================================/1\==========================================
    /*Point a;
    a.afficher();*/
//=================================/2\==========================================
    /*Point a;
    a.saisie();
    a.afficher();*/
//=================================/3\==========================================
/*a*/
    /*
    Point a(8,4);
     a.afficher();
    return 0;
    */
/*b*/
    /*
    Point a;
    a.afficher();
    */
//=================================/4\==========================================
    /*
    Point a(8,3);
    cout << a.distance(a);
     */
    //Elle n'a qu'un seul argument car l'object Point comporte les paramétres x et y
//=================================/5\==========================================
    Point a(8,0);
    Point b(8,1);
    Point c(8,2);
    int n = 3;
    Point point_table[n];
    point_table[0]=a;
    point_table[1]=b;
    point_table[2]=c;

    afficherTablePoint(point_table, n);
    return 0;
}