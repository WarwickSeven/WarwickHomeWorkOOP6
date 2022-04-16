#include <iostream>

void foolcheck() { //Lesson F Task 1
    int i;
    std::cout << "Integer, pls: ";
    while (!(std::cin >> i) || (std::cin.peek() != '\n')) {
        std::cin.clear();
        while (std::cin.get() != '\n');
        std::cout << "Nope, try again: ";
    }
    std::cout << "Finnaly! i=" << i << std::endl;
}

std::ostream& endll(std::ostream& output) { //Lesson F Task 2
    return output << '\n' << '\n' << std::flush;
}

int main() {
    //foolcheck();
    std::cout << "text" << endll;
    std::cout << "text2" << std::endl;
    return 0;
}

