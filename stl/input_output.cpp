//
// Created by vaibhav on 8/4/17.
//

#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> vec;

    copy_n(istream_iterator<int> (cin), n, back_inserter(vec));
    sort(vec.begin(), vec.end());
    copy_n(begin(vec), n, ostream_iterator<int> (cout, " "));
    cout << "\n" ;


    int k;
    cin >> k;
    vector<int> vec2;


    copy_n(istream_iterator<int> (cin), k, back_inserter(vec2));
    sort(vec2.begin(), vec2.end());
    copy(vec2.begin(), vec2.end(), ostream_iterator<int> (cout, " "));

    return 0;
}