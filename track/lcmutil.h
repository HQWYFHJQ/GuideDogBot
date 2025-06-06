#ifndef LCMUTIL_H
#define LCMUTIL_H
#include <iostream>
#include <QString>
#include <lcm/lcm-cpp.hpp>
#include "robot_control_lcmt.hpp"

class lcmUtil
{
public:
    lcmUtil();
    void send(float v_des[3],int mode,float step_height,float stand_height,float rpy_des[]);
    robot_control_lcmt ctl; 
};

#endif // LCMUTIL_H
