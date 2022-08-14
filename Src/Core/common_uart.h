
// Created by MooZV on 2020/6/8.
//

#ifndef ROBOT4WD_COMMON_UART_H
#define ROBOT4WD_COMMON_UART_H

#ifdef __cplusplus
extern "C" {
#endif
#include "usart.h"
#include "stm32f1xx_hal.h"


extern DMA_HandleTypeDef hdma_usart1_rx;
extern UART_HandleTypeDef huart1;
extern UART_HandleTypeDef huart2;
extern UART_HandleTypeDef huart3;

//// ��ʼ��
void common_uart_init();

void common_uart_idle_handle(UART_HandleTypeDef *huart1);

void common_uart1_send(uint8_t *data, uint16_t size);

void common_uart3_send(uint8_t *data, uint16_t size);

__weak void common_uart_idle_callback(uint8_t receive_buf[],uint16_t receive_len);


#ifdef __cplusplus
}
#endif

#endif //ROBOT4WD_COMMON_UART_H
