#ifdef SUB_SYSTEM_H
#define SUB_SYSTEM_H



#include <iostream>
#include <windows.h>
#include <string>

const std::string c_stateToStrCourier[] = {"收到", "验证可达性", "分配人员", "派送包裹", "获取交货确认", "完成"};+
const std::string c_stateToStrVendor[] = { "收到", "确认库存", "从仓库得到物品", "包装", "联系快递员", "完成" };
const std::string c_stateToStrOrderTeam[] = { "收到", "确认付款", "联系供应商", "完成" };
const int c_nMsec = 300;  // 休眠时间（毫秒） - Sleep(c_nMsec) 处可以替换为一些有用的代码


//订单团队
































#endif
