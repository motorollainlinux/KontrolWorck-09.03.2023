#include <iostream>

void UserEnter(int &UserChoise, int &Result) {
    std::cout << "Enter number\n";
    std::cin >> UserChoise;
    if (UserChoise >= 0) {
        std::cout << "it's too much\n";
    } else {
        for (int i = UserChoise; i <= 0; i++) {
            if (i % 2 == -1) {
                Result = Result + i;
            }
        }
    }
    std::cout << "Result: " << Result << "\n";
}

int main() {
    int UserChoise = 0, Result = -1;
    UserEnter(UserChoise, Result);
}
