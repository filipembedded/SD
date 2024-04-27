################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middleware/src/SD.c 

OBJS += \
./Middleware/src/SD.o 

C_DEPS += \
./Middleware/src/SD.d 


# Each subdirectory must supply rules for building sources it contributes
Middleware/src/%.o Middleware/src/%.su Middleware/src/%.cyclo: ../Middleware/src/%.c Middleware/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"/home/filip/Documents/code/STM32/SD/Middleware/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Middleware-2f-src

clean-Middleware-2f-src:
	-$(RM) ./Middleware/src/SD.cyclo ./Middleware/src/SD.d ./Middleware/src/SD.o ./Middleware/src/SD.su

.PHONY: clean-Middleware-2f-src

