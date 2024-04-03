#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 0;
    int max = sides[0]; // 현재 가장 큰
    int semax, min = 0;
    
    for(int i=1; i<sides_len; i++){
        if(sides[i] > max){
            semax = max;
            max = sides[i];
        }else{
            if(sides[i] < semax){
                min = sides[i];
            }            
        }        
    }        
    if(max < semax+min) 
        answer = 1;
    else{
        answer = 2;
    }
    return answer;
}