#include <iostream>
#include <string>
int main()
{
    struct color { uint8_t r; uint8_t g; uint8_t b; };
    color one; one.r = 15; one.g = 56; one.b = 15;
    color two; two.r = 48; two.g = 98; two.b = 48;
    color three; three.r = 139; three.g = 172; three.b = 15;
    color four; four.r = 155; four.g = 188; four.b = 15;

    int selection;
    std::string a;
    std::cout << "Select a color\n" << "Options are: \n 1. Dark Red     2. Red     3. Light Red\n" << " 4. Dark Green   5. Green   6. Light Green\n" << " 7. Dark Blue    8. Blue    9. Light Blue\n";
    std::cin >> selection;
    switch (selection) {
        case(4): { std::cout << "your rgb value is " << int(four.r) << ", " << int(four.g) << ", " << int(four.b); break; }
        case(3): { std::cout << "your rgb value is " << int(three.r) << ", " << int(three.g) << ", " << int(three.b); break; }
        case(2): { std::cout << "your rgb value is " << int(two.r) << ", " << int(two.g) << ", " << int(two.b); break; }
        case(1): { std::cout << "your rgb value is " << int(one.r) << ", " << int(one.g) << ", " << int(one.b); break; }
        default: { std::cout << "hey! that's not a legal number."; }
    }
    std::cout << "\ntype something and hit enter to close this window\n";
    std::cin >> a;
}