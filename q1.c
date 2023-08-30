#include <stdio.h>
#include <math.h>
// ข้อ1
int main(){
    char strn[100] = {'@', '#', '&', '+', '-','*','/'};
    for (int i =1; i <8; ++i){printf("%c = %x\n",strn[i],strn[i]);}
    return 0;
}
 



