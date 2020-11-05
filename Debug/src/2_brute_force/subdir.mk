################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/2_brute_force/2_9_1_bf.cpp 

OBJS += \
./src/2_brute_force/2_9_1_bf.o 

CPP_DEPS += \
./src/2_brute_force/2_9_1_bf.d 


# Each subdirectory must supply rules for building sources it contributes
src/2_brute_force/%.o: ../src/2_brute_force/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


