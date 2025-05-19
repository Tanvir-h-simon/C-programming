#include <stdio.h>
#define array_size 5

//     #include <stdio.h>
    
//     int main() {
//         int array[5] = {10, 20, 30, 40, 50};
//         int i;
//         for (i = 0; i < 5; i++) {
//             printf("array[%d] is %d\n", i, array[i]);
//         }
//         return 0;
//     }
// }

int main()
{
    int array[array_size]={10,20,30,40,50};
    int i;
    for (i=0; i<array_size; i++)
        printf("array[%d] is %d\n", i, array[i]);
    return 0;


}