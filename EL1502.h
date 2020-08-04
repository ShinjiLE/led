// Data related to Beckhoff EL1502

// EL1502 2K. +/- Zaehler 24V, 100kHz
#define Beckhoff_EL1502 0x00000002, 0x05de3052

// Holds values written to or read from the device
typedef struct {
    // Stores PDO entry's (byte-)offset in the process data.
	unsigned int offset_en_output[2];
	unsigned int offset_set_output[2];
	unsigned int offset_set_counter[2];
	unsigned int offset_inhibit_counter[2];
	unsigned int offset_set_counter_value[2];
    unsigned int offset_counter[2];

    // Store a bit position (0-7) within the above offset
	unsigned int bit_pos_en_output[2];
	unsigned int bit_pos_set_output[2];
	unsigned int bit_pos_set_counter[2];
	unsigned int bit_pos_inhibit_counter[2];
	unsigned int bit_pos_set_counter_value[2];
    unsigned int bit_pos_counter[2];
    
    // Stores all the 1 bit values
    ec_slave_config_t* config;

    // Stores the configuration states of out1, out2
    ec_slave_config_state_t config_state;

} El1502;
