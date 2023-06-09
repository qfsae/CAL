#pragma once
/**
 * @file cal.hpp
 * @author Jacob Chisholm (jchisholm204.github.io)
 * @brief CAL (CAN Abstraction Layer)
 * @version 3.8
 * @date 2022-11-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "qfsae_structs.hpp"
#include "data_ecu.hpp"
#include "data_pdm.hpp"
#include "data_ecu_recv.hpp"
#include "data_logger.hpp"

// Encase entire library within CAL namespace
namespace CAL {

    /**
     * @brief CAL Object
     * Used for storing CAN bus Data
     */
    class CAL
    {
    private:
        CAN_msg_t ecu1;
        CAN_msg_t ecu2;
        CAN_msg_t pdm1;
        CAN_msg_t pdm2;
        CAN_msg_t ECU_CAN0;
        CAN_msg_t ECU_CAN1;
        CAN_msg_t ECU_CAN2;
        CAN_msg_t ECU_CAN3;
        CAN_msg_t ECU_CAN4;
        CAN_msg_t ECU_CAN5;
        CAN_msg_t ECU_CAN6;
        CAN_msg_t ECU_CAN7;
        CAN_msg_t Logger1;
        CAN_msg_t Logger2;
        CAN_msg_t Logger3;
        CAN_msg_t Logger5;
        CAN_msg_t Logger6;
        CAN_msg_t Logger9;
        CAN_msg_t Logger10;
        CAN_msg_t Logger11;
        CAN_msg_t Logger13;
        CAN_msg_t Logger14;
        CAN_msg_t Logger15;
        CAN_msg_t Logger16;
    public:
    /**
        * @brief Construct a new CAL object - Acts as storage for data
        */
        CAL();
        /**
         * @brief Return the CAN_msg currently stored using an identifier
         * 
         * @param id The Identifier of the CAN_msg to return 
         * @returns reference to internal CAN_msg object
         */
        CAN_msg_t &package(uint32_t id);

        /**
         * @brief Return the CAN_msg stored using a data stored within it 
         * 
         * @param var The child of the CAN_msg to return
         * @returns Reference to parent CAN_msg of var
         */
        CAN_msg_t &package(const data &var);

        /**
         * @brief Update an entire package based off of a CAN message
         * 
         * @param CAN_msg The CAN_msg to update from
         * @returns 0 Success | 1 Incorrect ID
         */
        int updatePackage(CAN_msg_t &CAN_msg);

        /**
         * @brief Update the value of some data currently stored by the CAL object
         * 
         * @param var The Data object to update
         * @param value The new Value to assign to the Data Object
         */
        void updateVar(const data &var, int value);
        
        /**
         * @brief Update the value of some data currently stored by the CAL object
         * 
         * @param var The Data object to update
         * @param value The new Value to assign to the Data Object
         */
        void updateVar(const data &var, float value);

        /**
         * @brief Update the value of some data currently stored by the CAL object
         * 
         * @param var The Data object to update
         * @param value The new Value to assign to the Data Object
         */
        void updateVar(const data &var, bool value);

        /**
         * @brief Get the Data currently stored for a data object
         * 
         * @param CANdata The Data object to retrieve
         * @returns Data (ONLY WORKS WITH INTEGERS)
         */
        int returnVar(const data &CANdata);

        /**
         * @brief Get the Data currently stored for a data object
         * 
         * @param CANdata The Data object to retrieve
         * @returns Data (ONLY WORKS WITH FLOATS)
         */
        float returnVar_f(const data &CANdata);

        /**
         * @brief Get the Data currently stored for a data object
         * 
         * @param CANdata The Data object to retrieve
         * @returns Data (ONLY WORKS WITH PDMOutputStatus DATA TYPES)
         */
        PDMOutputStatus returnVar_os(const data &CANdata);

        /**
         * @brief Get the Data currently stored for a data object
         * 
         * @param CANdata The Data object to retrieve
         * @param data return by reference
         */
        int returnVar(const data &CANdata, int &data);
        
        /**
         * @brief Get the Data currently stored for a data object
         * 
         * @param CANdata The Data object to retrieve
         * @param data return by reference
         */
        int returnVar(const data &CANdata, uint8_t &data);
        
        /**
         * @brief Get the Data currently stored for a data object
         * 
         * @param CANdata The Data object to retrieve
         * @param data return by reference
         */
        int returnVar(const data &CANdata, float &data);
        
         /**
         * @brief Get the Data currently stored for a data object
         * 
         * @param CANdata The Data object to retrieve
         * @param data return by reference
         */
        int returnVar(const data &CANdata, bool &data);    

        /**
         * @brief Get the Data currently stored for a data object
         * 
         * @param CANdata The Data object to retrieve
         * @param data return by reference
         */
        int returnVar(const data &CANdata, PDMOutputStatus &data);
    };    

} // namespace CAL
