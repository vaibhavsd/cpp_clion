//
// Created by vaibhav on 8/4/17.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <array>
#include <iterator>
#include <list>
#include <vector>

using namespace std;

int main(){
    cout << "This is list implementation in cplusplus" << endl;
    cout << "Notice the subtle difference between the declarations of vector and lists" << endl;

    list<int> l(10);

    list<int> lis= {1,2,3,4,5,6};
    lis.push_front(25);
    lis.push_back(10);

    for(int k:lis)
        cout<< k << ' ';

    cout << "\n" ;

    list<int>::iterator index= std::find(lis.begin(), lis.end(), 5);
    auto idx= std::find(lis.begin(), lis.end(), 5);

    if(index!= lis.end())
        cout<< "found 5" << endl;
        cout<< "Function stops iterating as soon as it finds the value" << endl;

    cout << "cout of index is not allowed here" << endl;


    vector<int> vec{1,2,3,45,5};
    vector<int> vect(10);

    int x= 5;
    int y=10;

    auto z= x+y;
    cout << z ;


}

