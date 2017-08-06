//
// Created by vaibhav on 8/4/17.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>

using namespace std;

int main() {
    vector<int> from_vector(10);
    iota(from_vector.begin(), from_vector.end(), 0);

    vector<int> to_vector;
    copy(from_vector.begin(), from_vector.end(), back_inserter(to_vector));

    for(auto k:to_vector)
        cout<< k << ' ' ;

    cout<< "\n" ;

}