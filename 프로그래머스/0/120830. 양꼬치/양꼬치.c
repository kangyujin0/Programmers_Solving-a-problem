#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    int d= n/10;    
 
    answer = n*12000 + k*2000 - d*2000;
           
    return answer;
}