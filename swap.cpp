#include <iostream>
#include <string>

// & passes the references into the function so that the values can actually be swapped
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void print(std::string str) {
    std::cout << str << std::endl;
}

void print(int i) {
    std::cout << i << std::endl;
}

int main() {
    

    int mya = 3;
    int myb = 5;

    print("Before swap:");
    print(mya);
    print(myb);

    swap(mya, myb);

    print("After swap:");
    print(mya);
    print(myb);

    return 0;
}