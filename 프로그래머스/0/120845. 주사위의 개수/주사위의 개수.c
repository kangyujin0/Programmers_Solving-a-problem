#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// box_len은 배열 box의 길이입니다.
int solution(int box[], size_t box_len, int n) {
    int answer = 0;
    for(int i=0; i<3; i++){
        box[i] = box[i]/n;
    }
    answer = (box[0] * box[1] * box[2]);
    return answer;
}