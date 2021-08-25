//#include <...>    ->  System Library 에 있는 헤더 파일 참조
//#include "..."    ->  사용자 정의 헤더 파일 참조

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <sys/timeb.h>
#include <string.h>
#include "Provice_thinking.h"

typedef struct sA
{
    int a;
};


void main()
{
    struct sA obj1;
    struct sA *ptr;

    struct sA obj2[2] = {100, 200};

    obj1.a = 300;
    ptr = &obj1;

    printf("%d \n\n", obj1.a);
    printf("%d \n", ptr->a);
}
