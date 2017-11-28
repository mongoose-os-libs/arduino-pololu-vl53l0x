
#include "mgos_arduino_pololu_VL53L0X.h"
#include <Wire.h>

VL53L0X *mgos_VL53L0X_create(void) {
  return new VL53L0X();
}

void mgos_VL53L0X_begin(VL53L0X *vl53) {
  if (vl53 == nullptr) return;
  Wire.begin();
}
void mgos_VL53L0X_end(VL53L0X *vl53) {
  if (vl53 == nullptr) return;
  Wire.end();
}
void mgos_VL53L0X_close(VL53L0X *vl53) {
  if (vl53 != nullptr) {
    delete vl53;
    vl53 = nullptr;
  }
}

int mgos_VL53L0X_getLastStatus(VL53L0X *vl53) {
  if (vl53 == nullptr) return -1;
  return vl53->last_status;
}

void mgos_VL53L0X_setAddress(VL53L0X *vl53, int new_addr) {
  if (vl53 == nullptr) return;
  vl53->setAddress(new_addr);
}
int mgos_VL53L0X_getAddress(VL53L0X *vl53) {
  if (vl53 == nullptr) return -1;
  return vl53->getAddress();
}

bool mgos_VL53L0X_init_1v8(VL53L0X *vl53) {
  if (vl53 == nullptr) return false;
  return vl53->init(false);
}
bool mgos_VL53L0X_init_2v8(VL53L0X *vl53) {
  if (vl53 == nullptr) return false;
  return vl53->init(true);
}

void mgos_VL53L0X_writeReg(VL53L0X *vl53, int reg, int value) {
  if (vl53 == nullptr) return;
  vl53->writeReg(reg, value);
}
void mgos_VL53L0X_writeReg16Bit(VL53L0X *vl53, int reg, int value) {
  if (vl53 == nullptr) return;
  vl53->writeReg16Bit(reg, value);
}
void mgos_VL53L0X_writeReg32Bit(VL53L0X *vl53, int reg, int value) {
  if (vl53 == nullptr) return;
  vl53->writeReg32Bit(reg, value);
}
int mgos_VL53L0X_readReg(VL53L0X *vl53, int reg) {
  if (vl53 == nullptr) return -1;
  return vl53->readReg(reg);
}
int mgos_VL53L0X_readReg16Bit(VL53L0X *vl53, int reg) {
  if (vl53 == nullptr) return -1;
  return vl53->readReg16Bit(reg);
}
int mgos_VL53L0X_readReg32Bit(VL53L0X *vl53, int reg) {
  if (vl53 == nullptr) return -1;
  return vl53->readReg32Bit(reg);
}

void mgos_VL53L0X_writeMulti(VL53L0X *vl53, int reg, char const * src, int count) {
  if (vl53 == nullptr) return;
  vl53->writeMulti(reg, (uint8_t *)src, count);
}
void mgos_VL53L0X_readMulti(VL53L0X *vl53, int reg, char * dst, int count) {
  if (vl53 == nullptr) return;
  vl53->readMulti(reg, (uint8_t *)dst, count);
}

bool mgos_VL53L0X_setSignalRateLimit(VL53L0X *vl53, float limit_Mcps) {
  if (vl53 == nullptr) return false;
  return vl53->setSignalRateLimit(limit_Mcps);
}
float mgos_VL53L0X_getSignalRateLimit(VL53L0X *vl53) {
  if (vl53 == nullptr) return -1.;
  return vl53->getSignalRateLimit();
}

bool mgos_VL53L0X_setMeasurementTimingBudget(VL53L0X *vl53, int budget_us) {
  if (vl53 == nullptr) return false;
  return vl53->setMeasurementTimingBudget(budget_us);
}
int mgos_VL53L0X_getMeasurementTimingBudget(VL53L0X *vl53) {
  if (vl53 == nullptr) return -1;
  return vl53->getMeasurementTimingBudget();
}

bool mgos_VL53L0X_setVcselPulsePeriod(VL53L0X *vl53, VL53L0X::vcselPeriodType type, int period_pclks) {
  if (vl53 == nullptr) return false;
  return vl53->setVcselPulsePeriod(type, period_pclks);
}
int mgos_VL53L0X_getVcselPulsePeriod(VL53L0X *vl53, VL53L0X::vcselPeriodType type) {
  if (vl53 == nullptr) return -1;
  return vl53->getVcselPulsePeriod(type);
}

void mgos_VL53L0X_startContinuous(VL53L0X *vl53, int period_ms) {
  if (vl53 == nullptr) return;
  vl53->startContinuous(period_ms);
}
void mgos_VL53L0X_stopContinuous(VL53L0X *vl53) {
  if (vl53 == nullptr) return;
  vl53->stopContinuous();
}
int mgos_VL53L0X_readRangeContinuousMillimeters(VL53L0X *vl53) {
  if (vl53 == nullptr) return -1;
  return vl53->readRangeContinuousMillimeters();
}
int mgos_VL53L0X_readRangeSingleMillimeters(VL53L0X *vl53) {
  if (vl53 == nullptr) return -1;
  return vl53->readRangeSingleMillimeters();
}

void mgos_VL53L0X_setTimeout(VL53L0X *vl53, int timeout) {
  if (vl53 == nullptr) return;
  vl53->setTimeout(timeout);
}
int mgos_VL53L0X_getTimeout(VL53L0X *vl53) {
  if (vl53 == nullptr) return -1;
  return vl53->getTimeout();
}
bool mgos_VL53L0X_timeoutOccurred(VL53L0X *vl53) {
  if (vl53 == nullptr) return false;
  return vl53->timeoutOccurred();
}
