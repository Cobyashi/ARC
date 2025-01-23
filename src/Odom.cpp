#include "Odom.h"

Odom::Odom(rotation forward1, rotation forward2, rotation lateral):
forward1(forward1),
forward2(forward2),
lateral(lateral)
{}


float Odom::get_X_position(){
    return x_pos;
}

float Odom::get_Y_position(){
    return y_pos;
}

void Odom::set_X_position(rotation lateral){
    x_pos += lateral.position(degrees);
}

void Odom::set_Y_position(rotation forward){
    y_pos += forward.position(degrees);
}

void Odom::reset_position(rotation lateral){
    lateral.setPosition(0, degrees);
}

void Odom::reset_position(rotation forward1, rotation forward2){
    forward1.setPosition(0, degrees);
    forward2.setPosition(0, degrees);
}

