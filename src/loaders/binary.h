//
//  binary.h
//  AnsiLove/C
//
//  Copyright (C) 2011-2016 Stefan Vogt, Brian Cassidy, Frederic Cambus.
//  All rights reserved.
//
//  This source code is licensed under the BSD 2-Clause License.
//  See the file LICENSE for details.
//

#include "../ansilove.h"

#ifndef binary_h
#define binary_h

void binary(unsigned char *inputFileBuffer, int32_t inputFileSize, char *output, char *retinaout, int32_t columns, char *font, int32_t bits, bool icecolors, bool createRetinaRep);

#endif

