//
// Created by vaibhav on 8/8/17.
//

#include <iostream>

using namespace std;

int main() {
    int size = 6;
    char *s = new char[size];
    int *p = new int(9);

    cout << *p << endl;

    delete []s; //delete an array
    delete p; //delete single element

    /*
    //Verify this
    // Creating a multi-dimensional array using C
    int **array;
    array = malloc(nrows* sizeof(int *));

    for(int i = 0; i < nrows; i++){
        array[i] = malloc(ncolumns * sizeof(int));
    }
    */

}