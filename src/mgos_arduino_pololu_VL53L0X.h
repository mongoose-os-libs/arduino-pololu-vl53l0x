/*
 * Arduino VL53L0X library API wrapper
 */

#include "VL53L0X.h"

#ifdef __cplusplus
extern "C"
{
#endif

VL53L0X *mgos_VL53L0X_create(void);
void mgos_VL53L0X_begin(VL53L0X *vl53);
void mgos_VL53L0X_close(VL53L0X *vl53);

int mgos_VL53L0X_getLastStatus(VL53L0X *vl53);

void mgos_VL53L0X_setAddress(VL53L0X *vl53, int new_addr);
int mgos_VL53L0X_getAddress(VL53L0X *vl53);

bool mgos_VL53L0X_init_1v8(VL53L0X *vl53);
bool mgos_VL53L0X_init_2v8(VL53L0X *vl53);

void mgos_VL53L0X_writeReg(VL53L0X *vl53, int reg, int value);
void mgos_VL53L0X_writeReg16Bit(VL53L0X *vl53, int reg, int value);
void mgos_VL53L0X_writeReg32Bit(VL53L0X *vl53, int reg, int value);
int mgos_VL53L0X_readReg(VL53L0X *vl53, int reg);
int mgos_VL53L0X_readReg16Bit(VL53L0X *vl53, int reg);
int mgos_VL53L0X_readReg32Bit(VL53L0X *vl53, int reg);

void mgos_VL53L0X_writeMulti(VL53L0X *vl53, int reg, char const * src, int count);
void mgos_VL53L0X_readMulti(VL53L0X *vl53, int reg, char * dst, int count);

bool mgos_VL53L0X_setSignalRateLimit(VL53L0X *vl53, float limit_Mcps);
float mgos_VL53L0X_getSignalRateLimit(VL53L0X *vl53);

bool mgos_VL53L0X_setMeasurementTimingBudget(VL53L0X *vl53, int budget_us);
int mgos_VL53L0X_getMeasurementTimingBudget(VL53L0X *vl53);

bool mgos_VL53L0X_setVcselPulsePeriod(VL53L0X *vl53, VL53L0X::vcselPeriodType type, int period_pclks);
int mgos_VL53L0X_getVcselPulsePeriod(VL53L0X *vl53, VL53L0X::vcselPeriodType type);

void mgos_VL53L0X_startContinuous(VL53L0X *vl53, int period_ms);
void mgos_VL53L0X_stopContinuous(VL53L0X *vl53);
int mgos_VL53L0X_readRangeContinuousMillimeters(VL53L0X *vl53);
int mgos_VL53L0X_readRangeSingleMillimeters(VL53L0X *vl53);

void mgos_VL53L0X_setTimeout(VL53L0X *vl53, int timeout);
int mgos_VL53L0X_getTimeout(VL53L0X *vl53);
bool mgos_VL53L0X_timeoutOccurred(VL53L0X *vl53);

#ifdef __cplusplus
}
#endif  /* __cplusplus */
