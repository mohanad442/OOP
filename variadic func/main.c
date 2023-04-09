#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000
int  sum (int count,...)
{
    va_list array;
    va_start(array, count);
    int sum = 0;
    while(count--)
    {
         sum += va_arg(array, int);
    }
    return sum;
}

int min(int count,...) {
    va_list array;
    va_start(array, count);
    int min = MAX_ELEMENT;
    while(count--)
    {
        int num = va_arg(array, int);
        if (num < min)
         min = num;
    }
    return min;
}

int max(int count,...) {
    va_list array;
    va_start(array, count);
    int max = MIN_ELEMENT;
    while(count--)
    {
        int num = va_arg(array, int);
        if (num > max)
        {
            max = num;
        }

    }
    return max;
}

int main()
{

    int x;
    x = min(6,3,1,2,4,8,0);
    printf("%d",x);

    return 0;
}
