#include <iostream>

class UserLogin {
public:
    std::string userName;
    std::string userPass;

    void test() {
        std::cout << "I am in the test function" << std::endl;
    }

    void set_userName (UserLogin& user) {
        std::cout << "enter username: " ;
        std::cin >> user.userName;
        std:: cout << user.userName << std::endl;
    }

    void set_userPass (UserLogin& user) {
        std::cout << "enter password: " ;
        std::cin >> user.userPass;
        std:: cout << user.userPass << std::endl;
    }
};

int main() {
    UserLogin user;
    user.set_userName(user);
    user.set_userPass(user);

    return 0;
}
