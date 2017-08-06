//
// Created by vaibhav on 8/5/17.
//
#import <iostream>
#import <cstdio>
#import <ctime>

using namespace std;


class swap_values{
public:
    void swap_integers_cplusplus(int& a, int& b){
        int temp = a;
        a = b;
        b = temp;
    }

    void swap_integers_basic_c(int* a, int* b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }

};


int main(){
    cout << "Using classes and pointers and addresses..more practice" << endl;
    cout << "Nothing else is so much fun!" << endl;

    int k= 10; int l= 20;
    cout << "k is: " << k << " and l is: " << l <<endl;

    swap_values object;
    object.swap_integers_cplusplus(k, l);
    cout << "k is: " << k << " and l is: " << l <<endl;

    object.swap_integers_basic_c(&k, &l);
    cout << "k is: " << k << " and l is: " << l <<endl;

    cout << "This just became a zero sum game!!" << endl;
}