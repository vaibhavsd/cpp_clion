//
// Created by vaibhav on 8/5/17.
//

#include <iostream>

using namespace std;

class point{
public:

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



int main(){

    point loc1;
    int a= 5; int b= 5;
    loc1.setx(a);
    loc1.sety(b);

    point loc2;
    int c= 5; int d= 5;
    loc2.setx(c);
    loc2.sety(d);

    point loc3(5,6);
    cout<< "Location 1: " << loc1 << endl;


}