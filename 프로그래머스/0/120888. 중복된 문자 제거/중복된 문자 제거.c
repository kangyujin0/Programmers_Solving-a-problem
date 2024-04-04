#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_str) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_str);
    char* answer = (char*)malloc(len+1);    
    int new_len = 0;
    
    for (int i = 0; i < len; i++) {
        bool same = false;
        for (int j = 0; j < new_len; j++) {
            if (answer[j] == my_str[i]) {
                same = true;
                break;
            }
        }
        if (!same) {
            answer[new_len++] = my_str[i];
        }
    }

    answer[new_len] = '\0'; // 새로운 문자열의 끝을 나타내는 널 문자 추가
    return answer;
}