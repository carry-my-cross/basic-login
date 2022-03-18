#include <iostream>
bool handle_userinput (int choice) {
    bool input;
    switch (choice) {
        case 1:
            std::cout << "hello new user!" << std::endl;
            input = true;
            break;
        case 2:
            std::cout << "Please enter your login: " << std::endl;
            input = true;
            break;
        default:
            std::cout <<"You've entered and incorrect selection, try again." << std::endl;
            input = false;
            break;
    }
    return input;
}

void menu () {
    int choice;
    do {
        // our menu of choices
        std::cout << std::endl
        << " 1 - New user.\n"
        << " 2 - Login.\n"
        << " Enter your choice: ";
        std::cin >> choice;
        // initial valid_choice with our user_input result
        bool valid_choice {handle_userinput(choice)};
        // if input is anything but a 1 or 2, ask again
        if (!valid_choice) {
            menu();
        }

    } while (!choice);
};

class UserLogin {
public:
    std::string userName;
    std::string userPass;

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
    menu();
    UserLogin user;
    user.set_userName(user);
    user.set_userPass(user);

    return 0;
}
