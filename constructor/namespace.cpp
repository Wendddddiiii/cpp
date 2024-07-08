#include <string>
#include <vector>
#include <iostream>
struct celestial_body {
    std::string name;
    int pos;
};

namespace comp6771 {
    using std::vector;

    using planet = celestial_body;

    namespace planets {
        using terrestrial = celestial_body;
    }
}

int main() {
    namespace spaceland = comp6771;

    // should be an alias for std::vector.
    auto v = spaceland::vector{6771};

    // name: earth, position from sun: 3
    // a planet is a kind of 
    auto earth = spaceland::planet{"earth", 3};

    // should produce an object with the same type as the "earth" variable above.
    auto old_earth = spaceland::planets::terrestrial{"earth", 3};

    std::cout << v[0] << std::endl;
    std::cout << earth.name << std::endl;
    std::cout << old_earth.pos << std::endl;
}