#include<xc.h>
#include<stdint.h>
uint16_t add_two_numbers(uint8_t num1 , uint8_t num2 ){
    return num1 + num2 ;
}
void main(){
    uint8_t number1 = 15 ;
    uint8_t number2 = 20 ;
    uint16_t result ;
    result = add_two_numbers ( number1 , number2 );
    while(1){
        
    }
}