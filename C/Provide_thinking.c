//#include <...>    ->  System Library 에 있는 헤더 파일 참조
//#include "..."    ->  사용자 정의 헤더 파일 참조

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <sys/timeb.h>
#include "Provice_thinking.h"


int main ()
{
    int a[5] = {100, 200, 300, 400, 500};
    printf("A+0 = %#p \n", a+0);
    printf("A+1 = %#p \n", a+1);
    printf("A+2 = %#p \n", a+2);
    printf("A+3 = %#p \n", a+3);
    printf("A+4 = %#p \n", a+4);

    return 0;
}
