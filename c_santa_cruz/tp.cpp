//
// Created by vaibhav on 8/7/17.
//

#include <iostream>

using namespace std;

class point{
public:
    // Contructor Type 1
    point(int a=0, int b= 0): x(a), y(b){};

    void setx(int a){ x= a;}
    void sety(int b){ x= b;}

    int getx(){ return x;}
    int gety(){ return y;}

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



int main(){

    point a(2,5);

}
