#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int flag = 0;
    for (int i=0; i<numbers_len; i++){
        for (int j=0; j<numbers_len; j++){
            if (numbers[i] < numbers[j]){
                flag = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = flag;
            }
        }
    }
    answer = (numbers[numbers_len-1]) * (numbers[numbers_len-2]);
    return answer;
}