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
//#include "../QFSAE_Library_Dependencies/include/qfsae_structs.hpp"

#include "qfsae_structs.hpp"

namespace CAL
{
    /**
     * @brief Encases all of the Data Types coming off of the ECU meant for the Data Logger
     * 
     */
    namespace DATA_ECU_LOGGER
    {
        /**
         * @brief Engine Speed
         * Contained as a 16 Bit Integer,
         * Accessed at: ID 0x0640 | Byte 0
         */
        constexpr data EngineSpeed = {
            MOTEC_ID::Logger_1,
            0,
            0xFFFF,
            1,
            6,
            DataType::int16
        };

    } // namespace DATA_ECU_LOGGER

} // namespace CAL
