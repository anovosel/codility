// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

struct Results solution(int A[], int N, int K) {
    struct Results result;
    // write your code in C99 (gcc 4.8.2)
    result.A = (int *)calloc(N, sizeof(int));
    result.N = N;
    
    for (int i = 0; i < N; i++) {
        result.A[(i+K)%N] = A[i];
    }
    
    return result;
}