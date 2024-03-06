#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int k) {
    int answer = 0;
    char str[8];
       
    sprintf(str, "%d", num);
    
    for(int i=0; i<strlen(str); i++){
        if(str[i] - '0' == k){
            answer = i+1;
            break;
        }
        if(str[i] - '0' != k){
            answer = -1;
        }
    }
    return answer;
}