//
// Created by vaibhav on 8/4/17.
//

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){

    vector<int> vec(10);
    std::iota(vec.begin(), vec.end(), -2);
    for(auto n: vec) std::cout << n << ' ';
    std::cout << '\n';

}