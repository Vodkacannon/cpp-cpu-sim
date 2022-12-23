#include "cpp-cpu-sim.hpp"

Bool NOT(Bool a) {
    if (a == Bool::True) {
        return Bool::False;
    } else {
        return Bool::True;
    }
}