#include <stdio.h>

int solution(int N) {
	int max_gap_size = 0;
	int gap_size = 0;
	int binary_digit = 0;
	
	while (binary_digit == 0 && N > 0) {
		binary_digit = N % 2;
		N /= 2;
	}

	if (N == 0) {
		return 0;
	}

	do {
		binary_digit = N % 2;
		N /= 2;

		if (binary_digit == 0) {
			gap_size++;

			if (gap_size > max_gap_size) {
				max_gap_size = gap_size;
			}
		} else {
			gap_size = 0;
		}
	} while (N > 0);

	return max_gap_size;
}

int main(int argc, char** argv) {
	int n;
	int longest_gap;

	printf("Please enter n:");
	scanf("%d", &n);

	longest_gap = solution(n);
	printf("Longest gap in binary representation of n: %d\n", longest_gap);
	return 0;
}