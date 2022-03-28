/// \file Skeemr.c
/// \author Paolo Mazzon
#include "skeemr/Skeemr.h"
#include "skeemr/Context.h"

void sk_Begin(Sk_EngineConfig *config) {
	Sk_Context ctx = sk_ContextInit();

	// TODO: Run the engine

	sk_ContextDestroy(ctx);
}