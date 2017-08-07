//
// Created by vaibhav on 8/5/17.
//

#include <iostream>

using namespace std;

class point{
public:
    point(int a, int b);
    void setx(int &a){ x= a; }
    void sety(int &b){ y= b; }
    int getx(){ return x; }
    int gety(){ return y; }

private:
    int x;
    int y;
};

ostream& operator<<(ostream &out, point p1){
    out << "(" << p1.getx() << ", " << p1.gety() << ")" << endl;
    return out;
}

point::point(int a, int b) {
    x= a;
    y= b;
}


int main(){

    point loc1(5,5);

    point loc2(10,5);

    point loc3(5,6);
    cout<< "Location 1: " << loc1 << endl;

}