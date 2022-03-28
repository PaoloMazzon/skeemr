/// \file Context.h
/// \author Paolo Mazzon
/// \brief Context for skeemr
#pragma once
#include "skeemr/Structs.h"
#include "skeemr/SchemeIO.h"

/// \brief Things most parts of skeemr need to operate
struct Sk_Context {
	Sk_Scheme scheme;
};

/// \brief Creates a skeemr context
Sk_Context sk_ContextInit();

/// \brief Destroys a skeemr context
void sk_ContextDestroy(Sk_Context ctx);