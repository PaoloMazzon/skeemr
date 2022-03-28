/// \file SchemeIO.h
/// \author Paolo Mazzon
/// \brief Handles Scheme I/O
#pragma once
#include <chibi/eval.h>
#include "skeemr/Structs.h"

/// \brief Info needed to operate chibi scheme
struct Sk_Scheme {
	sexp chibi; ///< Chibi-Scheme context
};

/// \brief Creates a scheme context
Sk_Scheme sk_SchemeInit();

/// \brief Destroys a scheme context
void sk_SchemeDestroy(Sk_Scheme scm);