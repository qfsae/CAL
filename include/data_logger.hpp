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
     * @brief Encases all of the Data Types coming off of the ECU meant for the Data Logger
     * 
     */
    namespace DATA_ECU_LOGGER
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

    } // namespace DATA_ECU_LOGGER

} // namespace CAL
