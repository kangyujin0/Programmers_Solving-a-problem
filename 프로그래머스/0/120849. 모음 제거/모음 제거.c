#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_str) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(strlen(my_str));
    int idx = 0;
    for(int i=0; i < strlen(my_str); i++){
        if(my_str[i] != 'a' && my_str[i] != 'e' && 
           my_str[i] != 'i' && my_str[i] != 'o' && my_str[i] != 'u'){
            answer[idx++] = my_str[i];
        }
    }
    answer[idx] = '\0';
    
    return answer;
}