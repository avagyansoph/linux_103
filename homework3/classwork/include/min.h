#ifndef __MIN_H__
#define __MIN_H__
using namespace std;
namespace Linux103
{
    class Polynomial
    {
        public:
            // Min(int argc, char** argv);
            // void calculate();
            // void print();
            Polynomial();
            Polynomial(int argc, char** argv);
            //void add(pair<int, int>); ???
            void add(int coef, int degr); 
            void print();
            int calculate(int x0);
            Polynomial derive();

        private:
            map<int, int> y;
            //int    min_;
            // int    argc_;
            // char** argv_;
    };
}

#endif