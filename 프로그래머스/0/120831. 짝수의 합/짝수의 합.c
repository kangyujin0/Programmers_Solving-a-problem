#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int a = n / 2;
    answer = a * (a + 1);
    return answer;
}