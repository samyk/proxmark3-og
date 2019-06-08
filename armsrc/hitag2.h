//-----------------------------------------------------------------------------
// This code is licensed to you under the terms of the GNU GPL, version 2 or,
// at your option, any later version. See the LICENSE.txt file for the text of
// the license.
//-----------------------------------------------------------------------------
// Hitag2 emulation
//
// (c) 2009 Henryk Plötz <henryk@ploetzli.ch>
// (c) 2012 Roel Verdult
//-----------------------------------------------------------------------------

#ifndef HITAG2_H__
#define HITAG2_H__

#include <stdint.h>
#include <stdbool.h>
#include "hitag.h"

void SnoopHitag(uint32_t type);
void SimulateHitagTag(bool tag_mem_supplied, uint8_t* data);
void ReaderHitag(hitag_function htf, hitag_data* htd);
void WriterHitag(hitag_function htf, hitag_data* htd, int page);

#endif
