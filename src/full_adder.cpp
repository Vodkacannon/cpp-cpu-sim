#include "inc/cpp_cpu_sim.hpp"

std::pair<Bool, Bool> full_adder(Bool a, Bool b, Bool carry) {
    auto first_half_add = half_adder(a, b);
    auto second_half_add = half_adder(carry, first_half_add.first);
    
    return std::make_pair(second_half_add.first, OR(first_half_add.second, second_half_add.second));
}