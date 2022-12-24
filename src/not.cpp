#include "inc/cpp_cpu_sim.hpp"

Bool NOT(Bool a) {
    if (a == Bool::True) {
        return Bool::False;
    } else {
        return Bool::True;
    }
}