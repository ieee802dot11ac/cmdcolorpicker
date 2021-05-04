#include <iostream>
#include <string>
int main()
{
    struct color { uint8_t r; uint8_t g; uint8_t b; };
    color darkred; darkred.r = 192; darkred.g = 0; darkred.b = 0;
    color red; red.r = 255; red.g = 0; red.b = 0;
    color lightred; lightred.r = 255; lightred.g = 128; lightred.b = 128;
    color darkgreen; darkgreen.r = 0; darkgreen.g = 192; darkgreen.b = 0;
    color green; green.r = 0; green.g = 255; green.b = 0;
    color lightgreen; lightgreen.r = 128; lightgreen.g = 255; lightgreen.b = 128;
    color darkblue; darkblue.r = 0; darkblue.g = 0; darkblue.b = 192;
    color blue; blue.r = 0; blue.g = 0; blue.b = 255;
    color lightblue; lightblue.r = 128; lightblue.g = 128; lightblue.b = 255;
    int selection;
    std::string a;
    std::cout << "Select a color\n" << "Options are: \n 1. Dark Red     2. Red     3. Light Red\n" << " 4. Dark Green   5. Green   6. Light Green\n" << " 7. Dark Blue    8. Blue    9. Light Blue\n";
    std::cin >> selection;
    switch (selection) {
        case(9): { std::cout << "your rgb value is " << int(lightblue.r) << ", " << int(lightblue.g) << ", " << int(lightblue.b); break; }
        case(8): { std::cout << "your rgb value is " << int(blue.r) << ", " << int(blue.g) << ", " << int(blue.b); break; }
        case(7): { std::cout << "your rgb value is " << int(darkblue.r) << ", " << int(darkblue.g) << ", " << int(darkblue.b); }
        case(6): { std::cout << "your rgb value is " << int(lightgreen.r) << ", " << int(lightgreen.g) << ", " << int(lightgreen.b); break; }
        case(5): { std::cout << "your rgb value is " << int(green.r) << ", " << int(green.g) << ", " << int(green.b); break; }
        case(4): { std::cout << "your rgb value is " << int(darkgreen.r) << ", " << int(darkgreen.g) << ", " << int(darkgreen.b); break; }
        case(3): { std::cout << "your rgb value is " << int(lightred.r) << ", " << int(lightred.g) << ", " << int(lightred.b); break; }
        case(2): { std::cout << "your rgb value is " << int(red.r) << ", " << int(red.g) << ", " << int(red.b); break; }
        case(1): { std::cout << "your rgb value is " << int(darkred.r) << ", " << int(darkred.g) << ", " << int(darkred.b); break; }
        default: { std::cout << "hey! that's not a legal number."; }
    }
    std::cout << "\ntype something and hit enter to close this window\n";
    std::cin >> a;
}