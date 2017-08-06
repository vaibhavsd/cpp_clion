//
// Created by vaibhav on 8/4/17.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {

    for (int k:{10, 22, 31, 4, 5})
        std::cout << "Hello: " << k << std::endl;

    cout << "\n" ;

    vector<int> vec(2);
    vec[0] = 1;
    vec[1] = 3;
    for(int k:vec)
        cout<< k << ' ';

}