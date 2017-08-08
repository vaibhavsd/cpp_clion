//
// Created by vaibhav on 8/8/17.
//

#include <iostream>

double prob(){
    return ((double) rand() / (RAND_MAX));
}

using namespace std;

int main(){

    int size= 6;
    bool **graph;

    graph= new bool*[size];

    for(int i=0; i<size; i++){
        graph[i]= new bool[size];
    }

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(i==j) graph[i][j]= false;
            else graph[i][j]= graph[j][i]= (prob()< 0.19);
        }
    }

    delete graph;

}