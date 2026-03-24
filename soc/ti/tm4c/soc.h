/* SPDX-License-Identifier: Apache-2.0 */

#ifndef TI_TIVA_SOC_H_
#define TI_TIVA_SOC_H_

/*
 * CMSIS IRQn_Type enum is broken relative to ARM GNU compiler.
 *
 * Redefine IRQn_Type to unsigned int to avoid the compiler sign-extending
 * IRQ numbers above 0x80 into negative values, causing spurious Hard Faults.
 */
typedef unsigned int IRQn_Type;

typedef enum {
	Reset_IRQn             = -15,
	NonMaskableInt_IRQn    = -14,
	HardFault_IRQn         = -13,
	MemoryManagement_IRQn  = -12,
	BusFault_IRQn          = -11,
	UsageFault_IRQn        = -10,
	SVCall_IRQn            =  -5,
	DebugMonitor_IRQn      =  -4,
	PendSV_IRQn            =  -2,
	SysTick_IRQn           =  -1,
} CMSIS_IRQn_Type;

#define __CM4_REV              0
#define __MPU_PRESENT          0
#define __NVIC_PRIO_BITS       NUM_IRQ_PRIO_BITS
#define __Vendor_SysTickConfig 0
#define __FPU_PRESENT          1

#include <core_cm4.h>

#endif /* TI_TIVA_SOC_H_ */
