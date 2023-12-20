#include <iostream>
#include <memory>

int main()
{
    unsigned n{5};   // array size
    auto pnumbers { std::make_unique<int[]>(n) };    // array {0, 0, 0, 0, 0}

    std::cout << "pnumbers[1] initial value: " << pnumbers[1] << std::endl; // pnumbers[1] initial value: 0
    pnumbers[1] = 121;  // change the value
    std::cout << "pnumbers[1] new value: " << pnumbers[1] << std::endl;     // pnumbers[1] new value: 121
}
