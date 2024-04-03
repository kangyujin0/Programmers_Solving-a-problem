#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* str1, const char* str2) {
    int str1_len = strlen(str1);
    int str2_len = strlen(str2);
    int answer = 2;
    
    for(int i = 0; i <= str1_len - str2_len; i++) {
        char a[100] = ""; // 수정된 부분: 문자열을 초기화
        for(int j = 0; j < str2_len; j++) {
            a[j] = str1[i+j]; // 수정된 부분: 문자를 복사
        }
        a[str2_len] = '\0'; // 문자열 끝에 NULL 문자를 추가
        if(strcmp(a, str2) == 0) {
            answer = 1;
            break;
        }
    }
    return answer;
}