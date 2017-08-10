//
// Created by vaibhav on 8/8/17.
//

#include <iostream>
#include <ctime>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {


    int x = 1;
    int *y = &x;  // declare y as a pointer to x
    int **z = &y;  // declare z as a pointer to y
    **z = 2;  // sets the thing pointed to (the thing pointed to by z) to 2
              // i.e., sets x to 2

    // int main(int argc, char* argv[]) ==  int main(int argc, char** argv)

    // In C, the index operator [] is just another way of performing pointer arithmetic. For example,
    // foo[i] produces the same code as *(foo + i)


    // Creating a multi-dimensional array using C
    int nrows= 6; int ncolumns= 6;
    int **array;
    array = (int**) malloc(10* sizeof(int *));

    for(int i = 0; i < nrows; i++){
        array[i] = (int *)malloc(ncolumns * sizeof(int));
    }


    // Creating a multi-dimensional array using C++
    int size= 6;
    int **graph;
    graph = new int* [size]; //Creates rows

    for (int i=0; i< size; i++){
        graph[i]= new int [size]; //Creates columns
    }

    int k=3;
    vector<int> vec;
    copy_n(istream_iterator<int> (cin), k, back_inserter(vec));

    delete []graph;
    delete []array;

}