/**
 * @file Activity1.c
 * @author Tarun Maturi
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include<util/delay.h>
void car_sensor_led()
{
    
DDRD|=(1<<PD7);
DDRD&=~(1<<PD1);
PORTD|=(1<<PD1);
DDRD&=~(1<<PD4);
PORTD|=(1<<PD4);

}
