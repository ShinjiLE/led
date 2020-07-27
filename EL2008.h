/*
 * EL1018.h
 *
 *  Created on: 27.07.2020
 *      Author: shinji
 */

#ifndef EL2008_H_
#define EL2008_H_

// Data related to Beckhoff EL2008

//  EL2008 8K. Dig. Eingang 24V, 10�s
#define Beckhoff_EL2008 0x00000002, 0x07d83052

// Holds values written to or read from the device
typedef struct {
    // Stores PDO entry's (byte-)offset in the process data.
    unsigned int offset_out[8];

    // Store a bit position (0-3) within the above offset
    unsigned int bit_pos_out[8];

    // Stores all the 1 bit values
    ec_slave_config_t* config;

    // Stores the configuration states of out1, out2
    ec_slave_config_state_t config_state;

} El2008;


#endif /* EL2008_H_ */
