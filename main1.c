#include <kipr/botball.h>
#include </home/root/Documents/KISS/Default User/tournament_file_Bot_A/include/comp_lib.h>
#include </home/root/Documents/KISS/Default User/tournament_file_Bot_A/include/L_Mechanism.h>
//#include </home/root/Documents/KISS/Default User/tournament_file_Bot_A/include/IR.h>
//#include </home/root/Documents/KISS/Default User/tournament_file_Bot_A/include/drive.h>
int burning_building = 1; //
int main()
{
    int target = buffer(4);

    if(analog(0) || analog(1) > white){

        slow_arm(prism2,slow);
        PID_gyro_drive(-600 * multiplier, .35 / multiplier);

        PID_gyro_drive(600 * multiplier, .35 / multiplier);
        move(600,600);
        while(buffer(4) <= 2000){


        }

        move(0,0);
        slow_hand(open,slow);
        slow_arm(down,slow);
        slow_hand(closed,fast);
        msleep(500);
        slow_arm(up,slow);

        // wait_for_light(3);

        PID_gyro_drive(600 * multiplier,1.90 / multiplier);


        turn_with_gyro(450 * multiplier,-90);
        square_up(black,350 * multiplier);
        //starting box
        move(600,660);
        while(buffer(4) <= 1450){}

        cube_verify();
        ao();

        slow_arm(prism2,slow);       //firefighter drop
        slow_hand(hand_prism_open,fast);
        ao();
        msleep(250);
        slow_arm(down,slow);
        PID_gyro_drive(600 * multiplier,.75 / multiplier);

        slow_hand(prism,slow);
        msleep(200);
        //slow_arm(up,slow);//firetruck combo
        //square_up(black,600);
        PID_gyro_drive(-500 * multiplier,.30 /multiplier);
        //square_up(black,600);


        //square_up(black,500); //this is the end of start with firefighter and truck
        if(burning_building == 1)
        {
            turn_with_gyro(400 * multiplier,45);
            msleep(250);
            move(600,630);
            msleep(3500);
            ao();

            slow_arm(down,fast);
            slow_hand(hand_prism_open,fast);
            PID_gyro_drive(-500*multiplier,1/multiplier);
            slow_arm(prism2,fast);

            slow_hand(closed,fast);
            slow_arm(up,fast);
            move(-155,155);
            msleep(1350);
            move(0,0);
            move(600,600);
            msleep(1000);
            move(0,0);




            ao();
            slow_arm(arm_fire,fast);
            slow_hand(open,fast);
            //turn_with_gyro(600,45);
            move(0,0);
            msleep(250);
            move(600,-600);
            msleep(1000);
            move(0,0);
            msleep(500);
            PID_gyro_drive(600*multiplier,2/multiplier);
            while(buffer(4)<1400){
                mav(left_motor,.35*(analog(3)));
                mav(right_motor,.35*(3400-analog(3)));

            }
            move(0,0);
            slow_arm(prism2,fast);
            PID_gyro_drive(-600*multiplier,1.25/multiplier);
            while(buffer(4)<1400){
                mav(left_motor,.15*(analog(3)));
                mav(right_motor,.15*(3400-analog(3)));

            }
            move(0,0);
             slow_hand(closed,fast);
            move(0,0);
            while(buffer(4) != 1500){
            if(buffer(4)<1500){
                move(50,50);
            }
            else if(buffer(4)>1500){
                move(-50,-50);
            }
            }
            move(0,0);
            slow_arm(up,slow);

        }
        else if(burning_building==2)
        {

            turn_with_gyro(400 * multiplier,45);
            msleep(250);
            move(300,-300);
            msleep(505);
            move(0,0);
            msleep(100);
            PID_gyro_drive(600*multiplier,7.5/multiplier);

            move(0,0);
            ao();
            slow_hand(hand_prism_open,fast);

            PID_gyro_drive(-500*multiplier,1/multiplier);
            slow_arm(prism2,fast);
            slow_hand(closed,fast);
            slow_arm(up,fast);
            move(-155,155);
            msleep(1350);
            move(0,0);
            move(600,600);
            msleep(500);

            move(0,0);
            slow_arm(arm_fire,fast);
            slow_hand(open,fast);
            PID_gyro_drive(-600*multiplier,.45/multiplier);
            turn_with_gyro(400*multiplier,45);
            while(buffer(4)<1400){
                mav(left_motor,.15*(analog(3)));
                mav(right_motor,.15*(3400-analog(3)));

            }
            move(0,0);
            slow_arm(prism2,fast);
            PID_gyro_drive(-600*multiplier,1.25/multiplier);
            while(buffer(4)<1400){
                mav(left_motor,.15*(analog(3)));
                mav(right_motor,.15*(3400-analog(3)));

            }
            move(0,0);
            slow_hand(closed,fast);
            move(0,0);
            while(buffer(4) != 1500){
            if(buffer(4)<1500){
                move(50,50);
            }
            else if(buffer(4)>1500){
                move(-50,-50);
            }
            }
            move(0,0);
            slow_arm(up,slow);


        }



    }
    return 0;
}
