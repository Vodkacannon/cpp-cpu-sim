#include "cpp-cpu-sim.hpp"

Bool AND(Bool a, Bool b) {
    if (a == Bool::True) {
        if (b == Bool::True) {
            return Bool::True;
        }
    } else {
        return Bool::False;
    }
}