#pragma once

#include "vex.h"

using namespace vex;

class Odom
{
    private:
    float x_pos, y_pos;

    public:

    float get_current_X_position(rotation lateral);
    float get_current_Y_position(rotation forward);
    void go_to_position(float x_pos, float y_pos, rotation forward, rotation lateral);
    
    void reset_position(rotation sensor);
    void reset_position(rotation sensor1, rotation sensor2);


};