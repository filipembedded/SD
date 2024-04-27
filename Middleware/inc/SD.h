#include <stdint.h>
#include <string.h>

/* Typedefs */
typedef enum  {
	SD_TYPE_UNKNOWN 	  = 0,
	SD_TYPE_DEFAULT 	  = 1,
	SD_TYPE_HIGH_CAPACITY = 2
} SD_Type_t;

typedef enum  {
	SD_INIT_SUCCESSFUL = 0,
	SD_NOT_DETECTED    = 1,
	SD_INIT_FAILED     = 2,
	SD_FAT_INVALID     = 3
} SD_Status_t;

typedef enum SD_Command_t {
	SD_GO_IDLE_STATE 	 	  = 0,
	SD_SEND_OP_COND  	 	  = 1,
	SD_SEND_IF_COND  	 	  = 8,
	SD_SEND_CSD      	 	  = 9,
	SD_STOP_TRANSMISSION 	  = 12,
	SD_SEND_STATUS       	  = 13,
	SD_SET_BLOCK_LEN     	  = 16,
	SD_READ_SINGLE_BLOCK 	  = 17,
	SD_READ_MULTIPLE_BLOCKS   = 18,
	SD_WRITE_SINGLE_BLOCK 	  = 24,
	SD_WRITE_MULTIPLE_BLOCKS  = 25,
	SD_ERASE_BLOCK_START_ADDR = 32,
	SD_ERASE_BLOCK_END_ADDR   = 33,
	SD_ERASE_SELECTED_BLOCKS  = 38,
	SD_SEND_OP_COND_ACMD   	  = 41,
	SD_APP_CMD           	  = 55,
	SD_READ_OCR          	  = 58,
	SD_CRC_ON_OFF        	  = 59
} SD_Command_t;

typedef enum  {
	SPI_INSTANCE_0 = 0,
	SPI_INSTANCE_1 = 1,
	SPI_INSTANCE_2 = 2,
	SPI_INSTANCE_3 = 3,
} SPI_Instance_t;
/* Functions */

SD_Status_t SD_Init(SD_Type_t *cardType);
SD_Status_t SD_SendCmd(SD_Command_t cmd, uint32_t arg);
SD_Status_t SD_ReadSingleBlock(uint8_t *buffer, uint32_t startBlock);
SD_Status_t SD_WriteSingleBlock(uint8_t *buffer, uint32_t startBlock);
SD_Status_t SD_Erase(uint32_t startBlock, uint32_t totalBlocks);

void prvInitSPI(SPI_Instance_t instance);

