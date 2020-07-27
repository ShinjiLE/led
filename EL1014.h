/*
 * EL1014.h
 *
 *  Created on: 27.07.2020
 *      Author: shinji
 */

#ifndef EL1014_H_
#define EL1014_H_

// Data related to Beckhoff EL1014

// EL1014 4K. Dig. Eingang 24V, 10�s
#define Beckhoff_EL1014 0x00000002, 0x03f63052

// Holds values written to or read from the device
typedef struct {
    // Stores PDO entry's (byte-)offset in the process data.
    unsigned int offset_in[4];

    // Store a bit position (0-3) within the above offset
    unsigned int bit_pos_in[4];

    // Stores all the 1 bit values
    ec_slave_config_t* config;

    // Stores the configuration states of out1, out2
    ec_slave_config_state_t config_state;

} El1014;


#endif /* EL1014_H_ */
