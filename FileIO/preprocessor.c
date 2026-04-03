// Preprocessor
// #include <stdio.h>	// printf() & scanf()
// # => Prepocessor
// #include => Prepocessor Directive
// #include <math.h>	// sqrt() & cbrt()
// #include <limits.h>	// INT_MAX & INT_MIN

#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(){
	// printf("Hello World\n"); // without #include <stdio.h>, printf() & scanf() => not working
	// float x = sqrt(2);
	// printf("%f\n", x);
	// double y = sqrt(3);
	// printf("%lf\n", y);
	// int a = __INT_MAX__;
	// printf("%d\n", a);	// 2147483647
	// int p = 2147483647; // If we increase the value, it create an error message. // 2147483648
	// printf("%d\n", p);

	// // When we use #include <limits.h> header file
	// int b = INT_MAX;
	// printf("%d\n", b); // 2147483647
	// int c = INT_MIN;
	// printf("%d\n", c); // -2147483648

	// long d = LONG_MAX;
	// printf("%ld\n", d);
	// long e = LONG_MIN;
	// printf("%ld\n", e);
	return 0;
}

/*
	int -> 4 bytes -> 4x8 = 32 bits -> 2³² Options/Numbers
	Why 2³² Options/Numbers => Simple Permutation Concept
	=> 32 Choice of (0 & 1) thats why 2³² Options.
	Range => half positive and half negative
	'	  => -2^16 to 2^16-1 (include 0)

	long -> 8 bytes -> 8x8 = 64 bits -> 2^64 Options/Numbers
*/