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
     * ���ƶ��ת��
     * @param rad
     */
    void setRadian(double rad);
    /**
     * ����PWM
     * @param pwm
     */
    void setPwm(int pwm);
    /**
     * ����ǰ��ת�ǻ�ȡ���ת��
     */
     double getServoRad();

    /**
     * ��ȡǰ��ת��
     */
     double getRadian();
};


#endif //ROBOTV6_SERVO_H
