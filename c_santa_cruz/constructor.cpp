//
// Created by vaibhav on 8/5/17.
//

#include <iostream>

using namespace std;

class point{
public:

    // Contructor Type 1
    point(int a=13, int b=13): x(a), y(b) {};
    //point(): x(0), y(0){};

    /*
    // Contructor Type 2
    point(int a= 0, int b= 0){
        this -> x = a;
        this -> y = b;
    }

    // Contructor Type 3
    point(int a= 0, int b= 0){
        x= 0;
        y= 0;
    }
    */

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

//point::point(int a, int b): x(a), y(b) {}


int main(){

    point loc;
    point loc1(5,5);

    point loc2(10,5);

    point loc3(5,6);
    cout<< "Location 0: " << loc << endl;
    cout<< "Location 1: " << loc1 << endl;
    cout<< "Location 2: " << loc2 << endl;
    cout<< "Location 3: " << loc3 << endl;

}