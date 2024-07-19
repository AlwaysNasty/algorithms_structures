#include <iostream>

int main(){
    unsigned char bits = 0227;
    std::cout << bits << "\t" << (~bits) << "\t" << bits << "\t";
    std::cout << (bits << 3) << "\t" << (bits >> 3);

    return 0;
}
//4.11
