#pragma once

#include "vex.h"

using namespace vex;

class Odom
{
    private:
    float x_pos, y_pos;

    public:

    float get_current_X_position(float x_pos);
    float get_current_Y_position(float y_pos);
    void set_position(float x_pos, float y_pos);

};