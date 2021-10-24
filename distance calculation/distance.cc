#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

double cal_dis(double speed, double time){
    double timeMilliseconds=time/8192.0;
    printf("\n Time(Milliseconds) : %f" ,timeMilliseconds);
    printf("\n Speed(ft/ms) : %f", speed);

    return speed*timeMilliseconds;

}

int main(){
    double speed = 1.128609; //speed of sound in air in feet per millisecond
    srand(time(0));
    double incSinceTimeSent = rand()%8192; //produces random time increment to simulate time of flight
    printf("\n The calculated Distance(ft) : %f", cal_dis(speed,incSinceTimeSent));

    return 0;
}