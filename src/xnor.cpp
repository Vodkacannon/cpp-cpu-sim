#include "inc/cpp_cpu_sim.hpp"

Bool XNOR(Bool a, Bool b) {
    return NOT(XOR(a, b));
}