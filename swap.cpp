#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int mya = 3;
    int myb = 5;

    std::cout << "Before swap:" << std::endl;
    std::cout << mya << std::endl;
    std::cout << myb << std::endl;

    swap(mya, myb);

    std::cout << "After swap:" << std::endl;
    std::cout << mya << std::endl;
    std::cout << myb << std::endl;

    return 0;
}