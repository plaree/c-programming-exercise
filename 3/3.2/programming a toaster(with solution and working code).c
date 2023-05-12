#include <stdio.h>

int integer(int x, int arr[]) {
    int result = x * sizeof(int);

    if (result < 1000) {
        arr[0] = result;
        return 1;
    }

    if (result >= 1000 && result < 1000000) {
        int kb = result / 1000;
        int b = result % 1000;
        arr[0] = b;
        arr[1] = kb;
        return 2;
    }

    if (result >= 1000000) {
        int mb = result / 1000000;
        int kb = (result % 1000000) / 1000;
        int b = result % 1000;
        arr[0] = b;
        arr[1] = kb;
        arr[2] = mb;
        return 3;
    }
}

int character(int x, int arr[]) {
    int result = x * sizeof(char);

    if (result < 1000) {
        arr[0] = result;
        return 1;
    }

    if (result >= 1000 && result < 1000000) {
        int kb = result / 1000;
        int b = result % 1000;
        arr[0] = b;
        arr[1] = kb;
        return 2;
    }

    if (result >= 1000000) {
        int mb = result / 1000000;
        int kb = (result % 1000000) / 1000;
        int b = result % 1000;
        arr[0] = b;
        arr[1] = kb;
        arr[2] = mb;
        return 3;
    }
}

int shortNum(int x, int arr[]) {
    int result = x * sizeof(short);

    if (result < 1000) {
        arr[0] = result;
        return 1;
    }

    if (result >= 1000 && result < 1000000) {
        int kb = result / 1000;
        int b = result % 1000;
        arr[0] = b;
        arr[1] = kb;
        return 2;
    }

    if (result >= 1000000) {
        int mb = result / 1000000;
        int kb = (result % 1000000) / 1000;
        int b = result % 1000;
        arr[0] = b;
        arr[1] = kb;
        arr[2] = mb;
        return 3;
    }
}

int doubleNum(int x, int arr[]) {
    int result = x * sizeof(double);

    if (result < 1000) {
        arr[0] = result;
        return 1;
    }

    if (result >= 1000 && result < 1000000) {
        int kb = result / 1000;
        int b = result % 1000;
        arr[0] = b;
        arr[1] = kb;
        return 2;
    }

    if (result >= 1000000) {
        int mb = result / 1000000;
        int kb = (result % 1000000) / 1000;
        int b = result % 1000;
        arr[0] = b;
        arr[1] = kb;
        arr[2] = mb;
        return 3;
    }
}

int main(void) {
    int num;
    char type;
    scanf("%c %d", &type, &num);

    int arr[3];
    int size = 0;

    if (type == 'c') {
        size = character(num, arr);
    }
    if (type == 'i') {
        size = integer(num, arr);
    }
    if (type == 's') {
        size = shortNum(num, arr);
    }
    if (type == 'd') {
        size = doubleNum(num, arr);
    }

    // Print the result based on the array size
    if (size == 1) {
        printf("%d B\n", arr[0]);
    } else if (size == 2) {
        printf("%d KB and %d B\n", arr[1], arr[0]);
    } else if (size == 3) {
        printf("%d MB and %d KB and %d B\n", arr[2], arr[1], arr[0]);
    }

    return 0;
}

   
/* tutor's solution

#include <stdio.h>
 
int main(void){
    char c;
    int num;
    int spacePer;
    int memory;
    int mega, kilo, byte;
    
    scanf("%c", &c);
    scanf("%d", &num);
    
    if (c=='c') spacePer = sizeof(char);
    else if (c=='s') spacePer = sizeof(short);
    else if (c=='i') spacePer = sizeof(int);
    else spacePer = sizeof(double);
    
    memory = spacePer*num;
    mega = memory/1000000;
    kilo = (memory-mega*1000000)/1000;
    byte = memory-mega*1000000-kilo*1000;
    
    if (mega>0){
        printf("%d MB and %d KB and %d B", mega, kilo, byte);
    } else if (kilo>0){
        printf("%d KB and %d B", kilo, byte);
    } else{ 
        printf("%d B", byte);
    }
        
    return 0;
}

*/