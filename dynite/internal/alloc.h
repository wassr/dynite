/*
 * Copyright 2025 Noel Atzwanger
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#pragma once

#include <stdlib.h>

#define DYN_ALLOC(size)        malloc(size)
#define DYN_REALLOC(ptr, size) realloc(ptr, size)
#define DYN_FREE(ptr)          free(ptr)
