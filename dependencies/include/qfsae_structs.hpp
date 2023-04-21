#pragma once
/**
 * @file data_structs.hpp
 * @author Jacob Chisholm (Jchisholm204.github.io)
 * @brief Contains all of the structure typedefs and data dependencies used by CAL
 * @version 0.1
 * @date 2023-01-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdint.h>
    
typedef struct {
    uint32_t id;        /* 29 bit identifier                               */
    uint8_t  data[8];   /* Data field                                      */
    uint8_t  len;       /* Length of data field in bytes                   */
    uint8_t  ch;        /* Object channel(Not use)                         */
    uint8_t  format;    /* 0 - STANDARD, 1- EXTENDED IDENTIFIER            */
    uint8_t  type;      /* 0 - DATA FRAME, 1 - REMOTE FRAME                */
} CAN_msg_t;

namespace CAL
{
    
    typedef struct
    {
        bool Active;
        bool Fault;
        bool OverCurrent;
        bool RetriesDone;
    } PDMOutputStatus;

    // CAN Data Types
    enum DataType{
        uint8,
        int16,
        boolean,
        Float,
        PDMStatus
    };

    /**
     * @brief CAN Data Packet Structure
     * @param id The CAN ID that the Data is found in
     * @param start_idx Where the data first occurs within the CAN data
     * @param bitmask The Data's Bitmask
     * @param dataType The MoTec Defined Data Type
     * 
     */
    typedef struct
    {
        const uint32_t id;
        const int start_idx;
        const int bitmask;
        const float multiplier;
        const DataType dataType;
    } data;

    // MOTEC CAN ID's (ECU/PDM)
    namespace MOTEC_ID
    {
        static constexpr uint32_t ECU_1 = 0x118;
        static constexpr uint32_t ECU_2 = 0x119;
        static constexpr uint32_t PDM_1 = 0x7F0;
        static constexpr uint32_t PDM_2 = 0x7F1;
    } // namespace MOTEC_ID

    // Melanous CAN ID's
    namespace MOTEC_RECV_ID{
        static constexpr uint32_t ECU_Base_Addr = 0x0500;
        static constexpr uint32_t ECU_CAN0      = ECU_Base_Addr;
        static constexpr uint32_t ECU_CAN1      = ECU_Base_Addr + 1;
        static constexpr uint32_t ECU_CAN2      = ECU_Base_Addr + 2;
        static constexpr uint32_t ECU_CAN3      = ECU_Base_Addr + 3;
        static constexpr uint32_t ECU_CAN4      = ECU_Base_Addr + 4;
        static constexpr uint32_t ECU_CAN5      = ECU_Base_Addr + 5;
        static constexpr uint32_t ECU_CAN6      = ECU_Base_Addr + 6;
        static constexpr uint32_t ECU_CAN7      = ECU_Base_Addr + 7;
    }
} // namespace CAL
