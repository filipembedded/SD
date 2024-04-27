#include "SD.h"
#include "SD_Config.h"

#if STM32F103
#include "stm32f1xx_hal.h"
#endif


/* Functions */

SD_Status_t SD_Init(SD_Type_t *cardType);
SD_Status_t SD_SendCmd(SD_Command_t cmd, uint32_t arg);
SD_Status_t SD_ReadSingleBlock(uint8_t *buffer, uint32_t startBlock);
SD_Status_t SD_WriteSingleBlock(uint8_t *buffer, uint32_t startBlock);
SD_Status_t SD_Erase(uint32_t startBlock, uint32_t totalBlocks);

void prvInitSPI(SPI_Instance_t instance){
#if STM32F103
	switch (instance){
	case SPI_INSTANCE_0:
	{
		break;
	}
	case SPI_INSTANCE_1:
	{
		SPI_HandleTypeDef hspi1;
		hspi1.Instance = SPI1;
		hspi1.Init.Mode = SPI_MODE_MASTER;
		hspi1.Init.Direction = SPI_DIRECTION_2LINES;
		hspi1.Init.DataSize = SPI_DATASIZE_8BIT;
		hspi1.Init.CLKPolarity = SPI_POLARITY_LOW;
		hspi1.Init.CLKPhase = SPI_PHASE_1EDGE;
		hspi1.Init.NSS = SPI_NSS_SOFT;
		hspi1.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_256;
		hspi1.Init.FirstBit = SPI_FIRSTBIT_MSB;
		hspi1.Init.TIMode = SPI_TIMODE_DISABLE;
		hspi1.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
		hspi1.Init.CRCPolynomial = 10;
		if (HAL_SPI_Init(&hspi1) != HAL_OK)
		{
		 // Error_Handler();
		}
	}
	case SPI_INSTANCE_2:
	{
		break;
	}
	case SPI_INSTANCE_3:
	{
		break;
	}

	}
#endif
}
