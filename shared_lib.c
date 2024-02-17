#include "cycletime.h"

unsigned int cycle_count() {
    return get_cyclecount();
}

void init_ctr(int32_t reset, int32_t en_div) {
    init_counters(reset, en_div);
}