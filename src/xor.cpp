#include "inc/cpp_cpu_sim.hpp"

Bool XOR(Bool a, Bool b) {
    return OR(AND(NOT(a), b), AND(a, NOT(b)));
}