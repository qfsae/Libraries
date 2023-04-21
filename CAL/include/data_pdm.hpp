#pragma once
/**
 * @file data_pdm.hpp
 * @author Jacob Chisholm (Jchisholm204.github.io)
 * @brief Encases CAL::DATA_PDM
 * @version 0.1
 * @date 2023-01-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "qfsae_structs.hpp"

namespace CAL
{
    /**
     * @brief Encases all of the Data Types coming off of the PDM's CAN
     * 
     */
    namespace DATA_PDM
    {
        /**
         * @brief Starter Relay Status
         * Contained as a PDMStatus,
         * Accessed at: ID 0x7F0 | Byte 0
         */
        constexpr data StarterStatus = {
            MOTEC_ID::PDM_1,
            0,
            0xFF,
            0,
            DataType::PDMStatus
        };

        /**
         * @brief Battery Voltage:
         * Contained as a Float,
         * Accessed at: ID 0x7F0 | Byte 1 | Mask 0xFF
         */
        constexpr data BatteryVoltage = {
            MOTEC_ID::PDM_1,
            1,
            0xFF,
            0.1216,
            DataType::Float
        };

        /**
         * @brief Fuel Pump Current:
         * Contained as a Float,
         * Accessed at: ID 0x7F0 | Byte 2 | Mask 0xFF
         */
        constexpr data FuelPumpCurrent = {
            MOTEC_ID::PDM_1,
            2,
            0xFF,
            0.5,
            DataType::Float
        };

        /**
         * @brief Fuel Pump Voltage:
         * Contained as a Float,
         * Accessed at: ID 0x7F0 | Byte 3 | Mask 0xFF
         */
        constexpr data FuelPumpVoltage = {
            MOTEC_ID::PDM_1,
            3,
            0xFF,
            0.2,
            DataType::Float
        };

        /**
         * @brief Fuel Pump Status:
         * Contained as a PDMStatus,
         * Accessed at: ID 0x7F0 | Byte 4
         */
        constexpr data FuelPumpStatus = {
            MOTEC_ID::PDM_1,
            4,
            0xFF,
            0,
            DataType::PDMStatus
        };

        /**
         * @brief Kill Switch Voltage:
         * Contained as a Float,
         * Accessed at: ID 0x7F0 | Byte 5 | Mask 0xFF
         */
        constexpr data KillSwitchVoltage = {
            MOTEC_ID::PDM_1,
            5,
            0xFF,
            0.2,
            DataType::Float
        };

        /**
         * @brief Gear Position Voltage:
         * Contained as a Float,
         * Accessed at: ID 0x7F0 | Byte 6 | Mask 0xFF
         * See M1 Tune for decoding into gear position
         */
        constexpr data GearPositionVoltage = {
            MOTEC_ID::PDM_1,
            6,
            0xFF,
            0.2,
            DataType::Float
        };

         /**
         * @brief PDM Total Current:
         * Contained as a Float,
         * Accessed at: ID 0x7F0 | Byte 7 | Mask 0xFF
         */
        constexpr data Current = {
            MOTEC_ID::PDM_1,
            7,
            0xFF,
            0.2,
            DataType::Float
        };

        /**
         * @brief Brake Light Status:
         * Contained as a PDMStatus,
         * Accessed at: ID 0x7F1 | Byte 1
         */
        constexpr data BrakeLightStatus = {
            MOTEC_ID::PDM_2,
            1,
            0xFF,
            0,
            DataType::PDMStatus
        };

        /**
         * @brief SteeringPower Status:
         * Contained as a PDMStatus,
         * Accessed at: ID 0x7F1 | Byte 2
         */
        constexpr data SteeringPowerStatus = {
            MOTEC_ID::PDM_2,
            2,
            0xFF,
            0,
            DataType::PDMStatus
        };

        /**
         * @brief Fuel Injector Status:
         * Contained as a PDMStatus,
         * Accessed at: ID 0x7F1 | Byte 3
         */
        constexpr data FuelInjectorStatus = {
            MOTEC_ID::PDM_2,
            3,
            0xFF,
            0,
            DataType::PDMStatus
        };

        /**
         * @brief Transponder Status:
         * Contained as a PDMStatus,
         * Accessed at: ID 0x7F1 | Byte 4
         */
        constexpr data TransponderStatus = {
            MOTEC_ID::PDM_2,
            4,
            0xFF,
            0,
            DataType::PDMStatus
        };

        /**
         * @brief Cooling Fan Status:
         * Contained as a PDMStatus,
         * Accessed at: ID 0x7F1 | Byte 5
         */
        constexpr data CoolingFanStatus = {
            MOTEC_ID::PDM_2,
            5,
            0xFF,
            0,
            DataType::PDMStatus
        };

        /**
         * @brief Data Logger Power Status:
         * Contained as a PDMStatus,
         * Accessed at: ID 0x7F1 | Byte 6
         */
        constexpr data DataLoggerStatus = {
            MOTEC_ID::PDM_2,
            6,
            0xFF,
            0,
            DataType::PDMStatus
        };

    } // namespace DATA_PDM

} // namespace CAL
