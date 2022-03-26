/// \file Context.h
/// \author Paolo Mazzon
/// \brief Context for skeemr
#pragma once
#include <chibi/eval.h>
#include "skeemr/Structs.h"

/// \brief Things most parts of skeemr need to operate
struct Sk_Context {
	sexp chibi; ///< Chibi-Scheme context
};

/// \brief Creates a skeemr context
Sk_Context sk_ContextInit();

/// \brief Destroys a skeemr context
void sk_ContextDestroy(Sk_Context ctx);