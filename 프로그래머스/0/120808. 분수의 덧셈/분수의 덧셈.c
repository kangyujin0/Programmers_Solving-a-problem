#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int a, int b){
        if(b == 0)
            return a;
        return gcd(b, a%b);
    }

void addf(int numer1, int denom1, int numer2, int denom2, int *result){
     int res_numer, res_denom;
        
     res_numer = numer1*denom2+numer2*denom1;
     res_denom = denom1*denom2;
    
     int res_gcd = gcd(res_numer, res_denom);
   
     result[0] = res_numer / res_gcd;
     result[1] = res_denom / res_gcd;
}
int* solution(int numer1, int denom1, int numer2, int denom2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(2 * sizeof(int));
    
    addf(numer1, denom1, numer2, denom2, answer);
    return answer;
}