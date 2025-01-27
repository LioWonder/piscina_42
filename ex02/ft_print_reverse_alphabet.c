#include <unistd.h>

void ft_print_reverse_alphabet(){
char letras;

for(letras = 'z'; letras >='a'; letras--){
	write(1,&letras,1);
}  

}

