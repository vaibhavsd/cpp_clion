// Convert this program to C++
// change to C++ io
// change to one line comments
// change defines of constants to const
// change array to vector<>
// inline any short function

#include<iostream>
#include<cstdio>
#include<vector>


const int N = 40;
typedef std::vector<int> int_vector;
using namespace std;

void sum_function(int*p , int_vector dataset){
    for (int j=0; j<N; ++j){
        *p += dataset[j];
    }
}

void inline print_output(int accum){
    cout << "sum is " << accum  << endl;
}


int main(){
    int i;
    int accum= 0;
    int_vector data(N);

    for(i = 0; i < N; ++i) {
        cout << i;
        data[i] = i;
    }

    sum_function(&accum, data);
    print_output(accum);
    return 0;

}

