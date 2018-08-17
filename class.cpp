#include "teenager.h"

int main() {
    teenager Henry; Henry.name = "Henry", Henry.age = 18;
    teenager Hannah("Hannah", 16);    std::cout << "is teenager "<<Henry.name<<" at secondary school?" <<Henry.in_secondary_school()<<std::endl;
    std::cout << "is teenager "<<Hannah.name<<" at secondary school?" <<Hannah.in_secondary_school()<<std::endl;
    return 0;
}


