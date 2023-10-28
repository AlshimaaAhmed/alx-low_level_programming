#include "main.h"
#include <math.h>

unsigned int binary_to_uint(const char *b){
double c= 0;
int i;
for(i=0; b[i]!='\0'; i++){
if(b[i]!='0' ||b[i]!='1')
return (0);
else{
if(b[i]==1)
c+=pow(2.0,(double)i);
}
}
return ((int)c);
}
