// dragonfly.cpp : Defines the exported functions for the DLL application.
//

#include "dragonfly.h"

// int test()
// {
// 	return 42;
// }

#include "feat/wave-reader.h"
#include "online2/online-feature-pipeline.h"
#include "online2/online-gmm-decoding.h"
#include "online2/onlinebin-util.h"
#include "online2/online-timing.h"
#include "online2/online-endpoint.h"
#include "fstext/fstext-lib.h"
#include "lat/lattice-functions.h"
#include "lat/word-align-lattice-lexicon.h"

#define VERBOSE 0
