#include "cpp_cpu_sim.hpp"

byte byte_ripple_carry_adder(byte a, byte b, Bool carry) {
    byte result;
    auto first_half_add = half_adder(a[0], b[0]);
    auto second_half_add = half_adder(carry, first_half_add.first);
    result[0] = second_half_add.first;
    carry = OR(first_half_add.second, second_half_add.second);

    for (int i = 1; i < 8; i++) {
        first_half_add = half_adder(a[i], b[i]);
        second_half_add = half_adder(carry, first_half_add.first);
        result[i] = second_half_add.first;
        carry = OR(first_half_add.second, second_half_add.second);
    }
    
    return result;
