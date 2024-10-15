#include "Odom.h"

float Odom::get_current_X_position(rotation lateral){
    return lateral.position(degrees);
}

float Odom::get_current_Y_position(rotation forward){
    return forward.position(degrees);
}

void Odom::go_to_position(float x_pos, float y_pos, rotation forward, rotation lateral){

}

void Odom::reset_position(rotation sensor){
    sensor.setPosition(0, degrees);
}

void Odom::reset_position(rotation sensor1, rotation sensor2){
    sensor1.setPosition(0, degrees);
    sensor2.setPosition(0, degrees);
}