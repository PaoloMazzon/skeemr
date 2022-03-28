#include "skeemr/Skeemr.h"

int main() {
	Sk_EngineConfig config = {
			"src/main.scm"
	};
	sk_Begin(&config);
	return 0;
}
