// generated with the "ethercat cstruct" command

/* Master 0, Slave 1, "EL1014"
 * Vendor ID:       0x00000002
 * Product code:    0x03f63052
 * Revision number: 0x00100000
 */

#define EL1502_SLAVE_5_DUAL_CNTR	1

ec_pdo_entry_info_t slave_1_pdo_entries[] = {
    {0x6000, 0x01, 1}, /* Input */
    {0x6010, 0x01, 1}, /* Input */
    {0x6020, 0x01, 1}, /* Input */
    {0x6030, 0x01, 1}, /* Input */
};

ec_pdo_info_t slave_1_pdos[] = {
    {0x1a00, 1, slave_1_pdo_entries + 0}, /* Channel 1 */
    {0x1a01, 1, slave_1_pdo_entries + 1}, /* Channel 2 */
    {0x1a02, 1, slave_1_pdo_entries + 2}, /* Channel 3 */
    {0x1a03, 1, slave_1_pdo_entries + 3}, /* Channel 4 */
};

ec_sync_info_t slave_1_syncs[] = {
    {0, EC_DIR_INPUT, 4, slave_1_pdos + 0, EC_WD_DISABLE},
    {0xff}
};

/* Master 0, Slave 2, "EL1014"
 * Vendor ID:       0x00000002
 * Product code:    0x03f63052
 * Revision number: 0x00110000
 */

ec_pdo_entry_info_t slave_2_pdo_entries[] = {
    {0x6000, 0x01, 1}, /* Input */
    {0x6010, 0x01, 1}, /* Input */
    {0x6020, 0x01, 1}, /* Input */
    {0x6030, 0x01, 1}, /* Input */
};

ec_pdo_info_t slave_2_pdos[] = {
    {0x1a00, 1, slave_2_pdo_entries + 0}, /* Channel 1 */
    {0x1a01, 1, slave_2_pdo_entries + 1}, /* Channel 2 */
    {0x1a02, 1, slave_2_pdo_entries + 2}, /* Channel 3 */
    {0x1a03, 1, slave_2_pdo_entries + 3}, /* Channel 4 */
};

ec_sync_info_t slave_2_syncs[] = {
    {0, EC_DIR_INPUT, 4, slave_2_pdos + 0, EC_WD_DISABLE},
    {0xff}
};

/* Master 0, Slave 3, "EL1018"
 * Vendor ID:       0x00000002
 * Product code:    0x03fa3052
 * Revision number: 0x00100000
 */

ec_pdo_entry_info_t slave_3_pdo_entries[] = {
    {0x6000, 0x01, 1}, /* Input */
    {0x6010, 0x01, 1}, /* Input */
    {0x6020, 0x01, 1}, /* Input */
    {0x6030, 0x01, 1}, /* Input */
    {0x6040, 0x01, 1}, /* Input */
    {0x6050, 0x01, 1}, /* Input */
    {0x6060, 0x01, 1}, /* Input */
    {0x6070, 0x01, 1}, /* Input */
};

ec_pdo_info_t slave_3_pdos[] = {
    {0x1a00, 1, slave_3_pdo_entries + 0}, /* Channel 1 */
    {0x1a01, 1, slave_3_pdo_entries + 1}, /* Channel 2 */
    {0x1a02, 1, slave_3_pdo_entries + 2}, /* Channel 3 */
    {0x1a03, 1, slave_3_pdo_entries + 3}, /* Channel 4 */
    {0x1a04, 1, slave_3_pdo_entries + 4}, /* Channel 5 */
    {0x1a05, 1, slave_3_pdo_entries + 5}, /* Channel 6 */
    {0x1a06, 1, slave_3_pdo_entries + 6}, /* Channel 7 */
    {0x1a07, 1, slave_3_pdo_entries + 7}, /* Channel 8 */
};

ec_sync_info_t slave_3_syncs[] = {
    {0, EC_DIR_INPUT, 8, slave_3_pdos + 0, EC_WD_DISABLE},
    {0xff}
};

/* Master 0, Slave 4, "EL2008"
 * Vendor ID:       0x00000002
 * Product code:    0x07d83052
 * Revision number: 0x00100000
 */

ec_pdo_entry_info_t slave_4_pdo_entries[] = {
    {0x7000, 0x01, 1}, /* Output */
    {0x7010, 0x01, 1}, /* Output */
    {0x7020, 0x01, 1}, /* Output */
    {0x7030, 0x01, 1}, /* Output */
    {0x7040, 0x01, 1}, /* Output */
    {0x7050, 0x01, 1}, /* Output */
    {0x7060, 0x01, 1}, /* Output */
    {0x7070, 0x01, 1}, /* Output */
};

ec_pdo_info_t slave_4_pdos[] = {
    {0x1600, 1, slave_4_pdo_entries + 0}, /* Channel 1 */
    {0x1601, 1, slave_4_pdo_entries + 1}, /* Channel 2 */
    {0x1602, 1, slave_4_pdo_entries + 2}, /* Channel 3 */
    {0x1603, 1, slave_4_pdo_entries + 3}, /* Channel 4 */
    {0x1604, 1, slave_4_pdo_entries + 4}, /* Channel 5 */
    {0x1605, 1, slave_4_pdo_entries + 5}, /* Channel 6 */
    {0x1606, 1, slave_4_pdo_entries + 6}, /* Channel 7 */
    {0x1607, 1, slave_4_pdo_entries + 7}, /* Channel 8 */
};

ec_sync_info_t slave_4_syncs[] = {
    {0, EC_DIR_OUTPUT, 8, slave_4_pdos + 0, EC_WD_ENABLE},
    {0xff}
};

/* Master 0, Slave 5, "EL1502"
 * Vendor ID:       0x00000002
 * Product code:    0x05de3052
 * Revision number: 0x00120000
 */
#if !EL1502_SLAVE_5_DUAL_CNTR
ec_pdo_entry_info_t slave_5_pdo_entries[] = {
    {0x7020, 0x01, 1}, /* Enable output functions */
    {0x7020, 0x02, 1}, /* Set output */
    {0x7020, 0x03, 1}, /* Set counter */
    {0x7020, 0x04, 1}, /* Inhibit counter */
    {0x0000, 0x00, 12}, /* Gap */
    {0x7020, 0x11, 32}, /* Set counter value */
    {0x6020, 0x01, 1}, /* Output functions enabled */
    {0x6020, 0x02, 1}, /* Status of output */
    {0x6020, 0x03, 1}, /* Set counter done */
    {0x6020, 0x04, 1}, /* Counter inhibited */
    {0x6020, 0x05, 1}, /* Status of input UD */
    {0x6020, 0x06, 1}, /* Status of input clock */
    {0x0000, 0x00, 7}, /* Gap */
    {0x1c32, 0x20, 1}, /* Sync error */
    {0x0000, 0x00, 1}, /* Gap */
    {0x1802, 0x09, 1}, /* TxPDO Toggle */
    {0x6020, 0x11, 32}, /* Counter value */
};

ec_pdo_info_t slave_5_pdos[] = {
    {0x1602, 6, slave_5_pdo_entries + 0}, /* CNT RxPDO-Map */
    {0x1a02, 11, slave_5_pdo_entries + 6}, /* CNT TxPDO-Map */
};

ec_sync_info_t slave_5_syncs[] = {
    {0, EC_DIR_OUTPUT, 0, NULL, EC_WD_DISABLE},
    {1, EC_DIR_INPUT, 0, NULL, EC_WD_DISABLE},
    {2, EC_DIR_OUTPUT, 1, slave_5_pdos + 0, EC_WD_DISABLE},
    {3, EC_DIR_INPUT, 1, slave_5_pdos + 1, EC_WD_DISABLE},
    {0xff}
};
#else
ec_pdo_entry_info_t slave_5_pdo_entries[] = {
/*CH1 RXPDO*/
    {0x7000, 0x01, 1}, /* Enable output functions */
    {0x7000, 0x02, 1}, /* Set output */
    {0x7000, 0x03, 1}, /* Set counter */
    {0x7000, 0x04, 1}, /* Inhibit counter */
    {0x0000, 0x00, 12}, /* Gap */
    {0x7000, 0x11, 32}, /* Set counter value */
/*CH1 TXPDO*/
    {0x6000, 0x01, 1}, /* Output functions enabled */
    {0x6000, 0x02, 1}, /* Status of output */
    {0x6000, 0x03, 1}, /* Set counter done */
    {0x6000, 0x04, 1}, /* Counter inhibited */
    {0x6000, 0x00, 1}, /* 1bit align */
    {0x6000, 0x06, 1}, /* Status of input clock */
    {0x0000, 0x00, 7}, /* Gap */
    {0x1c32, 0x20, 1}, /* Sync error */
    {0x0000, 0x00, 1}, /* Gap */
    {0x1800, 0x09, 1}, /* TxPDO Toggle */
    {0x6000, 0x11, 32}, /* Counter value */
	/*CH2 RXPDO*/
	{0x7010, 0x01, 1}, /* Enable output functions */
	{0x7010, 0x02, 1}, /* Set output */
	{0x7010, 0x03, 1}, /* Set counter */
	{0x7010, 0x04, 1}, /* Inhibit counter */
	{0x0000, 0x00, 12}, /* Gap */
	{0x7010, 0x11, 32}, /* Set counter value */
	/*CH2 TXPDO*/
    {0x6010, 0x01, 1}, /* Output functions enabled */
    {0x6010, 0x02, 1}, /* Status of output */
    {0x6010, 0x03, 1}, /* Set counter done */
    {0x6010, 0x04, 1}, /* Counter inhibited */
    {0x6010, 0x00, 1}, /* 1bit align */
    {0x6010, 0x06, 1}, /* Status of input clock */
    {0x0000, 0x00, 7}, /* Gap */
    {0x1c32, 0x20, 1}, /* Sync error */
    {0x0000, 0x00, 1}, /* Gap */
    {0x1801, 0x09, 1}, /* TxPDO Toggle */
    {0x6010, 0x11, 32}, /* Counter value */
};

ec_pdo_info_t slave_5_pdos[] = {
    {0x1600, 6, slave_5_pdo_entries + 0}, /* CNT RxPDO-Map */
    {0x1a00, 11, slave_5_pdo_entries + 6}, /* CNT TxPDO-Map */
    {0x1601, 6, slave_5_pdo_entries + 17}, /* CNT RxPDO-Map */
    {0x1a01, 11, slave_5_pdo_entries + 23}, /* CNT TxPDO-Map */
};

ec_sync_info_t slave_5_syncs[] = {
    {0, EC_DIR_OUTPUT, 0, NULL, EC_WD_DISABLE},
    {1, EC_DIR_INPUT, 0, NULL, EC_WD_DISABLE},
    {2, EC_DIR_OUTPUT, 1, slave_5_pdos + 0, EC_WD_DISABLE},
    {3, EC_DIR_INPUT, 1, slave_5_pdos + 1, EC_WD_DISABLE},
    {0xff}
};
#endif
/* Master 0, Slave 6, "EL3022"
 * Vendor ID:       0x00000002
 * Product code:    0x0bce3052
 * Revision number: 0x00100000
 */

ec_pdo_entry_info_t slave_6_pdo_entries[] = {
    {0x6000, 0x01, 1}, /* Underrange */
    {0x6000, 0x02, 1}, /* Overrange */
    {0x6000, 0x03, 2}, /* Limit 1 */
    {0x6000, 0x05, 2}, /* Limit 2 */
    {0x6000, 0x07, 1}, /* Error */
    {0x0000, 0x00, 1}, /* Gap */
    {0x0000, 0x00, 6}, /* Gap */
    {0x1800, 0x07, 1}, /* TxPDO State */
    {0x1800, 0x09, 1}, /* TxPDO Toggle */
    {0x6000, 0x11, 16}, /* Value */
    {0x6010, 0x01, 1}, /* Underrange */
    {0x6010, 0x02, 1}, /* Overrange */
    {0x6010, 0x03, 2}, /* Limit 1 */
    {0x6010, 0x05, 2}, /* Limit 2 */
    {0x6010, 0x07, 1}, /* Error */
    {0x0000, 0x00, 1}, /* Gap */
    {0x0000, 0x00, 6}, /* Gap */
    {0x1802, 0x07, 1}, /* TxPDO State */
    {0x1802, 0x09, 1}, /* TxPDO Toggle */
    {0x6010, 0x11, 16}, /* Value */
};

ec_pdo_info_t slave_6_pdos[] = {
    {0x1a00, 10, slave_6_pdo_entries + 0}, /* AI TxPDO-Map Standard Ch.1 */
    {0x1a02, 10, slave_6_pdo_entries + 10}, /* AI TxPDO-Map Standard Ch.2 */
};

ec_sync_info_t slave_6_syncs[] = {
    {0, EC_DIR_OUTPUT, 0, NULL, EC_WD_DISABLE},
    {1, EC_DIR_INPUT, 0, NULL, EC_WD_DISABLE},
    {2, EC_DIR_OUTPUT, 0, NULL, EC_WD_DISABLE},
    {3, EC_DIR_INPUT, 2, slave_6_pdos + 0, EC_WD_DISABLE},
    {0xff}
};

/* Master 0, Slave 7, "EL3204"
 * Vendor ID:       0x00000002
 * Product code:    0x0c843052
 * Revision number: 0x00110000
 */

ec_pdo_entry_info_t slave_7_pdo_entries[] = {
    {0x6000, 0x01, 1}, /* Underrange */
    {0x6000, 0x02, 1}, /* Overrange */
    {0x6000, 0x03, 2}, /* Limit 1 */
    {0x6000, 0x05, 2}, /* Limit 2 */
    {0x6000, 0x07, 1}, /* Error */
    {0x0000, 0x00, 7}, /* Gap */
    {0x1800, 0x07, 1},
    {0x1800, 0x09, 1},
    {0x6000, 0x11, 16}, /* Value */
    {0x6010, 0x01, 1}, /* Underrange */
    {0x6010, 0x02, 1}, /* Overrange */
    {0x6010, 0x03, 2}, /* Limit 1 */
    {0x6010, 0x05, 2}, /* Limit 2 */
    {0x6010, 0x07, 1}, /* Error */
    {0x0000, 0x00, 7}, /* Gap */
    {0x1801, 0x07, 1},
    {0x1801, 0x09, 1},
    {0x6010, 0x11, 16}, /* Value */
    {0x6020, 0x01, 1}, /* Underrange */
    {0x6020, 0x02, 1}, /* Overrange */
    {0x6020, 0x03, 2}, /* Limit 1 */
    {0x6020, 0x05, 2}, /* Limit 2 */
    {0x6020, 0x07, 1}, /* Error */
    {0x0000, 0x00, 7}, /* Gap */
    {0x1802, 0x07, 1},
    {0x1802, 0x09, 1},
    {0x6020, 0x11, 16}, /* Value */
    {0x6030, 0x01, 1}, /* Underrange */
    {0x6030, 0x02, 1}, /* Overrange */
    {0x6030, 0x03, 2}, /* Limit 1 */
    {0x6030, 0x05, 2}, /* Limit 2 */
    {0x6030, 0x07, 1}, /* Error */
    {0x0000, 0x00, 7}, /* Gap */
    {0x1803, 0x07, 1},
    {0x1803, 0x09, 1},
    {0x6030, 0x11, 16}, /* Value */
};

ec_pdo_info_t slave_7_pdos[] = {
    {0x1a00, 9, slave_7_pdo_entries + 0}, /* RTD TxPDO-Map Ch.1 */
    {0x1a01, 9, slave_7_pdo_entries + 9}, /* RTD TxPDO-Map Ch.2 */
    {0x1a02, 9, slave_7_pdo_entries + 18}, /* RTD TxPDO-Map Ch.3 */
    {0x1a03, 9, slave_7_pdo_entries + 27}, /* RTD TxPDO-Map Ch.4 */
};

ec_sync_info_t slave_7_syncs[] = {
    {0, EC_DIR_OUTPUT, 0, NULL, EC_WD_DISABLE},
    {1, EC_DIR_INPUT, 0, NULL, EC_WD_DISABLE},
    {2, EC_DIR_OUTPUT, 0, NULL, EC_WD_DISABLE},
    {3, EC_DIR_INPUT, 4, slave_7_pdos + 0, EC_WD_DISABLE},
    {0xff}
};

/* Master 0, Slave 8, "EL4122"
 * Vendor ID:       0x00000002
 * Product code:    0x101a3052
 * Revision number: 0x03fa0000
 */

ec_pdo_entry_info_t slave_8_pdo_entries[] = {
    {0x3001, 0x01, 16}, /* Output */
    {0x3002, 0x01, 16}, /* Output */
};

ec_pdo_info_t slave_8_pdos[] = {
    {0x1600, 1, slave_8_pdo_entries + 0}, /* RxPDO 01 mapping */
    {0x1601, 1, slave_8_pdo_entries + 1}, /* RxPDO 02 mapping */
};

ec_sync_info_t slave_8_syncs[] = {
    {0, EC_DIR_OUTPUT, 0, NULL, EC_WD_DISABLE},
    {1, EC_DIR_INPUT, 0, NULL, EC_WD_DISABLE},
    {2, EC_DIR_OUTPUT, 2, slave_8_pdos + 0, EC_WD_DISABLE},
    {3, EC_DIR_INPUT, 0, NULL, EC_WD_DISABLE},
    {0xff}
};

/* Master 0, Slave 9, "EL4122"
 * Vendor ID:       0x00000002
 * Product code:    0x101a3052
 * Revision number: 0x03fa0000
 */

ec_pdo_entry_info_t slave_9_pdo_entries[] = {
    {0x3001, 0x01, 16}, /* Output */
    {0x3002, 0x01, 16}, /* Output */
};

ec_pdo_info_t slave_9_pdos[] = {
    {0x1600, 1, slave_9_pdo_entries + 0}, /* RxPDO 01 mapping */
    {0x1601, 1, slave_9_pdo_entries + 1}, /* RxPDO 02 mapping */
};

ec_sync_info_t slave_9_syncs[] = {
    {0, EC_DIR_OUTPUT, 0, NULL, EC_WD_DISABLE},
    {1, EC_DIR_INPUT, 0, NULL, EC_WD_DISABLE},
    {2, EC_DIR_OUTPUT, 2, slave_9_pdos + 0, EC_WD_DISABLE},
    {3, EC_DIR_INPUT, 0, NULL, EC_WD_DISABLE},
    {0xff}
};


