//
// Created by MooZV on 2021/1/29.
//

#ifndef ROBOTV6_ENCODER_H
#define ROBOTV6_ENCODER_H


#include <stm32f1xx_hal.h>

class Encoder {
public:
    /**
     * @param tim   ��ʱ��
     * @param channel   ͨ��
     * @param direction  ���ڵ��������
     */
    Encoder(TIM_HandleTypeDef *tim,uint32_t channel,int direction);
    ~Encoder();

    TIM_HandleTypeDef *tim;
    uint32_t channel;
    int direction;

    /**
     * ��ʼ��
     */
    void init();
    /**
     * @return ��ȡ����������
     */
    short read();
};


#endif //ROBOTV6_ENCODER_H
