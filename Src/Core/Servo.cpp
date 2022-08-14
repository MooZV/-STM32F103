//
// Created by MooZV on 2021/1/29.
//
#include "config.h"
#include "Servo.h"
#include <math.h>

Servo::Servo(TIM_HandleTypeDef *tim, uint32_t channel) {
    this->tim = tim;
    this->channel = channel;
    this->delta = 0;
}

void Servo::init() {
    // 启动定时器
    HAL_TIM_PWM_Start(this->tim,this->channel);

//    HAL_Delay(6000);// 休眠十秒
    setRadian(0);
}

void Servo::setPwm(int pwm) {
    __HAL_TIM_SET_COMPARE(this->tim,this->channel,abs(pwm));
}

void Servo::setRadian(double rad) {
    // 根据弧度 计算PWM
    int pwm = SERVO_INIT - rad*SERVO_K;
    setPwm(pwm);
}

/*
 * 根据前轮转角获取舵机转角
 * 使用4次曲线拟合
 */
double Servo::getServoRad() {
    return -2.724 * pow(delta,4)
        - 3.575 * pow(delta,3)
        + 0.7252 * pow(delta,2)
        + 2.493 * delta
        + 0.01863;
}
/*
 * 获取舵机当前转角
 *
 */
double Servo::getRadian() {
    return delta;
}