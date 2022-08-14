//
// Created by MooZV on 2021/1/29.
//

#ifndef ROBOTV6_ROBOT_H
#define ROBOTV6_ROBOT_H

# ifdef __cplusplus
    extern "C" {
#endif
/**
 *  相当于是一个桥梁, C 能够 调用CPP
 */

/**
 * 机器人初始化
 */
void RobotInit();
/**
 * 机器人心跳: 永真循环
 */
void RobotTick();


#ifdef __cplusplus
};
#endif


#endif //ROBOTV6_ROBOT_H
