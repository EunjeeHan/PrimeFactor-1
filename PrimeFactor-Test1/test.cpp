#include "pch.h"
#include "../PrimeFactor/prime-factors.cpp"

TEST(PrimeFactors, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}