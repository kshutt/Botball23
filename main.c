#include <kipr/wombat.h>
int main()
{
    create_connect(); //connects to create
   
    //wait_for_light(0); // lets you callabrate the light
   
    //shut_down_in(119); //shuts down in 2 minutes
                     
    enable_servos();  // starts the servos
    
    set_servo_position(1,900);// opens claw
    
    create_drive_direct(400,400);
    msleep(3000);
        
    set_servo_position(1,1900);// closes claw
    msleep(1000);
       
    
 
    
   
    
    
  
   
    
    
    disable_servos();
    create_stop();
    create_disconnect();
    return 0;
}

