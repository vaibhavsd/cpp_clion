//
// Created by vaibhav on 8/9/17.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

class Person{
public:
    string name;
    int age;
    virtual void getdata(){};
    virtual void putdata(){};

};

class Professor: public Person{
public:
    int publications;
    int cur_id= 0;
    void getdata();
    void putdata();

};int Professor::cur_id=0;

class Student: public Person{
public:
    vector<int> marks;
    int cur_id;
    void getdata();
    void putdata();
};int Student::cur_id=0;

void Professor::getdata(){
    this->cur_id ++;
    cin >> this->name;
    cin >> this->age;
    cin >> this->publications;
}

void Professor:: putdata(){
    cout << this->name << " ";
    cout << this->age <<  " " ;
    cout << this->publications  <<   " " ;
    cout << this->cur_id<< " ";
    cout << "\n" ;
}

void Student::getdata(){
    this->cur_id ++;
    cin >> this->name;
    cin >> this->age;
    copy_n(istream_iterator<int> (cin), 6, back_inserter(this->marks));
}

void Student:: putdata(){

//    int sum_of_marks = std::accumulate(((this->marks).begin(),(this->marks).end(), 0));
    vector<int> hell= this->marks;
    int sum_of_marks= 0;
    for (int i=0; i<6; i++){
        sum_of_marks += hell[i];
    }

    cout << this->name << " " ;
    cout << this->age << " " ;
    cout << sum_of_marks << " " ;
    cout << this->cur_id << " ";
    cout << "\n" ;
}


int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}