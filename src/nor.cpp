#include "inc/cpp_cpu_sim.hpp"

Bool NOR(Bool a, Bool b)
{
    return NOT(OR(a, b));
}