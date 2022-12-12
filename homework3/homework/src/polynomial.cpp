#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
#include<iterator>
#include <map>
using namespace std;
class Polynomial{
    private:
        map <int, int> _y;
    public:
    
        // Polynomial(int n, const vector<int> a)
        Polynomial(int argc, char** argv)
        {
           for (int i=1;i<argc;i+=2) //power, coeff
           {
              _y.insert({atoi(argv[i+1]), atoi(argv[i])});
           }
        }
        
        void add(int coef,int degree) 
        {
           map<int,int>::iterator it = _y.begin();
           if (_y.find(degree) == _y.end()) _y.insert({degree, coef});
           else  _y[degree]+=coef;
        }
        
        long long calculate(int xValue) 
        {   
            long long answer=0;
            for(map<int, int >::const_iterator it = _y.begin(); it != _y.end(); ++it){
                answer+=pow(it->second*xValue,it->first);
            }
            return answer;
        
        }
         
         void  print() 
         {
            for(map<int, int >::const_iterator it = _y.begin(); it != _y.end(); ++it){
                
                cout << it->second << "x^" << it->first;
                if(it == prev(_y.end())) cout<<endl;
                else cout<<"+ ";
                
            
            }
         }
        Polynomial derive()  
        {   
            vector<int> d{};
             for(map<int, int >::const_iterator it = _y.begin(); it != _y.end(); ++it){
                int x= it->second;//coef
                int n= it->first;//pow
                x*=n;
                n--;
                d.push_back(x);
                d.push_back(n);
             }
             Polynomial dx(d.size(), d);
             return dx;
        }
     
        
        

};
 
 int main(){
    Polynomial y(3,{5,2,4,5,3,6});
    y.print();
    y.add(3,4); 
    y.add(2,2);
    y.print();
    Polynomial dy(y.derive());
    dy.print();
    return 0;
 }