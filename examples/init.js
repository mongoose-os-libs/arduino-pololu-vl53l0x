load('api_vl53l0x.js');
load('api_timer.js');
 
// Initialize Pololu VL53L0X library
let vl53 = Pololu_VL53L0X.create();
vl53.begin();

vl53.init_2v8();
vl53.setTimeout(500);

// reduce timing budget to 20 ms (default is about 33 ms, High Speed)
// vl53.setMeasurementTimingBudget(20000);
// increase timing budget to 200 ms (High Accuracy)
vl53.setMeasurementTimingBudget(200000);

Timer.set(1000 /* milliseconds */, true /* repeat */, function() {
  print('Distance: ', vl53.readRangeSingleMillimeters());
}, null);
