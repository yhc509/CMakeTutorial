#include <iostream>

int main() {
    int a[]{1,2,3,4};
    for(auto i : a)
        std::cout << i << std::endl;
    return 0;
}