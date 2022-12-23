#include "cpp-cpu-sim.hpp"

Bool NOR(Bool a, Bool b)
{
    return NOT(OR(a, b));
}