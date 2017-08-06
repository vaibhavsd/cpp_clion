//
// Created by vaibhav on 8/4/17.
//

#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>

using namespace std;

int main()
{
    vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    fill_n(vec.begin(), 5, -1);

    for (auto k:vec)
        cout<< k << ' ' ;
    cout << "\n";

    cout<< "One more awesome way of printing!" << std::endl;
    copy(begin(vec), end(vec), ostream_iterator<int>(cout, " "));


}