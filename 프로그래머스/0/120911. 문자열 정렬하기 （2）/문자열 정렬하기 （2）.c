#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_str) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_str);
    char* answer = (char*)malloc(len+1);
    char temp;    
    strcpy(answer, my_str);
    
    for(int i=0; i<len; i++){
        if(answer[i] < 97){
            answer[i] += 32;
        }
    }    
    for(int j=0; j<len; j++){
        for(int k=0; k<len-1-j; k++){
            if(answer[k]>answer[k+1]){
                temp = answer[k];
                answer[k] = answer[k+1];
                answer[k+1] = temp;
            }
        }
    }
    return answer;
}