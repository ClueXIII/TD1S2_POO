# include "point.h"

using namespace std;

/*Point::Point(double abs, double ord) { // exo 3)b)
    x = abs;
    y = ord;
}*/

Point::Point(int x, int y) {// exo 3)b)
    this -> x = x;
    this -> y = y;
}

void Point::afficher() {
    cout << '(' << x << ", " << y << ')' << endl;
}

void Point::saisie(){
    cout << "entrez x : "<< endl;
    cin >> x;
    cout << "entrez y : "<< endl;
    cin >> y;
}

double Point::distance(Point & P){
    if (P.x > P.y){
       return (P.x - P.y);
    } else{
        return (P.y - P.x);
    }
}






