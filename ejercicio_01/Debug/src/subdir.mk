################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/array.c \
../src/ejercicio_01.c \
../src/matematicas.c \
../src/utn.c 

OBJS += \
./src/array.o \
./src/ejercicio_01.o \
./src/matematicas.o \
./src/utn.o 

C_DEPS += \
./src/array.d \
./src/ejercicio_01.d \
./src/matematicas.d \
./src/utn.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


