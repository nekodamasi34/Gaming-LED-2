#include "mbed.h"
#include "math.h"

PwmOut red(D10);
PwmOut green(D11);
PwmOut blue(D12);

AnalogIn s(A0);

int i;

void wait_()
{
    wait_ms( s.read() * 10);
}

int main() {

    red.period(0.0005);
    green.period(0.0005);
    blue.period(0.0005);

    while(1) {

        for(i = 0; i <= 100; i++){
            red   = 1.00;
            green = i * 0.01;
            wait_();
            // printf("red_ = %.2lf green = %.2lf blue = %.2lf\n\r",red_,green_,blue_);
        }

        for(i = 0; i <= 100; i++){
            red   = 1.00 - (i * 0.01);
            green = 1.00;
            wait_();
        }

        for(i = 0; i <= 100; i++){
            blue  = i * 0.01;
            green = 1.00;
            wait_();
        }

        for(i = 0; i <= 100; i++){
            blue  = 1.00;
            green = 1 - (i * 0.01);
            wait_();
        }

        for(i = 0; i <= 100; i++){
            blue = 1.00;
            red  = i * 0.01;
            wait_();
        }

        for(i = 0; i <= 100; i++){
            blue = 1.00 - (i * 0.01);
            red  = 1.00;
            wait_();
        }

    }
    
}
