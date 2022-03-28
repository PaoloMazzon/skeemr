/// \file Structs.h
/// \author Paolo Mazzon
/// \brief Declares types in skeemr
#pragma once

/**************************** Structs ****************************/
typedef struct Sk_Context *Sk_Context;
typedef struct Sk_Scheme *Sk_Scheme;

/**************************** Types ****************************/

/// \brief Info the engine needs to start
typedef struct Sk_EngineConfig {
	const char *schemeEntryFile; ///< Entry file for chibi execution
} Sk_EngineConfig;