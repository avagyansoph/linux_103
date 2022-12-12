#include "min.h"

int main(int argc, char** argv)
{
    Linux103::Min min(argc, argv);
    min.calculate();
    min.print();
    return 0;
}