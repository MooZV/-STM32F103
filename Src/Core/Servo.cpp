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
    // ������ʱ��
    HAL_TIM_PWM_Start(this->tim,this->channel);

//    HAL_Delay(6000);// ����ʮ��
    setRadian(0);
}

void Servo::setPwm(int pwm) {
    __HAL_TIM_SET_COMPARE(this->tim,this->channel,abs(pwm));
}

void Servo::setRadian(double rad) {
    // ���ݻ��� ����PWM
    int pwm = SERVO_INIT - rad*SERVO_K;
    setPwm(pwm);
}

/*
 * ����ǰ��ת�ǻ�ȡ���ת��
 * ʹ��4���������
 */
double Servo::getServoRad() {
    return -2.724 * pow(delta,4)
        - 3.575 * pow(delta,3)
        + 0.7252 * pow(delta,2)
        + 2.493 * delta
        + 0.01863;
}
/*
 * ��ȡ�����ǰת��
 *
 */
double Servo::getRadian() {
    return delta;
}