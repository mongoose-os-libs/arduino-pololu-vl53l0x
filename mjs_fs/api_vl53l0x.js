// Arduino Pololu_VL53L0X library API. Source C API is defined at:
// [mgos_arduino_pololu_VL53L0X.h]

let Pololu_VL53L0X = {
  _create: ffi('void *mgos_VL53L0X_create(void)'),
  _begin: ffi('void mgos_VL53L0X_begin(void *)'),
  _end: ffi('void mgos_VL53L0X_end(void *)'),
  _close: ffi('void mgos_VL53L0X_close(void *)'),
  _lstatus: ffi('int mgos_VL53L0X_getLastStatus(void *)'),
  _setaddr: ffi('void mgos_VL53L0X_setAddress(void *, int)'),
  _getaddr: ffi('int mgos_VL53L0X_getAddress(void *)'),
  _init18: ffi('bool mgos_VL53L0X_init_1v8(void *)'),
  _init28: ffi('bool mgos_VL53L0X_init_2v8(void *)'),
  _wreg: ffi('void mgos_VL53L0X_writeReg(void *, int, int)'),
  _wreg16: ffi('void mgos_VL53L0X_writeReg16Bit(void *, int, int)'),
  _wreg32: ffi('void mgos_VL53L0X_writeReg32Bit(void *, int, int)'),
  _rreg: ffi('int mgos_VL53L0X_readReg(void *, int)'),
  _rreg16: ffi('int mgos_VL53L0X_readReg16Bit(void *, int)'),
  _rreg32: ffi('int mgos_VL53L0X_readReg32Bit(void *, int)'),
  _wmulti: ffi('void mgos_VL53L0X_writeMulti(void *, int, char *, int)'),
  _rmulti: ffi('void mgos_VL53L0X_readMulti(void *, int, char *, int)'),
  _setsrl: ffi('bool mgos_VL53L0X_setSignalRateLimit(void *, float)'),
  _getsrl: ffi('float mgos_VL53L0X_getSignalRateLimit(void *)'),
  _setmtb: ffi('bool mgos_VL53L0X_setMeasurementTimingBudget(void *, int)'),
  _getmtb: ffi('int mgos_VL53L0X_getMeasurementTimingBudget(void *)'),
  _setvpp: ffi('bool mgos_VL53L0X_setVcselPulsePeriod(void *, int)'),
  _getvpp: ffi('int mgos_VL53L0X_getVcselPulsePeriod(void *)'),
  _strtCon: ffi('void mgos_VL53L0X_startContinuous(void *, int)'),
  _stopCon: ffi('void mgos_VL53L0X_stopContinuous(void *)'),
  _rconmil: ffi('int mgos_VL53L0X_readRangeContinuousMillimeters(void *)'),
  _rsinmil: ffi('int mgos_VL53L0X_readRangeSingleMillimeters(void *)'),
  _setto: ffi('void mgos_VL53L0X_setTimeout(void *, int)'),
  _getto: ffi('int mgos_VL53L0X_getTimeout(void *)'),
  _tooccr: ffi('bool mgos_VL53L0X_timeoutOccurred(void *)'),

  _proto: {
    begin: function() {
      return Pololu_VL53L0X._begin(this.vls);
    },

    end: function() {
      return Pololu_VL53L0X._end(this.vls);
    },

    close: function() {
      return Pololu_VL53L0X._close(this.vls);
    },

    getLastStatus: function() {
      return Pololu_VL53L0X._lstatus(this.vls);
    },

    setAddress: function(new_addr) {
      return Pololu_VL53L0X._setaddr(this.vls, new_addr);
    },

    getAddress: function() {
      return Pololu_VL53L0X._getaddr(this.vls);
    },

    init_1v8: function() {
      return Pololu_VL53L0X._init18(this.vls);
    },

    init_2v8: function() {
      return Pololu_VL53L0X._init28(this.vls);
    },

    writeReg: function(reg, value) {
      return Pololu_VL53L0X._wreg(this.vls, reg, value);
    },

    writeReg16Bit: function(reg, value) {
      return Pololu_VL53L0X._wreg16(this.vls, reg, value);
    },

    writeReg32Bit: function(reg, value) {
      return Pololu_VL53L0X._wreg32(this.vls, reg, value);
    },

    readReg: function(reg) {
      return Pololu_VL53L0X._rreg(this.vls, reg);
    },

    readReg16Bit: function(reg) {
      return Pololu_VL53L0X._rreg16(this.vls, reg);
    },

    readReg32Bit: function(reg) {
      return Pololu_VL53L0X._rreg32(this.vls, reg);
    },

    writeMulti: function(reg, src, count) {
      return Pololu_VL53L0X._wmulti(this.vls, reg, src, count);
    },

    readMulti: function(reg, dst, count) {
      return Pololu_VL53L0X._rmulti(this.vls, reg, dst, count);
    },

    setSignalRateLimit: function(limit_Mcps) {
      return Pololu_VL53L0X._setsrl(this.vls, limit_Mcps);
    },

    getSignalRateLimit: function() {
      return Pololu_VL53L0X._getsrl(this.vls);
    },

    setMeasurementTimingBudget: function(budget_us) {
      return Pololu_VL53L0X._setmtb(this.vls, budget_us);
    },

    getMeasurementTimingBudget: function() {
      return Pololu_VL53L0X._getmtb(this.vls);
    },

    setVcselPulsePeriod: function(type, period_pclks) {
      return Pololu_VL53L0X._setvpp(this.vls, type, period_pclks);
    },

    getVcselPulsePeriod: function(type) {
      return Pololu_VL53L0X._getvpp(this.vls, type);
    },

    startContinuous: function(period_ms) {
      return Pololu_VL53L0X._strtCon(this.vls, period_ms);
    },

    stopContinuous: function() {
      return Pololu_VL53L0X._stopCon(this.vls);
    },

    readRangeContinuousMillimeters: function() {
      return Pololu_VL53L0X._rconmil(this.vls);
    },

    readRangeSingleMillimeters: function() {
      return Pololu_VL53L0X._rsinmil(this.vls);
    },

    setTimeout: function(timeout) {
      return Pololu_VL53L0X._setto(this.vls, timeout);
    },

    getTimeout: function() {
      return Pololu_VL53L0X._getto(this.vls);
    },

    timeoutOccurred: function() {
      return Pololu_VL53L0X._tooccr(this.vls);
    },
  },

  create: function() {
    let obj = Object.create(Pololu_VL53L0X._proto);
    obj.vls = Pololu_VL53L0X._create();
    return obj;
  },

}
