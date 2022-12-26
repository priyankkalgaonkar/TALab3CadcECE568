#include "mbed.h"

AnalogIn AnIn(A0);
DigitalOut led(LED1);

float x;

// main() runs in its own thread in the OS
int main()
{
    printf(" ADC demo code\r\n");
    while(1)
    {
        x=AnIn.read();
        printf("ADC0_Ch12=(%f)\r\n", x);
        wait_us(200000);
    }
}