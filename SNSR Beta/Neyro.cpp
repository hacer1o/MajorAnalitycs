#pragma once
#include <random>
#include <iostream>
#include <thread>
using namespace std;
inline int is_srand = 0;
inline int random_number = 1;
inline int layer1(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10, int n11, int n12, int n13, int n14, int n15, int n16, int n17, int n18, int n19, int n20, int n21, int n22, int n23, int n24, int n25, int n26, int n27, int n28, int n29, int n30, int w1, int w2, int w3, int w4, int w5, int w6, int w7, int w8, int w9, int w10, int w11, int w12, int w13, int w14, int w15, int w16, int w17, int w18, int w19, int w20, int w21, int w22, int w23, int w24, int w25, int w26, int w27, int w28, int w29, int w30, int q) {
	return n1 * w1 + n2 * w2 + n3 * w3 + n4 * w4 + n5 * w5 + n6 * w6 + n7 * w7 + n8 * w8 + n9 * w9 + n10 * w10 + n11 * w11 + n12 * w12 + n13 * w13 + n14 * w14 + n15 * w15 + n16 * w16 + n17 * w17 + n18 * w18 + n19 * w19 + n20 * w20 + n21 * w21 + n22 * w22 + n23 * w23 + n24 * w24 + n25 * w25 + n26 * w26 + n27 * w27 + n28 * w28 + n29 * w29 + n30 * w30 + q;
}
inline int layer2(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10, int w1, int w2, int w3, int w4, int w5, int w6, int w7, int w8, int w9, int w10, int q) {
	return n1 * w1 + n2 * w2 + n3 * w3 + n4 * w4 + n5 * w5 + n6 * w6 + n7 * w7 + n8 * w8 + n9 * w9 + n10 * w10 + q;
}
inline int layer3(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10, int w1, int w2, int w3, int w4, int w5, int w6, int w7, int w8, int w9, int w10, int q) {
	return n1 * w1 + n2 * w2 + n3 * w3 + n4 * w4 + n5 * w5 + n6 * w6 + n7 * w7 + n8 * w8 + n9 * w9 + n10 * w10 + q;
}
inline int layer4(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int w1, int w2, int w3, int w4, int w5, int w6, int w7, int w8, int q) {
	return n1 * w1 + n2 * w2 + n3 * w3 + n4 * w4 + n5 * w5 + n6 * w6 + n7 * w7 + n8 * w8 + q;
}
inline int layer5(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10, int n11, int n12, int n13, int n14, int n15, int w1, int w2, int w3, int w4, int w5, int w6, int w7, int w8, int w9, int w10, int w11, int w12, int w13, int w14, int w15, int q) {
	return n1 * w1 + n2 * w2 + n3 * w3 + n4 * w4 + n5 * w5 + n6 * w6 + n7 * w7 + n8 * w8 + n9 * w9 + n10 * w10 + n11 * w11 + n12 * w12 + n13 * w13 + n14 * w14 + n15 * w15 + q;
}
//Random generator
inline void getRandomNumber(int min, int max) {
	if (!is_srand || is_srand > 100) {
		is_srand = 1;
		srand(time(NULL));
	}
	++is_srand;
	random_number = min + rand() % max;
}
inline int ran() {
	int random;
	int is_vid;
	getRandomNumber(1, 10);
	random = random_number;
	getRandomNumber(0, 10);
	is_vid = random_number;
	if (is_vid > 5) {
		random *= -1;
	}
	return random;
}