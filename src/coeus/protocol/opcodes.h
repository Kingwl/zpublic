// Generate by the sword of core(核心之刃). DO NOT EDIT!
// Source : opcodes.h
// Comment : 在此处输入一些备注信息...

#ifndef __OPCODES_H__
#define __OPCODES_H__

#include <venus_net/network_common.h>

namespace Opcodes
{
    //注册登录(4 message)
    const static uint32 CSLoginReq    = 10001;   //登录请求
    const static uint32 SCLoginRsp    = 10002;   //登录返回
    const static uint32 CSRegisterReq = 10003;   //用户注册请求
    const static uint32 SCRegisterRsp = 10004;   //用户注册返回
    //test(2 message)
    const static uint32 CSTestPacketReq = 99991;
    const static uint32 SCTestPacketRsp = 99992;
}

#endif