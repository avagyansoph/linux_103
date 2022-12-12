#include <iostream>
#include <cstdlib>
#include <iterator>
#include <cmath>
#include "min.h"
using namespace std;
Linux103::Min::Polynomial(int argc, char** argv)
{
    map<int , int > y; //key is degree of x
    for(int i=0;i<argc;i+=2){
        y.insert(pair<int, int>(atoi(argv_[i+1]),atoi(argv_[i])));
    }
}

void Linux103::Min::add(int coef, int degr) { y.insert(pair<int, int>(degr, coef))}


int inux103::Min::calculate(int x0){
    int y0 = 0;
    map<int,int > iterator itr;
    for(itr= y.begin();itr!=y.end();++itr){ //??
        y0+= pow(x0,itr->first);
        y0*=itr->second;
    }
    return y0;
} 

Polynomial Linux103::Min::derive(){
    map<int , int > dy;
    map<int,int > iterator itr;
    for(itr= y.begin();itr!=y.end();++itr){ 
        int a = itr->second;
        int b = itr->first;
        dy.insert(pair<int,int>(a*b, b-1));
    }
    return dy;


}



void Linux103::Min::add(int coef, int degr); ()
{
    this->y[degr]+=coef;
}


void Linux103::Min::print()
{
   for(itr= y.begin();itr!=y.end();++itr){ 

        //cout<<     <<"^"<<    <<" + " naxaverjini harca 


   }
}