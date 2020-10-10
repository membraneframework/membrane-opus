#pragma once

#define MEMBRANE_LOG_TAG "Membrane.Opus.EncoderNative"
#include <membrane/log.h>
#include <opus/opus.h>

typedef struct _EncoderState UnifexNifState;
typedef UnifexNifState State;

struct _EncoderState {
  int output_size;
  OpusEncoder *encoder;
};

#include "_generated/encoder.h"
