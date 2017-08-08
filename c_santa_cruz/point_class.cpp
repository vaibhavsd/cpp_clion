//
// Created by vaibhav on 8/5/17.
//

#include <iostream>

using namespace std;

class point{
public:
    point(int a=0, int b= 0): x(a), y(b){};

    void setx(int &a){ x= a; }
    void sety(int &b){ y= b; }
    int getx(){ return x; }
    int gety(){ return y; }

    point sum ( point b);
    point product (point b);

private:
    int x;
    int y;
};

ostream& operator<<(ostream &out, point p1){
    out << "(" << p1.getx() << ", " << p1.gety() << ")" << endl;
    return out;
}


point operator+ (point &p1, point &p2){
    int sumx= p1.getx()+ p2.getx();
    int sumy= p1.gety()+ p2.gety();
    point sum;
    sum.setx(sumx);
    sum.sety(sumy);
    return sum;
    //return point( p1.x+ p2.x, p1.y+ p2.y);
}

point point::sum(point b) {
    int sumx= this-> getx() + b.getx();
    int sumy= this-> gety() + b.gety();
    return point(sumx, sumy);
}

point point::product(point b) {
    int prox= this-> getx() * b.getx();
    int proy= this-> gety() * b.gety();
    return point(prox, proy);
}


int main(){

    point a(2,5);
    point b(4,6);

    cout<< a <<  endl;
    cout<< b <<  endl;
    cout<< a.sum(b) <<  endl;
    cout<< a.product(b) <<  endl;
}

