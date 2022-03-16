#include <iostream>

class Test {
public:
    void test () {
        std::cout << "I am in the test function" << std::endl;
    }
};

int main() {
    Test myTest;
    myTest.test();
    return 0;
}
