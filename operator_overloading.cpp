//
// Created by vaibhav on 8/11/17.
//


#include <vector>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Box{
public:
    Box(int length= 0, int breadth= 0, int height= 0){
        l= length;
        b= breadth;
        h= height;
    };

    int l;
    int b;
    int h;

    int getLength();
    int getBreadth();
    int getHeight();
    long long CalculateVolume();


private:


};

int Box::getLength(){
    return l;
}

int Box::getBreadth(){
    return b;
}

int Box::getHeight(){
    return h;
}

long long Box::CalculateVolume(){
    return (long long)l*b*h;
}

std::ostream& operator<<(std::ostream& out, const Box& B)
{
    return out <<  B.l << " " <<  B.b  <<  " " << B.h <<   endl ;
}

bool operator<(Box &A, Box &B){
    bool x= A.l < B.l;
    bool y= (A.b < B.b) and (A.l==B.l);
    bool z= (A.h < B.h) and (A.l==B.l) and (A.b==B.b);
    return x or y or z;

}


void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}