//
// Created by MooZV on 2021/1/29.
//

#ifndef ROBOTV6_PROTOCOL_H
#define ROBOTV6_PROTOCOL_H

/**
 * 协议文件
 * 协议头
 * 协议类型
 * 协议的长度
 * 温度
 * 三轴加速度
 * 三轴角速度
 * 三轴地磁
 * 线速度
 * 角速度
 * 协议结尾
 */
#define FLAG_HEAD0 0xce
#define FLAG_HEAD1 0xfa
#define FLAG_TAIL 0xad

#define TYPE_UPLOAD 0x01;
#define TYPE_RECEIVE 0x02;
#define TYPE_IMU 0x03;

#pragma pack(1)
 struct TXProtocol1{
     // 帧头信息
     uint8_t head0;
     uint8_t head1;
     uint8_t type;
     uint8_t len;

     short beta;
     short velocity;
     short angular;
     //short temp;

     short mx;
     short my;
     short mz;

     // 协议尾部
     short code;

 };

struct TXProtocol2{
    // 帧头信息
    uint8_t head0;
    uint8_t head1;
    uint8_t type;
    uint8_t len;

    //short temp;

    short ax;
    short ay;
    short az;

    short gx;
    short gy;
    short gz;

    // 协议尾部
    short code;

};

#endif //ROBOTV6_PROTOCOL_H
