#pragma once

#include "quantum.h"

#if defined(KEYBOARD_keychron_k3_white_ansi)
    #include "ansi.h"
#elif defined(KEYBOARD_keychron_k3_white_iso)
    #include "iso.h"
#endif