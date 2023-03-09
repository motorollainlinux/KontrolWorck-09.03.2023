#include <iostream>
#include <stdio.h>

void UserEnter(int &UserNum, int &Summ, int *Arr) {
    for (int i = 0;; i++) {
        std::cout << "enter number\n";
        std::cin >> UserNum;
        if (UserNum == -1) {
            break;
        }
        Arr[i] = UserNum;
        Summ += UserNum;
    }
    std::cout << "program is end! Result: " << Summ << "\n";
    
}

int main() {
    int *Arr;
    Arr = (int*)calloc(500, sizeof(int));
    int UserNum, Summ;
    UserEnter(UserNum, Summ, Arr);
}
