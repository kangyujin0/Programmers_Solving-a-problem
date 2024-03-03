#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = 0;
    double num3 = (double)num1/(double)num2;
    int num4 = num3*1000;
    answer = num4;
    return answer;
}