//
// Created by MooZV on 2021/1/29.
//

#ifndef ROBOTV6_SERVO_H
#define ROBOTV6_SERVO_H


class Servo {
public:
    double delta;
    Servo(TIM_HandleTypeDef *tim,uint32_t channel);
    ~Servo() = default;

private:
    TIM_HandleTypeDef *tim;
    uint32_t channel;

public:
    void init();
    /**
     * 控制舵机转向
     * @param rad
     */
    void setRadian(double rad);
    /**
     * 控制PWM
     * @param pwm
     */
    void setPwm(int pwm);
    /**
     * 根据前轮转角获取舵机转角
     */
     double getServoRad();

    /**
     * 获取前轮转角
     */
     double getRadian();
};


#endif //ROBOTV6_SERVO_H
