#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i, j;
    
    for(i = 1; i <= n; i++){
        int cnt = 0;
        for(j = 1; j <= i; j++){
            if(i % j == 0) cnt++;
        }
        if(cnt > 2) answer++;
    }
    return answer;
}