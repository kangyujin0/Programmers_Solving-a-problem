#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int slice = 7;
    answer = n/slice;
    if(n%slice != 0){
        answer += 1;
    }
    return answer;
}