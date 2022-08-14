//
// Created by MooZV on 2021/1/29.
//

#ifndef ROBOTV6_ENCODER_H
#define ROBOTV6_ENCODER_H


#include <stm32f1xx_hal.h>

class Encoder {
public:
    /**
     * @param tim   定时器
     * @param channel   通道
     * @param direction  用于调整方向的
     */
    Encoder(TIM_HandleTypeDef *tim,uint32_t channel,int direction);
    ~Encoder();

    TIM_HandleTypeDef *tim;
    uint32_t channel;
    int direction;

    /**
     * 初始化
     */
    void init();
    /**
     * @return 读取编码器数据
     */
    short read();
};


#endif //ROBOTV6_ENCODER_H
