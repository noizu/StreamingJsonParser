
#include "array_trie.h"

noizu_trie_a _a_trie[] = {
	{0, 0, 0, 0},
	{'*', 0, 2, 0},
	{'c', 3, 71, 0},
	{'d', 4, 9, 0},
	{'e', 5, 23, 0},
	{'f', 6, 29, 0},
	{'o', 7, 41, 0},
	{'r', 8, 49, 0},
	{'t', 0, 65, 0},
	{'e', 0, 10, 0},
	{'g', 0, 11, 0},
	{'r', 0, 12, 0},
	{'e', 0, 13, 0},
	{'e', 0, 14, 0},
	{'s', 0, 15, 0},
	{'_', 0, 16, 0},
	{'c', 0, 17, 0},
	{'e', 0, 18, 0},
	{'l', 0, 19, 0},
	{'s', 0, 20, 0},
	{'i', 0, 21, 0},
	{'u', 0, 22, 0},
	{'s', 0, 0, JV_DEGREES_CELSIUS},
	{'n', 0, 24, 0},
	{'a', 0, 25, 0},
	{'b', 0, 26, 0},
	{'l', 0, 27, 0},
	{'e', 0, 28, 0},
	{'d', 0, 0, JK_ENABLED},
	{'e', 30, 35, 0},
	{'i', 0, 31, 0},
	{'e', 0, 32, 0},
	{'l', 0, 33, 0},
	{'d', 0, 34, 0},
	{'s', 0, 0, JK_FIELDS},
	{'a', 0, 36, 0},
	{'t', 0, 37, 0},
	{'u', 0, 38, 0},
	{'r', 0, 39, 0},
	{'e', 0, 40, 0},
	{'d', 0, 0, JK_FEATURED},
	{'n', 42, 48, 0},
	{'p', 0, 43, 0},
	{'t', 0, 44, 0},
	{'i', 0, 45, 0},
	{'o', 0, 46, 0},
	{'n', 0, 47, 0},
	{'s', 0, 0, JK_OPTIONS},
	{'e', 0, 0, JK_ONE},
	{'e', 0, 50, 0},
	{'l', 0, 51, 0},
	{'a', 0, 52, 0},
	{'t', 0, 53, 0},
	{'i', 0, 54, 0},
	{'v', 0, 55, 0},
	{'e', 0, 56, 0},
	{'_', 0, 57, 0},
	{'h', 0, 58, 0},
	{'u', 0, 59, 0},
	{'m', 0, 60, 0},
	{'i', 0, 61, 0},
	{'d', 0, 62, 0},
	{'i', 0, 63, 0},
	{'t', 0, 64, 0},
	{'y', 0, 0, JV_RELATIVE_HUMIDITY},
	{'h', 66, 68, 0},
	{'w', 0, 67, 0},
	{'o', 0, 0, JK_TWO},
	{'r', 0, 69, 0},
	{'e', 0, 70, 0},
	{'e', 0, 0, JK_THREE},
	{'o', 0, 72, 0},
	{'n', 0, 73, 0},
	{'t', 0, 74, 0},
	{'e', 0, 75, 0},
	{'n', 0, 76, 0},
	{'t', 0, 77, 0},
	{'s', 0, 0, JK_CONTENTS}
};


noizu_trie_a* a_trie() {
	return _a_trie;
}