#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string);
    int* answer = (int*)malloc(len*sizeof(int));
    int tmp, count=0;
    
    for(int i=0; i<len; i++){
        if(my_string[i] >= '0' && my_string[i] <= '9'){
            answer[count++] = my_string[i] - '0';
        }
    }//문자열을 순회하며 숫자를 정수로 변환하여 동적 배열에 저장합니다
     //숫자는 '0'부터 '9' 사이의 아스키 코드 값입니다
    for(int i=0; i<count; i++){
        for(int j=i; j<count; j++){
            if(answer[i] > answer[j]){
                tmp = answer[i];
                answer[i] = answer[j];
                answer[j] = tmp;
            }
        }
    }
    return answer;
}