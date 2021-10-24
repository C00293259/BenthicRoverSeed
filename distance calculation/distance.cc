#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

double cal_dis(double speed, double time){
    double timeMilliseconds=time/8192;
    printf("\n Time(Milliseconds) : %f" ,timeMilliseconds);
    printf("\n Speed(ft/ms) : %f", speed);

    return speed*timeMilliseconds;

}

int main(){
    double speed = 1.128609; //speed of sound in air in feet per millisecond
    srand (time(NULL)); //intialize random seed
    double incSinceTimeSent = 8248; //variable changes for testing purposes
    printf("\n The calculated Distance(ft) : %f", cal_dis(speed,incSinceTimeSent));

    return 0;
}