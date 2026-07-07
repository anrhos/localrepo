#include <iostream>
int main(){
    int x = 4;
    int y = 5;
    int z = x+y;
    int a = z+x;
    int c = a-z;
    std::cout<< z;
    std::cout<< a;
    std::cout<< c;
    int a = z-x;
    int b = a+y;
    std::cout<< z;
    std::cout<< a;
    std::cout<< b;
    return 0;
}