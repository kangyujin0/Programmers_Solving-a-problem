#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int t) {
    int answer = 0;
    int tmp;
    for(int i=0; i<t; i++){
        n = n*2;        
    }
    answer = n;
    return answer;
}