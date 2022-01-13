// Copyright 2022 peepeetee (@peepeetee)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
    K00, K01, K02, K03, K04, \
    K10, K11, K12, K13, K14, \
    K20, K21, K22, K23, K24, \
    K30, K31, K32, K33, \
    K40, K41, K42, K43, K53, \
    K50, K51, K52  \
) { \
    { K00, K01, K02, K03, K04 }, \
    { K10, K11, K12, K13, K14 }, \
    { K20, K21, K22, K23, K24 }, \
    { K30, K31, K32, K33, XXX }, \
    { K40, K41, K42, K43, XXX }, \
    { K50, K51, K52, K53, XXX }, \
}

// generated by KBFirmware JSON to QMK Parser
// https://noroadsleft.github.io/kbf_qmk_converter/
