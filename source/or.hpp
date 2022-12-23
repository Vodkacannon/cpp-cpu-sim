#include "cpp-cpu-sim.hpp"

Bool OR(Bool a, Bool b) {
    if (a == Bool::True) {
        return Bool::True;
    } else {
        if (b == Bool::True) {
            return Bool::True;
        } else {
            return Bool::False;
        }
    }
}