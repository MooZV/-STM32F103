//
// Created by MooZV on 2021/1/29.
//

#ifndef ROBOTV6_WHEEL_H
#define ROBOTV6_WHEEL_H

#include "Motor.h"
#include "Encoder.h"
#include "PID.h"

class Wheel {
public:
    Wheel(Motor* motor,Encoder* encoder,PID* pid);
    ~Wheel();

    Motor* motor;
    Encoder* encoder;
    PID* pid;

    // �����������ת��
    float vel=0;
    /**
     * Ŀ���ٶ�
     */
     float targetVel=0;

     uint32_t lastUpdateTime;
public:
    void init();
    // ���ӵ�����
    void tick();
    /**
     * �������ӵ�ת��  m/s
     */
     void setVel(float vel);
     float getVel();
};


#endif //ROBOTV6_WHEEL_H
