//
// Created by vaibhav on 8/6/17.
//

#include <iostream>

using namespace std;

template <typename T>
inline T Max (T &a, T &b){
    return a>b? a:b;
}



template <class T>
void printArray(T begin, T end)
{
    while(begin != end)
    {
        std::cout << *begin << ' ';
        ++begin;
    }
    std::cout << std::endl;
}



int main(){

    int a= 5; int b= 5;
    cout<< "Max(5,10) is: " << Max(a,b) << endl;

    float c= 3.1; float d= 10.2;
    cout<< "Max(3.1,10.2) is: " << Max(c,d) << endl;

    int length= 6;
    int data[] = {5,7,9,4,5,3};
    printArray(data, data+length);

}