#include <unistd.h>

void ft_is_negative(int n){
char resp;

if(n>=0){
resp ='P';
}
else{
resp ='N';

}
write(1,&resp,1);

}
