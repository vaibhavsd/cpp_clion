//
// Created by vaibhav on 8/5/17.
//

#include <iostream>

using namespace std;




int main(){


    char c = 10;       // 1 byte
    int *p = (int*)&c; // 4 bytes
    *p = 5; // run-time error: stack corruption

    int *q = static_cast<int*>(&c); // compile-time error

}