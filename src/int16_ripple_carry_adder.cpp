#include "cpp_cpu_sim.hpp"

int16 int16_ripple_carry_adder(int16 a, int16 b, byte carry) {
    int16 result;
    auto first_half_add = half_adder(a[0], b[0]);
    auto second_half_add = half_adder(carry, first_half_add.first);
    result[0] = second_half_add.first;
    carry = OR(first_half_add.second, second_half_add.second);

    for (int i = 1; i < 2; i++) {
        first_half_add = half_adder(a[i], b[i]);
        second_half_add = half_adder(carry, first_half_add.first);
        result[i] = second_half_add.first;
        carry = OR(first_half_add.second, second_half_add.second);
    }
    
    return result;

}