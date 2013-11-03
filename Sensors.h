#ifndef SENSORS_H_
#define SENSORS_H_

#if defined(MMA7455) || defined(MMA8451Q) || defined(ADXL345) || \
    defined(BMA180) || defined(BMA280) || defined(BMA020) || defined(NUNCHACK) || \
    defined(LIS3LV02) || defined(LSM303DLx_ACC) || defined(ADCACC) || \
    defined(MPU6050) || defined(LSM330) || defined(NUNCHUCK)
void ACC_getADC ();
#endif

#if defined(L3G4200D) || defined(ITG3200) || defined(MPU6050) || defined(LSM330) || \
    defined(MPU3050) || defined(WMP) || defined(NUNCHUCK)
void Gyro_getADC ();
#endif

#if MAG
uint8_t Mag_getADC();
#endif

#if defined(BMP085) || defined(MS561101BA)
uint8_t Baro_update();
#endif

#if SONAR
void Sonar_update();
#endif

void initSensors();
void i2c_rep_start(uint8_t address);
void i2c_write(uint8_t data );
void i2c_stop(void);
void i2c_write(uint8_t data );
void i2c_writeReg(uint8_t add, uint8_t reg, uint8_t val);
uint8_t i2c_readReg(uint8_t add, uint8_t reg);
uint8_t i2c_readAck();
uint8_t i2c_readNak();

// I2C slow functions have a much longer timout. This is to support
// the U-blox NEO-M6 GPS over I2C. It can be slow to respond.
bool waitTransmissionI2C_slow(void);
bool i2c_rep_start_slow(uint8_t address);
bool i2c_write_slow(uint8_t data);
bool i2c_read_slow(uint8_t ack, uint8_t *data);



#endif /* SENSORS_H_ */
