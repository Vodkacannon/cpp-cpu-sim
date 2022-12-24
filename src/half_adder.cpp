#include <tuple>
#include "cpp_cpu_sim.hpp"

std::pair<Bool, Bool> half_add(Bool a, Bool b) {
    return std::make_pair(XOR(a, b), AND(a, b));
}