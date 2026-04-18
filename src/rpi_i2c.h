#ifndef MPU9250_H
#define MPU9250_H

#include <stdint.h>
#include <hw/i2c.h>

/* I2C */
#define I2C_BUS        1
#define MPU9250_ADDR   0x68
#define I2C_SUCCESS 0
#define I2C_ERROR_NOT_CONNECTED -1
#define I2C_ERROR_ALLOC_FAILED -2
#define I2C_ERROR_OPERATION_FAILED -3
#define I2C_ERROR_CLEANING_UP -4

/* Registers */
#define WHO_AM_I       0x75
#define PWR_MGMT_1     0x6B
#define ACCEL_XOUT_H   0x3B
#define GYRO_XOUT_H    0x43

/* Function declarations */
void mpu9250_init(void);
void read_accel(float *ax, float *ay, float *az);
void read_gyro(float *gx, float *gy, float *gz);

/* the I2C receive data message structure (allocate extra spaces for data bytes) */
struct i2c_recv_data_msg_t
{
    i2c_sendrecv_t hdr;
    uint8_t bytes[0];
};

struct i2c_send_data_msg_t
{
    i2c_send_t hdr;
    uint8_t bytes[0];
};

int smbus_read_byte_data(unsigned bus_number, uint8_t i2c_address, uint8_t register_val, uint8_t *value);

int smbus_read_block_data(unsigned bus_number, uint8_t i2c_address, uint8_t register_val, uint8_t *block_buffer, uint8_t block_size);

int smbus_write_byte_data(unsigned bus_number, uint8_t i2c_address, uint8_t register_val, const uint8_t value);

int smbus_write_block_data(unsigned bus_number, uint8_t i2c_address, uint8_t register_val, const uint8_t *block_buffer, uint8_t block_size);

int smbus_cleanup(unsigned bus_number);

int smbus_read_byte(unsigned bus_number, uint8_t i2c_address, uint8_t *value);

int smbus_read_block(unsigned bus_number, uint8_t i2c_address, uint8_t *block_buffer, uint8_t block_size);

int smbus_write_byte(unsigned bus_number, uint8_t i2c_address, const uint8_t value);

int smbus_write_block(unsigned bus_number, uint8_t i2c_address, const uint8_t *block_buffer, uint8_t block_size);

#endif