#include <kipr/wombat.h>

int main()
{
    printf("NBA 2K 23");
    motor(3, 100);
    motor(0,0);
    msleep(1450);
    motor(0,100);
    motor(3,100);
    msleep(4200);
    motor(0,100);
    motor(3,0);
    msleep(1300);
    motor(0,100);
    motor(3,100);
    msleep(600);
    motor(0,100);
    motor(3,0);
    msleep(1600);
    motor(0,100);
    motor(3,100);
    msleep(14000);
    motor(0,100);
    motor(3,100);
    msleep(1300);
    ao();
    return 0;
}
