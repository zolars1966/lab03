#include <iostream>
#include <string>
#include <vector>

int main() {
    typedef unsigned long long ull;
    ull population = 8000000000ULL;

    std::vector<std::string> names = {"Ann", "Bob"};
    auto first = names.begin();

    decltype(names.begin()) second;

    double price = 19.95;
    int roundedDown = static_cast<int>(price);

    std::size_t bytes = sizeof(ull);

    std::cout << population << '\n';
    std::cout << *first << '\n';

    second = names.end() - 1;
    
    std::cout << *second << '\n';
    std::cout << roundedDown << '\n';
    std::cout << bytes << '\n';

    return 0;
}
