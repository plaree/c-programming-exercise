#include <stdio.h>
void swap(int *,int *);
int main() {
     
     int a = 9;
     int b = 1;
     swap(&a,&b);
     printf("%d %d\n",a,b);
    return 0;
}
void swap(int * a, int * b){
    int tmp = * a;
    * a = * b;
    * b = tmp;
}

// you will see the why we need pointers with these 2 codes!!
//---------------------------------------------------------------------\\ 

//#include <stdio.h>
/*void swap(int,int);
int main() {
    
     int a = 9;
     int b = 1;
     swap(a,b);
     printf("%d %d\n",a,b);
    return 0;
}
void swap(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
}
*/

// actually, to fix that problem we can put the print function in swap function tho, 
// but this is just for a scenerio, so we will pretend like we can not!!
//when we use pointers, we do the the operations on the memory, 
//with that we can take the values out o fthe functions!!  