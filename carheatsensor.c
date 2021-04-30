/**
 * @file carheatsensor.c
 * @author Tarun Maturi
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"
#include "Activity4.h"
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
 car_sensor_led();
 InitADC();
 uint16_t temp;
 timer();
 UARTinit(103);
 char data;
  while(1)
    {
        if(!(PIND&(1<<PD4)))
        {
            if(!(PIND&(1<<PD1)))
            {
                PORTD|=(1<<PD7);
                _delay_ms(200);
                temp= ReadADC(0);
                pulse_width(temp);
                UARTwritecharacter(data);
            }
            else
            {
                PORTD&=~(1<<PD7);
            }
        }
        else
        {

            PORTD&=~(1<<PD7);

        }
    }
    return 0;
}

