/**
 * @file CAL: cal.cpp
 * @author Jacob Chisholm (jchisholm204.github.io)
 * @brief 
 * @version 4
 * @date 2023-01-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "cal.hpp"

CAL::CAL::CAL(){
    // Zero Initialize All Values
    ecu1 =     { MOTEC_ID::ECU_1,         {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    ecu2 =     { MOTEC_ID::ECU_2,         {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    pdm1 =     { MOTEC_ID::PDM_1,         {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    pdm2 =     { MOTEC_ID::PDM_2,         {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    ECU_CAN0 = { MOTEC_RECV_ID::ECU_CAN0, {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    ECU_CAN1 = { MOTEC_RECV_ID::ECU_CAN1, {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    ECU_CAN2 = { MOTEC_RECV_ID::ECU_CAN2, {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    ECU_CAN3 = { MOTEC_RECV_ID::ECU_CAN3, {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    ECU_CAN4 = { MOTEC_RECV_ID::ECU_CAN4, {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    ECU_CAN5 = { MOTEC_RECV_ID::ECU_CAN5, {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    ECU_CAN6 = { MOTEC_RECV_ID::ECU_CAN6, {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    ECU_CAN7 = { MOTEC_RECV_ID::ECU_CAN7, {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    Logger1  = { MOTEC_ID::Logger_1,      {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    Logger2  = { MOTEC_ID::Logger_2,      {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    Logger3  = { MOTEC_ID::Logger_3,      {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    Logger5  = { MOTEC_ID::Logger_5,      {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    Logger6  = { MOTEC_ID::Logger_6,      {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    Logger9  = { MOTEC_ID::Logger_9,      {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    Logger10 = { MOTEC_ID::Logger_10,     {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    Logger11 = { MOTEC_ID::Logger_11,     {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    Logger13 = { MOTEC_ID::Logger_13,     {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    Logger14 = { MOTEC_ID::Logger_14,     {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
    Logger15 = { MOTEC_ID::Logger_15,     {0, 0, 0, 0, 0, 0, 0, 0}, 8, 0, 0, 0 };
};

CAN_msg_t &CAL::CAL::package(uint32_t id){
    switch (id)
    {
    case MOTEC_ID::ECU_1:
        return ecu1;
        break;
    case MOTEC_ID::ECU_2:
        return ecu2;
        break;
    case MOTEC_ID::PDM_1:
        return pdm1;
        break;
    case MOTEC_ID::PDM_2:
        return pdm2;
        break;
    case MOTEC_RECV_ID::ECU_CAN0:
        return ECU_CAN0;
        break;
    case MOTEC_RECV_ID::ECU_CAN1:
        return ECU_CAN1;
        break;
    case MOTEC_RECV_ID::ECU_CAN2:
        return ECU_CAN2;
        break;
    case MOTEC_RECV_ID::ECU_CAN3:
        return ECU_CAN3;
        break;
    case MOTEC_RECV_ID::ECU_CAN4:
        return ECU_CAN4;
        break;
    case MOTEC_RECV_ID::ECU_CAN5:
        return ECU_CAN5;
        break;
    case MOTEC_RECV_ID::ECU_CAN6:
        return ECU_CAN6;
        break;
    case MOTEC_RECV_ID::ECU_CAN7:
        return ECU_CAN7;
        break;
    case MOTEC_ID::Logger_1:
        return Logger1;
        break;
    case MOTEC_ID::Logger_2:
        return Logger2;
        break;
    case MOTEC_ID::Logger_3:
        return Logger3;
        break;
    case MOTEC_ID::Logger_5:
        return Logger5;
        break;
    case MOTEC_ID::Logger_6:
        return Logger6;
        break;
    case MOTEC_ID::Logger_9:
        return Logger9;
        break;
    case MOTEC_ID::Logger_10:
        return Logger10;
        break;
    case MOTEC_ID::Logger_11:
        return Logger11;
        break;
    case MOTEC_ID::Logger_13:
        return Logger13;
        break;
    case MOTEC_ID::Logger_14:
        return Logger14;
        break;
    case MOTEC_ID::Logger_15:
        return Logger15;
        break;
    case MOTEC_ID::Logger_16:
        return Logger16;
        break;
    default:
        break;
    }
}

CAN_msg_t &CAL::CAL::package(const data &var){
    switch (var.id)
    {
    case MOTEC_ID::ECU_1:
        return ecu1;
        break;
    case MOTEC_ID::ECU_2:
        return ecu2;
        break;
    case MOTEC_ID::PDM_1:
        return pdm1;
        break;
    case MOTEC_ID::PDM_2:
        return pdm2;
        break;
    case MOTEC_RECV_ID::ECU_CAN0:
        return ECU_CAN0;
        break;
    case MOTEC_RECV_ID::ECU_CAN1:
        return ECU_CAN1;
        break;
    case MOTEC_RECV_ID::ECU_CAN2:
        return ECU_CAN2;
        break;
    case MOTEC_RECV_ID::ECU_CAN3:
        return ECU_CAN3;
        break;
    case MOTEC_RECV_ID::ECU_CAN4:
        return ECU_CAN4;
        break;
    case MOTEC_RECV_ID::ECU_CAN5:
        return ECU_CAN5;
        break;
    case MOTEC_RECV_ID::ECU_CAN6:
        return ECU_CAN6;
        break;
    case MOTEC_RECV_ID::ECU_CAN7:
        return ECU_CAN7;
        break;
    case MOTEC_ID::Logger_1:
        return Logger1;
        break;
    case MOTEC_ID::Logger_2:
        return Logger2;
        break;
    case MOTEC_ID::Logger_3:
        return Logger3;
        break;
    case MOTEC_ID::Logger_5:
        return Logger5;
        break;
    case MOTEC_ID::Logger_6:
        return Logger6;
        break;
    case MOTEC_ID::Logger_9:
        return Logger9;
        break;
    case MOTEC_ID::Logger_10:
        return Logger10;
        break;
    case MOTEC_ID::Logger_11:
        return Logger11;
        break;
    case MOTEC_ID::Logger_13:
        return Logger13;
        break;
    case MOTEC_ID::Logger_14:
        return Logger14;
        break;
    case MOTEC_ID::Logger_15:
        return Logger15;
        break;
    case MOTEC_ID::Logger_16:
        return Logger16;
        break;
    default:
        break;
    }
}

int CAL::CAL::updatePackage(CAN_msg_t &CAN_msg){
    switch (CAN_msg.id)
    {
    case MOTEC_ID::ECU_1:
        ecu1 = CAN_msg;
        break;
    case MOTEC_ID::ECU_2:
        ecu2 = CAN_msg;
        break;
    case MOTEC_ID::PDM_1:
        pdm1 = CAN_msg;
        break;
    case MOTEC_ID::PDM_2:
        pdm1 = CAN_msg;
        break;
    case MOTEC_RECV_ID::ECU_CAN0:
        ECU_CAN0 = CAN_msg;
        break;
    case MOTEC_RECV_ID::ECU_CAN1:
        ECU_CAN1 = CAN_msg;
        break;
    case MOTEC_RECV_ID::ECU_CAN2:
        ECU_CAN2 = CAN_msg;
        break;
    case MOTEC_RECV_ID::ECU_CAN3:
        ECU_CAN3 = CAN_msg;
        break;
    case MOTEC_RECV_ID::ECU_CAN4:
        ECU_CAN4 = CAN_msg;
        break;
    case MOTEC_RECV_ID::ECU_CAN5:
        ECU_CAN5 = CAN_msg;
        break;
    case MOTEC_RECV_ID::ECU_CAN6:
        ECU_CAN6 = CAN_msg;
        break;
    case MOTEC_RECV_ID::ECU_CAN7:
        ECU_CAN7 = CAN_msg;
        break;
    case MOTEC_ID::Logger_1:
        Logger1 = CAN_msg;
        break;
    case MOTEC_ID::Logger_2:
        Logger2 = CAN_msg;
        break;
    case MOTEC_ID::Logger_3:
        Logger3 = CAN_msg;
        break;
    case MOTEC_ID::Logger_5:
        Logger5 = CAN_msg;
        break;
    case MOTEC_ID::Logger_6:
        Logger6 = CAN_msg;
        break;
    case MOTEC_ID::Logger_9:
        Logger9 = CAN_msg;
        break;
    case MOTEC_ID::Logger_10:
        Logger10 = CAN_msg;
        break;
    case MOTEC_ID::Logger_11:
        Logger11 = CAN_msg;
        break;
    case MOTEC_ID::Logger_13:
        Logger13 = CAN_msg;
        break;
    case MOTEC_ID::Logger_14:
        Logger14 = CAN_msg;
        break;
    case MOTEC_ID::Logger_15:
        Logger15 = CAN_msg;
        break;
    case MOTEC_ID::Logger_16:
        Logger16 = CAN_msg;
        break;
    default:
        return 1;
        break;
    }
    return 0;
}

void varToBuf(CAN_msg_t &msg, const CAL::data &CANdata, int &var){
    switch (CANdata.dataType)
    {
    case CAL::DataType::uint8:
        msg.data[CANdata.start_idx] = (uint8_t)(var*CANdata.divisor/CANdata.multiplier);
        break;
    case CAL::DataType::Float:
        msg.data[CANdata.start_idx] = (float)(var*CANdata.divisor/CANdata.multiplier);
        break;
    case CAL::DataType::int16:
        msg.data[CANdata.start_idx + 1] = ((int)(var*CANdata.divisor/CANdata.multiplier) >> 8);
        msg.data[CANdata.start_idx] = ((int)(var*CANdata.divisor/CANdata.multiplier));
        break;
    case CAL::DataType::boolean:
        if(var == 1) msg.data[CANdata.start_idx] |= CANdata.bitmask;
        if(var == 0) msg.data[CANdata.start_idx] &= ~CANdata.bitmask;
        break;
    default:
        break;
    }
}

void varToBuf(CAN_msg_t &msg, const CAL::data &CANdata, bool &var){
    switch (CANdata.dataType)
    {
    case CAL::DataType::uint8:
        msg.data[CANdata.start_idx] = (uint8_t)(var*CANdata.divisor/CANdata.multiplier);
        break;
    case CAL::DataType::Float:
        msg.data[CANdata.start_idx] = (float)(var*CANdata.divisor/CANdata.multiplier);
        break;
    case CAL::DataType::int16:
        msg.data[CANdata.start_idx + 1] = ((int)(var*CANdata.divisor/CANdata.multiplier) >> 8);
        msg.data[CANdata.start_idx] = ((int)(var*CANdata.divisor/CANdata.multiplier));
        break;
    case CAL::DataType::boolean:
        if(var == true) msg.data[CANdata.start_idx] |= CANdata.bitmask;
        if(var == false) msg.data[CANdata.start_idx] &= ~CANdata.bitmask;
        break;
    default:
        break;
    }
}

void varToBuf(CAN_msg_t &msg, const CAL::data &CANdata, float &var){
    switch (CANdata.dataType)
    {
    case CAL::DataType::uint8:
        msg.data[CANdata.start_idx] = (int)(var*CANdata.divisor/CANdata.multiplier);
        break;
    case CAL::DataType::Float:
        msg.data[CANdata.start_idx] = (float)(var*CANdata.divisor/CANdata.multiplier);
        break;
    case CAL::DataType::int16:
        msg.data[CANdata.start_idx + 1] = ((int)(var*CANdata.divisor/CANdata.multiplier) >> 8);
        msg.data[CANdata.start_idx] = ((int)(var*CANdata.divisor/CANdata.multiplier));
        break;
    case CAL::DataType::boolean:
        if(var == 1) msg.data[CANdata.start_idx] |= CANdata.bitmask;
        if(var == 0) msg.data[CANdata.start_idx] &= ~CANdata.bitmask;
        break;
    default:
        break;
    }
}

void CAL::CAL::updateVar(const data &CANdata, int value){
    switch (CANdata.id)
    {
    case MOTEC_ID::ECU_1:
        varToBuf(ecu1, CANdata, value);
        break;
    case MOTEC_ID::ECU_2:
        varToBuf(ecu2, CANdata, value);
        break;
    case MOTEC_ID::PDM_1:
        varToBuf(pdm1, CANdata, value);
        break;
    case MOTEC_ID::PDM_2:
        varToBuf(pdm2, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN0:
        varToBuf(ECU_CAN0, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN1:
        varToBuf(ECU_CAN1, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN2:
        varToBuf(ECU_CAN2, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN3:
        varToBuf(ECU_CAN3, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN4:
        varToBuf(ECU_CAN4, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN5:
        varToBuf(ECU_CAN5, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN6:
        varToBuf(ECU_CAN6, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN7:
        varToBuf(ECU_CAN7, CANdata, value);
        break;
    case MOTEC_ID::Logger_1:
        varToBuf(Logger1, CANdata, value);
        break;
    case MOTEC_ID::Logger_2:
        varToBuf(Logger2, CANdata, value);
        break;
    case MOTEC_ID::Logger_3:
        varToBuf(Logger3, CANdata, value);
        break;
    case MOTEC_ID::Logger_5:
        varToBuf(Logger5, CANdata, value);
        break;
    case MOTEC_ID::Logger_6:
        varToBuf(Logger6, CANdata, value);
        break;
    case MOTEC_ID::Logger_9:
        varToBuf(Logger9, CANdata, value);
        break;
    case MOTEC_ID::Logger_10:
        varToBuf(Logger10, CANdata, value);
        break;
    case MOTEC_ID::Logger_11:
        varToBuf(Logger11, CANdata, value);
        break;
    case MOTEC_ID::Logger_13:
        varToBuf(Logger13, CANdata, value);
        break;
    case MOTEC_ID::Logger_14:
        varToBuf(Logger14, CANdata, value);
        break;
    case MOTEC_ID::Logger_15:
        varToBuf(Logger15, CANdata, value);
        break;
    case MOTEC_ID::Logger_16:
        varToBuf(Logger16, CANdata, value);
        break;
    default:
        break;
    }
}


void CAL::CAL::updateVar(const data &CANdata, float value){
    switch (CANdata.id)
    {
    case MOTEC_ID::ECU_1:
        varToBuf(ecu1, CANdata, value);
        break;
    case MOTEC_ID::ECU_2:
        varToBuf(ecu2, CANdata, value);
        break;
    case MOTEC_ID::PDM_1:
        varToBuf(pdm1, CANdata, value);
        break;
    case MOTEC_ID::PDM_2:
        varToBuf(pdm2, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN1:
        varToBuf(ECU_CAN1, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN2:
        varToBuf(ECU_CAN2, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN3:
        varToBuf(ECU_CAN3, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN4:
        varToBuf(ECU_CAN4, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN5:
        varToBuf(ECU_CAN5, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN6:
        varToBuf(ECU_CAN6, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN7:
        varToBuf(ECU_CAN7, CANdata, value);
        break;
    case MOTEC_ID::Logger_1:
        varToBuf(Logger1, CANdata, value);
        break;
    case MOTEC_ID::Logger_2:
        varToBuf(Logger2, CANdata, value);
        break;
    case MOTEC_ID::Logger_3:
        varToBuf(Logger3, CANdata, value);
        break;
    case MOTEC_ID::Logger_5:
        varToBuf(Logger5, CANdata, value);
        break;
    case MOTEC_ID::Logger_6:
        varToBuf(Logger6, CANdata, value);
        break;
    case MOTEC_ID::Logger_9:
        varToBuf(Logger9, CANdata, value);
        break;
    case MOTEC_ID::Logger_10:
        varToBuf(Logger10, CANdata, value);
        break;
    case MOTEC_ID::Logger_11:
        varToBuf(Logger11, CANdata, value);
        break;
    case MOTEC_ID::Logger_13:
        varToBuf(Logger13, CANdata, value);
        break;
    case MOTEC_ID::Logger_14:
        varToBuf(Logger14, CANdata, value);
        break;
    case MOTEC_ID::Logger_15:
        varToBuf(Logger15, CANdata, value);
        break;
    case MOTEC_ID::Logger_16:
        varToBuf(Logger16, CANdata, value);
        break;
    default:
        break;
    }
}

void CAL::CAL::updateVar(const data &CANdata, bool value){
    switch (CANdata.id)
    {
    case MOTEC_ID::ECU_1:
        varToBuf(ecu1, CANdata, value);
        break;
    case MOTEC_ID::ECU_2:
        varToBuf(ecu2, CANdata, value);
        break;
    case MOTEC_ID::PDM_1:
        varToBuf(pdm1, CANdata, value);
        break;
    case MOTEC_ID::PDM_2:
        varToBuf(pdm2, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN1:
        varToBuf(ECU_CAN1, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN2:
        varToBuf(ECU_CAN2, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN3:
        varToBuf(ECU_CAN3, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN4:
        varToBuf(ECU_CAN4, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN5:
        varToBuf(ECU_CAN5, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN6:
        varToBuf(ECU_CAN6, CANdata, value);
        break;
    case MOTEC_RECV_ID::ECU_CAN7:
        varToBuf(ECU_CAN7, CANdata, value);
        break;
    case MOTEC_ID::Logger_1:
        varToBuf(Logger1, CANdata, value);
        break;
    case MOTEC_ID::Logger_2:
        varToBuf(Logger2, CANdata, value);
        break;
    case MOTEC_ID::Logger_3:
        varToBuf(Logger3, CANdata, value);
        break;
    case MOTEC_ID::Logger_5:
        varToBuf(Logger5, CANdata, value);
        break;
    case MOTEC_ID::Logger_6:
        varToBuf(Logger6, CANdata, value);
        break;
    case MOTEC_ID::Logger_9:
        varToBuf(Logger9, CANdata, value);
        break;
    case MOTEC_ID::Logger_10:
        varToBuf(Logger10, CANdata, value);
        break;
    case MOTEC_ID::Logger_11:
        varToBuf(Logger11, CANdata, value);
        break;
    case MOTEC_ID::Logger_13:
        varToBuf(Logger13, CANdata, value);
        break;
    case MOTEC_ID::Logger_14:
        varToBuf(Logger14, CANdata, value);
        break;
    case MOTEC_ID::Logger_15:
        varToBuf(Logger15, CANdata, value);
        break;
    case MOTEC_ID::Logger_16:
        varToBuf(Logger16, CANdata, value);
        break;
    default:
        break;
    }
}

void bufToVar(CAN_msg_t &msg, const CAL::data &CANdata, int &data){
    switch (CANdata.dataType)
    {
    case CAL::DataType::uint8:
        data = (msg.data[CANdata.start_idx] & CANdata.bitmask)*CANdata.multiplier/CANdata.divisor;
        break;
    case CAL::DataType::int16:
        data = ((((int16_t)msg.data[CANdata.start_idx + 1] << 8) | msg.data[CANdata.start_idx]) & CANdata.bitmask)*CANdata.multiplier/CANdata.divisor;
        break;
    case CAL::DataType::Float:
        data = ((float)(msg.data[CANdata.start_idx] & CANdata.bitmask))*CANdata.multiplier/CANdata.divisor;
        break;
    case CAL::DataType::boolean:
        data = (msg.data[CANdata.start_idx] & CANdata.bitmask) > 0;
        break;
    default:
        break;
    }
}

void bufToVar(CAN_msg_t &msg, const CAL::data &CANdata, float &data){
    switch (CANdata.dataType)
    {
    case CAL::DataType::uint8:
        data = (msg.data[CANdata.start_idx] & CANdata.bitmask)*CANdata.multiplier/CANdata.divisor;
        break;
    case CAL::DataType::int16:
        data = ((((int16_t)msg.data[CANdata.start_idx + 1] << 8) | msg.data[CANdata.start_idx]) & CANdata.bitmask)*CANdata.multiplier/CANdata.divisor;
        break;
    case CAL::DataType::Float:
        data = ((float)(msg.data[CANdata.start_idx] & CANdata.bitmask))*CANdata.multiplier/CANdata.divisor;
        break;
    case CAL::DataType::boolean:
        data = (msg.data[CANdata.start_idx] & CANdata.bitmask) > 0;
        break;
    default:
        break;
    }
}

void bufToVar(CAN_msg_t &msg, const CAL::data &CANdata, bool &data){
    switch (CANdata.dataType)
    {
    case CAL::DataType::uint8:
        data = (msg.data[CANdata.start_idx] & CANdata.bitmask)*CANdata.multiplier/CANdata.divisor;
        break;
    case CAL::DataType::int16:
        data = ((((int16_t)msg.data[CANdata.start_idx + 1] << 8) | msg.data[CANdata.start_idx]) & CANdata.bitmask)*CANdata.multiplier/CANdata.divisor;
        break;
    case CAL::DataType::Float:
        data = ((float)(msg.data[CANdata.start_idx] & CANdata.bitmask))*CANdata.multiplier/CANdata.divisor;
        break;
    case CAL::DataType::boolean:
        data = (msg.data[CANdata.start_idx] & CANdata.bitmask) > 0;
        break;
    default:
        break;
    }
}

void bufToVar(CAN_msg_t &msg, const CAL::data &CANdata, uint8_t &data){
    switch (CANdata.dataType)
    {
    case CAL::DataType::uint8:
        data = (msg.data[CANdata.start_idx] & CANdata.bitmask)*CANdata.multiplier/CANdata.divisor;
        break;
    case CAL::DataType::int16:
        data = ((((int16_t)msg.data[CANdata.start_idx + 1] << 8) | msg.data[CANdata.start_idx]) & CANdata.bitmask)*CANdata.multiplier/CANdata.divisor;
        break;
    case CAL::DataType::Float:
        data = ((float)(msg.data[CANdata.start_idx] & CANdata.bitmask))*CANdata.multiplier/CANdata.divisor;
        break;
    case CAL::DataType::boolean:
        data = (msg.data[CANdata.start_idx] & CANdata.bitmask) > 0;
        break;
    default:
        break;
    }
}

void bufToVar(CAN_msg_t &msg, const CAL::data &CANdata, CAL::PDMOutputStatus &data){
    if(CANdata.dataType == CAL::DataType::PDMStatus){
        if(msg.data[CANdata.start_idx] & 0x01 > 0 ){
            data.Active = true;
        }
        else{
            data.Active = false;
        }
        if(msg.data[CANdata.start_idx] & 0x02 > 0 ){
            data.Fault = true;
        }
        else{
            data.Fault = false;
        }
        if(msg.data[CANdata.start_idx] & 0x04 > 0 ){
            data.OverCurrent = true;
        }
        else{
            data.OverCurrent = false;
        }
        if(msg.data[CANdata.start_idx] & 0x08 > 0 ){
            data.RetriesDone = true;
        }
        else{
            data.RetriesDone = false;
        }
    }
}

int CAL::CAL::returnVar(const data &CANdata){
    int data;
    switch (CANdata.id)
    {
    case MOTEC_ID::ECU_1:
        bufToVar(ecu1, CANdata, data);
        break;
    case MOTEC_ID::ECU_2:
        bufToVar(ecu2, CANdata, data);
        break;
    case MOTEC_ID::PDM_1:
        bufToVar(pdm1, CANdata, data);
        break;
    case MOTEC_ID::PDM_2:
        bufToVar(pdm2, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN0:
        bufToVar(ECU_CAN0, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN1:
        bufToVar(ECU_CAN1, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN2:
        bufToVar(ECU_CAN2, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN3:
        bufToVar(ECU_CAN3, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN4:
        bufToVar(ECU_CAN4, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN5:
        bufToVar(ECU_CAN5, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN6:
        bufToVar(ECU_CAN6, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN7:
        bufToVar(ECU_CAN7, CANdata, data);
        break;
    case MOTEC_ID::Logger_1:
        bufToVar(Logger1, CANdata, data);
        break;
    case MOTEC_ID::Logger_2:
        bufToVar(Logger2, CANdata, data);
        break;
    case MOTEC_ID::Logger_3:
        bufToVar(Logger3, CANdata, data);
        break;
    case MOTEC_ID::Logger_5:
        bufToVar(Logger5, CANdata, data);
        break;
    case MOTEC_ID::Logger_6:
        bufToVar(Logger6, CANdata, data);
        break;
    case MOTEC_ID::Logger_9:
        bufToVar(Logger9, CANdata, data);
        break;
    case MOTEC_ID::Logger_10:
        bufToVar(Logger10, CANdata, data);
        break;
    case MOTEC_ID::Logger_11:
        bufToVar(Logger11, CANdata, data);
        break;
    case MOTEC_ID::Logger_13:
        bufToVar(Logger13, CANdata, data);
        break;
    case MOTEC_ID::Logger_14:
        bufToVar(Logger14, CANdata, data);
        break;
    case MOTEC_ID::Logger_15:
        bufToVar(Logger15, CANdata, data);
        break;
    case MOTEC_ID::Logger_16:
        bufToVar(Logger16, CANdata, data);
        break;
    default:
        break;
    }
    return data;
}

float CAL::CAL::returnVar_f(const data &CANdata){
    float data;
    switch (CANdata.id)
    {
    case MOTEC_ID::ECU_1:
        bufToVar(ecu1, CANdata, data);
        break;
    case MOTEC_ID::ECU_2:
        bufToVar(ecu2, CANdata, data);
        break;
    case MOTEC_ID::PDM_1:
        bufToVar(pdm1, CANdata, data);
        break;
    case MOTEC_ID::PDM_2:
        bufToVar(pdm2, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN0:
        bufToVar(ECU_CAN0, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN1:
        bufToVar(ECU_CAN1, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN2:
        bufToVar(ECU_CAN2, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN3:
        bufToVar(ECU_CAN3, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN4:
        bufToVar(ECU_CAN4, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN5:
        bufToVar(ECU_CAN5, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN6:
        bufToVar(ECU_CAN6, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN7:
        bufToVar(ECU_CAN7, CANdata, data);
        break;
    case MOTEC_ID::Logger_1:
        bufToVar(Logger1, CANdata, data);
        break;
    case MOTEC_ID::Logger_2:
        bufToVar(Logger2, CANdata, data);
        break;
    case MOTEC_ID::Logger_3:
        bufToVar(Logger3, CANdata, data);
        break;
    case MOTEC_ID::Logger_5:
        bufToVar(Logger5, CANdata, data);
        break;
    case MOTEC_ID::Logger_6:
        bufToVar(Logger6, CANdata, data);
        break;
    case MOTEC_ID::Logger_9:
        bufToVar(Logger9, CANdata, data);
        break;
    case MOTEC_ID::Logger_10:
        bufToVar(Logger10, CANdata, data);
        break;
    case MOTEC_ID::Logger_11:
        bufToVar(Logger11, CANdata, data);
        break;
    case MOTEC_ID::Logger_13:
        bufToVar(Logger13, CANdata, data);
        break;
    case MOTEC_ID::Logger_14:
        bufToVar(Logger14, CANdata, data);
        break;
    case MOTEC_ID::Logger_15:
        bufToVar(Logger15, CANdata, data);
        break;
    case MOTEC_ID::Logger_16:
        bufToVar(Logger16, CANdata, data);
        break;
    default:
        break;
    }
    return data;
}

CAL::PDMOutputStatus CAL::CAL::returnVar_os(const data &CANdata){
    PDMOutputStatus data;
    switch (CANdata.id)
    {
    case MOTEC_ID::ECU_1:
        bufToVar(ecu1, CANdata, data);
        break;
    case MOTEC_ID::ECU_2:
        bufToVar(ecu2, CANdata, data);
        break;
    case MOTEC_ID::PDM_1:
        bufToVar(pdm1, CANdata, data);
        break;
    case MOTEC_ID::PDM_2:
        bufToVar(pdm2, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN0:
        bufToVar(ECU_CAN0, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN1:
        bufToVar(ECU_CAN1, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN2:
        bufToVar(ECU_CAN2, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN3:
        bufToVar(ECU_CAN3, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN4:
        bufToVar(ECU_CAN4, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN5:
        bufToVar(ECU_CAN5, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN6:
        bufToVar(ECU_CAN6, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN7:
        bufToVar(ECU_CAN7, CANdata, data);
        break;
    case MOTEC_ID::Logger_1:
        bufToVar(Logger1, CANdata, data);
        break;
    case MOTEC_ID::Logger_2:
        bufToVar(Logger2, CANdata, data);
        break;
    case MOTEC_ID::Logger_3:
        bufToVar(Logger3, CANdata, data);
        break;
    case MOTEC_ID::Logger_5:
        bufToVar(Logger5, CANdata, data);
        break;
    case MOTEC_ID::Logger_6:
        bufToVar(Logger6, CANdata, data);
        break;
    case MOTEC_ID::Logger_9:
        bufToVar(Logger9, CANdata, data);
        break;
    case MOTEC_ID::Logger_10:
        bufToVar(Logger10, CANdata, data);
        break;
    case MOTEC_ID::Logger_11:
        bufToVar(Logger11, CANdata, data);
        break;
    case MOTEC_ID::Logger_13:
        bufToVar(Logger13, CANdata, data);
        break;
    case MOTEC_ID::Logger_14:
        bufToVar(Logger14, CANdata, data);
        break;
    case MOTEC_ID::Logger_15:
        bufToVar(Logger15, CANdata, data);
        break;
    case MOTEC_ID::Logger_16:
        bufToVar(Logger16, CANdata, data);
        break;
    default:
        break;
    }
    return data;
}

int CAL::CAL::returnVar(const data &CANdata, int &data){
    switch (CANdata.id)
    {
    case MOTEC_ID::ECU_1:
        bufToVar(ecu1, CANdata, data);
        break;
    case MOTEC_ID::ECU_2:
        bufToVar(ecu2, CANdata, data);
        break;
    case MOTEC_ID::PDM_1:
        bufToVar(pdm1, CANdata, data);
        break;
    case MOTEC_ID::PDM_2:
        bufToVar(pdm2, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN0:
        bufToVar(ECU_CAN0, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN1:
        bufToVar(ECU_CAN1, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN2:
        bufToVar(ECU_CAN2, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN3:
        bufToVar(ECU_CAN3, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN4:
        bufToVar(ECU_CAN4, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN5:
        bufToVar(ECU_CAN5, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN6:
        bufToVar(ECU_CAN6, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN7:
        bufToVar(ECU_CAN7, CANdata, data);
        break;
    case MOTEC_ID::Logger_1:
        bufToVar(Logger1, CANdata, data);
        break;
    case MOTEC_ID::Logger_2:
        bufToVar(Logger2, CANdata, data);
        break;
    case MOTEC_ID::Logger_3:
        bufToVar(Logger3, CANdata, data);
        break;
    case MOTEC_ID::Logger_5:
        bufToVar(Logger5, CANdata, data);
        break;
    case MOTEC_ID::Logger_6:
        bufToVar(Logger6, CANdata, data);
        break;
    case MOTEC_ID::Logger_9:
        bufToVar(Logger9, CANdata, data);
        break;
    case MOTEC_ID::Logger_10:
        bufToVar(Logger10, CANdata, data);
        break;
    case MOTEC_ID::Logger_11:
        bufToVar(Logger11, CANdata, data);
        break;
    case MOTEC_ID::Logger_13:
        bufToVar(Logger13, CANdata, data);
        break;
    case MOTEC_ID::Logger_14:
        bufToVar(Logger14, CANdata, data);
        break;
    case MOTEC_ID::Logger_15:
        bufToVar(Logger15, CANdata, data);
        break;
    case MOTEC_ID::Logger_16:
        bufToVar(Logger16, CANdata, data);
        break;
    default:
        break;
    }
    return 0;
}

int CAL::CAL::returnVar(const data &CANdata, uint8_t &data){
    switch (CANdata.id)
    {
    case MOTEC_ID::ECU_1:
        bufToVar(ecu1, CANdata, data);
        break;
    case MOTEC_ID::ECU_2:
        bufToVar(ecu2, CANdata, data);
        break;
    case MOTEC_ID::PDM_1:
        bufToVar(pdm1, CANdata, data);
        break;
    case MOTEC_ID::PDM_2:
        bufToVar(pdm2, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN0:
        bufToVar(ECU_CAN0, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN1:
        bufToVar(ECU_CAN1, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN2:
        bufToVar(ECU_CAN2, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN3:
        bufToVar(ECU_CAN3, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN4:
        bufToVar(ECU_CAN4, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN5:
        bufToVar(ECU_CAN5, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN6:
        bufToVar(ECU_CAN6, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN7:
        bufToVar(ECU_CAN7, CANdata, data);
        break;
    case MOTEC_ID::Logger_1:
        bufToVar(Logger1, CANdata, data);
        break;
    case MOTEC_ID::Logger_2:
        bufToVar(Logger2, CANdata, data);
        break;
    case MOTEC_ID::Logger_3:
        bufToVar(Logger3, CANdata, data);
        break;
    case MOTEC_ID::Logger_5:
        bufToVar(Logger5, CANdata, data);
        break;
    case MOTEC_ID::Logger_6:
        bufToVar(Logger6, CANdata, data);
        break;
    case MOTEC_ID::Logger_9:
        bufToVar(Logger9, CANdata, data);
        break;
    case MOTEC_ID::Logger_10:
        bufToVar(Logger10, CANdata, data);
        break;
    case MOTEC_ID::Logger_11:
        bufToVar(Logger11, CANdata, data);
        break;
    case MOTEC_ID::Logger_13:
        bufToVar(Logger13, CANdata, data);
        break;
    case MOTEC_ID::Logger_14:
        bufToVar(Logger14, CANdata, data);
        break;
    case MOTEC_ID::Logger_15:
        bufToVar(Logger15, CANdata, data);
        break;
    case MOTEC_ID::Logger_16:
        bufToVar(Logger16, CANdata, data);
        break;
    default:
        break;
    }
    return 0;
}

int CAL::CAL::returnVar(const data &CANdata, float &data){
    switch (CANdata.id)
    {
    case MOTEC_ID::ECU_1:
        bufToVar(ecu1, CANdata, data);
        break;
    case MOTEC_ID::ECU_2:
        bufToVar(ecu2, CANdata, data);
        break;
    case MOTEC_ID::PDM_1:
        bufToVar(pdm1, CANdata, data);
        break;
    case MOTEC_ID::PDM_2:
        bufToVar(pdm2, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN0:
        bufToVar(ECU_CAN0, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN1:
        bufToVar(ECU_CAN1, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN2:
        bufToVar(ECU_CAN2, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN3:
        bufToVar(ECU_CAN3, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN4:
        bufToVar(ECU_CAN4, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN5:
        bufToVar(ECU_CAN5, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN6:
        bufToVar(ECU_CAN6, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN7:
        bufToVar(ECU_CAN7, CANdata, data);
        break;
    case MOTEC_ID::Logger_1:
        bufToVar(Logger1, CANdata, data);
        break;
    case MOTEC_ID::Logger_2:
        bufToVar(Logger2, CANdata, data);
        break;
    case MOTEC_ID::Logger_3:
        bufToVar(Logger3, CANdata, data);
        break;
    case MOTEC_ID::Logger_5:
        bufToVar(Logger5, CANdata, data);
        break;
    case MOTEC_ID::Logger_6:
        bufToVar(Logger6, CANdata, data);
        break;
    case MOTEC_ID::Logger_9:
        bufToVar(Logger9, CANdata, data);
        break;
    case MOTEC_ID::Logger_10:
        bufToVar(Logger10, CANdata, data);
        break;
    case MOTEC_ID::Logger_11:
        bufToVar(Logger11, CANdata, data);
        break;
    case MOTEC_ID::Logger_13:
        bufToVar(Logger13, CANdata, data);
        break;
    case MOTEC_ID::Logger_14:
        bufToVar(Logger14, CANdata, data);
        break;
    case MOTEC_ID::Logger_15:
        bufToVar(Logger15, CANdata, data);
        break;
    case MOTEC_ID::Logger_16:
        bufToVar(Logger16, CANdata, data);
        break;
        break;
    default:
        break;
    }
    return 0;
}

int CAL::CAL::returnVar(const data &CANdata, bool &data){
    switch (CANdata.id)
    {
    case MOTEC_ID::ECU_1:
        bufToVar(ecu1, CANdata, data);
        break;
    case MOTEC_ID::ECU_2:
        bufToVar(ecu2, CANdata, data);
        break;
    case MOTEC_ID::PDM_1:
        bufToVar(pdm1, CANdata, data);
        break;
    case MOTEC_ID::PDM_2:
        bufToVar(pdm2, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN0:
        bufToVar(ECU_CAN0, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN1:
        bufToVar(ECU_CAN1, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN2:
        bufToVar(ECU_CAN2, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN3:
        bufToVar(ECU_CAN3, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN4:
        bufToVar(ECU_CAN4, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN5:
        bufToVar(ECU_CAN5, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN6:
        bufToVar(ECU_CAN6, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN7:
        bufToVar(ECU_CAN7, CANdata, data);
        break;
    case MOTEC_ID::Logger_1:
        bufToVar(Logger1, CANdata, data);
        break;
    case MOTEC_ID::Logger_2:
        bufToVar(Logger2, CANdata, data);
        break;
    case MOTEC_ID::Logger_3:
        bufToVar(Logger3, CANdata, data);
        break;
    case MOTEC_ID::Logger_5:
        bufToVar(Logger5, CANdata, data);
        break;
    case MOTEC_ID::Logger_6:
        bufToVar(Logger6, CANdata, data);
        break;
    case MOTEC_ID::Logger_9:
        bufToVar(Logger9, CANdata, data);
        break;
    case MOTEC_ID::Logger_10:
        bufToVar(Logger10, CANdata, data);
        break;
    case MOTEC_ID::Logger_11:
        bufToVar(Logger11, CANdata, data);
        break;
    case MOTEC_ID::Logger_13:
        bufToVar(Logger13, CANdata, data);
        break;
    case MOTEC_ID::Logger_14:
        bufToVar(Logger14, CANdata, data);
        break;
    case MOTEC_ID::Logger_15:
        bufToVar(Logger15, CANdata, data);
        break;
    case MOTEC_ID::Logger_16:
        bufToVar(Logger16, CANdata, data);
        break;
    default:
        break;
    }
    return 0;
}

int CAL::CAL::returnVar(const data &CANdata, PDMOutputStatus &data){
    switch (CANdata.id)
    {
    case MOTEC_ID::ECU_1:
        bufToVar(ecu1, CANdata, data);
        break;
    case MOTEC_ID::ECU_2:
        bufToVar(ecu2, CANdata, data);
        break;
    case MOTEC_ID::PDM_1:
        bufToVar(pdm1, CANdata, data);
        break;
    case MOTEC_ID::PDM_2:
        bufToVar(pdm2, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN0:
        bufToVar(ECU_CAN0, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN1:
        bufToVar(ECU_CAN1, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN2:
        bufToVar(ECU_CAN2, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN3:
        bufToVar(ECU_CAN3, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN4:
        bufToVar(ECU_CAN4, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN5:
        bufToVar(ECU_CAN5, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN6:
        bufToVar(ECU_CAN6, CANdata, data);
        break;
    case MOTEC_RECV_ID::ECU_CAN7:
        bufToVar(ECU_CAN7, CANdata, data);
        break;
    case MOTEC_ID::Logger_1:
        bufToVar(Logger1, CANdata, data);
        break;
    case MOTEC_ID::Logger_2:
        bufToVar(Logger2, CANdata, data);
        break;
    case MOTEC_ID::Logger_3:
        bufToVar(Logger3, CANdata, data);
        break;
    case MOTEC_ID::Logger_5:
        bufToVar(Logger5, CANdata, data);
        break;
    case MOTEC_ID::Logger_6:
        bufToVar(Logger6, CANdata, data);
        break;
    case MOTEC_ID::Logger_9:
        bufToVar(Logger9, CANdata, data);
        break;
    case MOTEC_ID::Logger_10:
        bufToVar(Logger10, CANdata, data);
        break;
    case MOTEC_ID::Logger_11:
        bufToVar(Logger11, CANdata, data);
        break;
    case MOTEC_ID::Logger_13:
        bufToVar(Logger13, CANdata, data);
        break;
    case MOTEC_ID::Logger_14:
        bufToVar(Logger14, CANdata, data);
        break;
    case MOTEC_ID::Logger_15:
        bufToVar(Logger15, CANdata, data);
        break;
    case MOTEC_ID::Logger_16:
        bufToVar(Logger16, CANdata, data);
        break;
    default:
        break;
    }
    return 0;
}