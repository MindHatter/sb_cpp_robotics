#include <iostream>

int main(){

    double f1 = 0.0;
    double f2 = 1.0;
    double f3 = f1 + f2;
    double f4 = f2 + f3;
    double f5 = f3 + f4;

    std::cout<<"Fibonachi 1: "<<f1<<std::endl;
    std::cout<<"Fibonachi 2: "<<f2<<std::endl;
    std::cout<<"Fibonachi 3: "<<f3<<std::endl;
    std::cout<<"Fibonachi 4: "<<f4<<std::endl;
    std::cout<<"Fibonachi 5: "<<f5<<std::endl;
}