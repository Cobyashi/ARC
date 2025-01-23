#pragma once

#include "vex.h"

using namespace vex;

class Odom
{
    private:
    float x_pos, y_pos;
    rotation forward1;
    rotation forward2;
    rotation lateral;

    public:

    Odom(rotation forward1, rotation forward2, rotation lateral);


    float get_X_position();
    float get_Y_position();
    void set_X_position(rotation lateral);
    void set_Y_position(rotation forward);
    
    void reset_position(rotation lateral);
    void reset_position(rotation forward1, rotation forward2);

    
};