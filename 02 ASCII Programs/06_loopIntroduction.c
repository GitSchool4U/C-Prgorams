// How Loop Works??

#include <stdio.h>

int main()
{
    for (int i = 0; i <= 5; i++)
    {
        printf("%d \n", i);
    }
}

// i=0, 0<=5=>true, print=>0, i++
// i=1, 1<=5=>true, print=>1, i++
// i=2, 2<=5=>true, print=>2, i++
// i=3, 3<=5=>true, print=>3, i++
// i=4, 4<=5=>true, print=>4, i++
// i=5, 5<=5=>true, print=>5, i++
// i=6, 6<=5=>false, loop breaks!