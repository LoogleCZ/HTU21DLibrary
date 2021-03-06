#ifndef HTU21D_PLATFORMSPECIFIC_H_
#define HTU21D_PLATFORMSPECIFIC_H_

#include <stdlib.h>
#include <stdint.h>
#include <avr/io.h>

#define HTU21D_SDA_DDRx				DDRD
#define HTU21D_SDA_PORTx			PORTD
#define HTU21D_SDA_PINx				PIND
#define HTU21D_SDA_PIN_NUMBER		1
#define HTU21D_SDA_PIN_MASK			(1 << 1)

#define HTU21D_SCL_DDRx				DDRD
#define HTU21D_SCL_PORTx			PORTD
#define HTU21D_SCL_PINx				PIND
#define HTU21D_SCL_PIN_NUMBER		0
#define HTU21D_SCL_PIN_MASK			(1 << 0)

#define HTU21D_TWI_STATUS_START_TRANSMITTED 0x08
#define HTU21D_TWI_STATUS_REPEATED_START_TRANSMITTED 0x10

#define HTU21D_TWI_STATUS_ARBITRATION_LOST 0x38

#define HTU21D_TWI_STATUS_ADDR_WRITE_ACK 0x18
#define HTU21D_TWI_STATUS_ADDR_WRITE_NACK 0x20
#define HTU21D_TWI_STATUS_ADDR_READ_ACK 0x40
#define HTU21D_TWI_STATUS_ADDR_READ_NACK 0x48

#define HTU21D_TWI_STATUS_DATA_WRITE_ACK 0x28
#define HTU21D_TWI_STATUS_DATA_WRITE_NACK 0x30

#define HTU21D_TWI_STATUS_DATA_READ_ACKED 0x50
#define HTU21D_TWI_STATUS_DATA_READ_NACKED 0x58

void HTU21D_PlatformSpecificInit();
int HTU21D_I2CBeginWrite();
int HTU21D_I2CBeginRead();
int HTU21D_I2CRead(uint8_t* buffer, size_t size);
int HTU21D_I2CWrite(uint8_t* buffer, size_t size);
int HTU21D_I2CStop();

#endif
