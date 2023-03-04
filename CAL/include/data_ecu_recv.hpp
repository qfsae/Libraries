#pragma once
/**
 * @file data_ecu_recv.hpp
 * @author Jacob Chisholm (Jchisholm204.github.io)
 * @brief Encases CAL::DATA_ECU_RECV's
 * @version 0.1
 * @date 2023-01-17
 * 
 * The structs used within this file should be used to send data over CAN into the ECU
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "qfsae_structs.hpp"

namespace CAL{

    /**
     * @brief Encases all of the Data Types coming off of the ECU's CAN
     * 
     */
    namespace DATA_ECU{

        namespace CAN0{

        /**
         * @brief Offset 0:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset0 = {
            MOTEC_RECV_ID::CAN0,
            0,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 1:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset1 = {
            MOTEC_RECV_ID::CAN0,
            2,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 2:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset2 = {
            MOTEC_RECV_ID::CAN0,
            4,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 0:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset3 = {
            MOTEC_RECV_ID::CAN0,
            6,
            0xFF,
            1000,
            DataType::int16
        };

        } // namespace CAN0

        namespace CAN1{

        /**
         * @brief Offset 0:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset0 = {
            MOTEC_RECV_ID::CAN1,
            0,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 1:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset1 = {
            MOTEC_RECV_ID::CAN1,
            2,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 2:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset2 = {
            MOTEC_RECV_ID::CAN1,
            4,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 0:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset3 = {
            MOTEC_RECV_ID::CAN1,
            6,
            0xFF,
            1000,
            DataType::int16
        };

        } // namespace CAN1

        namespace CAN2{

        /**
         * @brief Offset 0:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset0 = {
            MOTEC_RECV_ID::CAN2,
            0,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 1:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset1 = {
            MOTEC_RECV_ID::CAN2,
            2,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 2:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset2 = {
            MOTEC_RECV_ID::CAN2,
            4,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 0:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset3 = {
            MOTEC_RECV_ID::CAN2,
            6,
            0xFF,
            1000,
            DataType::int16
        };

        } // namespace CAN2

        namespace CAN3{

        /**
         * @brief Offset 0:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset0 = {
            MOTEC_RECV_ID::CAN3,
            0,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 1:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset1 = {
            MOTEC_RECV_ID::CAN3,
            2,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 2:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset2 = {
            MOTEC_RECV_ID::CAN3,
            4,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 0:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset3 = {
            MOTEC_RECV_ID::CAN3,
            6,
            0xFF,
            1000,
            DataType::int16
        };

        } // namespace CAN3

        namespace CAN4{

        /**
         * @brief Offset 0:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset0 = {
            MOTEC_RECV_ID::CAN4,
            0,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 1:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset1 = {
            MOTEC_RECV_ID::CAN4,
            2,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 2:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset2 = {
            MOTEC_RECV_ID::CAN4,
            4,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 0:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset3 = {
            MOTEC_RECV_ID::CAN4,
            6,
            0xFF,
            1000,
            DataType::int16
        };

        } // namespace CAN4

        namespace CAN5{

        /**
         * @brief Offset 0:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset0 = {
            MOTEC_RECV_ID::CAN5,
            0,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 1:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset1 = {
            MOTEC_RECV_ID::CAN5,
            2,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 2:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset2 = {
            MOTEC_RECV_ID::CAN5,
            4,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 0:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset3 = {
            MOTEC_RECV_ID::CAN5,
            6,
            0xFF,
            1000,
            DataType::int16
        };

        } // namespace CAN5

        namespace CAN6{

        /**
         * @brief Offset 0:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset0 = {
            MOTEC_RECV_ID::CAN6,
            0,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 1:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset1 = {
            MOTEC_RECV_ID::CAN6,
            2,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 2:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset2 = {
            MOTEC_RECV_ID::CAN6,
            4,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 0:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset3 = {
            MOTEC_RECV_ID::CAN6,
            6,
            0xFF,
            1000,
            DataType::int16
        };

        } // namespace CAN6

        namespace CAN7{

        /**
         * @brief Offset 0:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset0 = {
            MOTEC_RECV_ID::CAN7,
            0,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 1:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset1 = {
            MOTEC_RECV_ID::CAN7,
            2,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 2:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset2 = {
            MOTEC_RECV_ID::CAN7,
            4,
            0xFF,
            1000,
            DataType::int16
        };

        /**
         * @brief Offset 0:
         * Contained as unsigned 16-bit Integer
         */
        constexpr data Offset3 = {
            MOTEC_RECV_ID::CAN7,
            6,
            0xFF,
            1000,
            DataType::int16
        };

        } // namespace CAN7

    } // namespace DATA_ECU

}