#include "Adafruit_Sensor.h"

/**************************************************************************/
/*!
    @brief  Prints sensor information to serial console
*/
/**************************************************************************/
void Adafruit_Sensor::printSensorDetails(void) {
  sensor_t sensor;
  getSensor(&sensor);
  SerialUSB.println("------------------------------------");
  SerialUSB.print(F("Sensor:       "));
  SerialUSB.println(sensor.name);
  SerialUSB.print(F("Type:         "));
  switch ((sensors_type_t)sensor.type) {
  case SENSOR_TYPE_ACCELEROMETER:
    SerialUSB.print(F("Acceleration (m/s2)"));
    break;
  case SENSOR_TYPE_MAGNETIC_FIELD:
    SerialUSB.print(F("Magnetic (uT)"));
    break;
  case SENSOR_TYPE_ORIENTATION:
    SerialUSB.print(F("Orientation (degrees)"));
    break;
  case SENSOR_TYPE_GYROSCOPE:
    SerialUSB.print(F("Gyroscopic (rad/s)"));
    break;
  case SENSOR_TYPE_LIGHT:
    SerialUSB.print(F("Light (lux)"));
    break;
  case SENSOR_TYPE_PRESSURE:
    SerialUSB.print(F("Pressure (hPa)"));
    break;
  case SENSOR_TYPE_PROXIMITY:
    SerialUSB.print(F("Distance (cm)"));
    break;
  case SENSOR_TYPE_GRAVITY:
    SerialUSB.print(F("Gravity (m/s2)"));
    break;
  case SENSOR_TYPE_LINEAR_ACCELERATION:
    SerialUSB.print(F("Linear Acceleration (m/s2)"));
    break;
  case SENSOR_TYPE_ROTATION_VECTOR:
    SerialUSB.print(F("Rotation vector"));
    break;
  case SENSOR_TYPE_RELATIVE_HUMIDITY:
    SerialUSB.print(F("Relative Humidity (%)"));
    break;
  case SENSOR_TYPE_AMBIENT_TEMPERATURE:
    SerialUSB.print(F("Ambient Temp (C)"));
    break;
  case SENSOR_TYPE_OBJECT_TEMPERATURE:
    SerialUSB.print(F("Object Temp (C)"));
    break;
  case SENSOR_TYPE_VOLTAGE:
    SerialUSB.print(F("Voltage (V)"));
    break;
  case SENSOR_TYPE_CURRENT:
    SerialUSB.print(F("Current (mA)"));
    break;
  case SENSOR_TYPE_COLOR:
    SerialUSB.print(F("Color (RGBA)"));
    break;
  case SENSOR_TYPE_TVOC:
    SerialUSB.print(F("Total Volatile Organic Compounds (ppb)"));
    break;
  case SENSOR_TYPE_VOC_INDEX:
    SerialUSB.print(F("Volatile Organic Compounds (Index)"));
    break;
  case SENSOR_TYPE_NOX_INDEX:
    SerialUSB.print(F("Nitrogen Oxides (Index)"));
    break;
  case SENSOR_TYPE_CO2:
    SerialUSB.print(F("Carbon Dioxide (ppm)"));
    break;
  case SENSOR_TYPE_ECO2:
    SerialUSB.print(F("Equivalent/estimated CO2 (ppm)"));
    break;
  case SENSOR_TYPE_PM10_STD:
    SerialUSB.print(F("Standard Particulate Matter 1.0 (ppm)"));
    break;
  case SENSOR_TYPE_PM25_STD:
    SerialUSB.print(F("Standard Particulate Matter 2.5 (ppm)"));
    break;
  case SENSOR_TYPE_PM100_STD:
    SerialUSB.print(F("Standard Particulate Matter 10.0 (ppm)"));
    break;
  case SENSOR_TYPE_PM10_ENV:
    SerialUSB.print(F("Environmental Particulate Matter 1.0 (ppm)"));
    break;
  case SENSOR_TYPE_PM25_ENV:
    SerialUSB.print(F("Environmental Particulate Matter 2.5 (ppm)"));
    break;
  case SENSOR_TYPE_PM100_ENV:
    SerialUSB.print(F("Environmental Particulate Matter 10.0 (ppm)"));
    break;
  case SENSOR_TYPE_GAS_RESISTANCE:
    SerialUSB.print(F("Gas Resistance (ohms)"));
    break;
  case SENSOR_TYPE_UNITLESS_PERCENT:
    SerialUSB.print(F("Unitless Percent (%)"));
    break;
  case SENSOR_TYPE_ALTITUDE:
    SerialUSB.print(F("Altitude (m)"));
    break;
  }

  SerialUSB.println();
  SerialUSB.print(F("Driver Ver:   "));
  SerialUSB.println(sensor.version);
  SerialUSB.print(F("Unique ID:    "));
  SerialUSB.println(sensor.sensor_id);
  SerialUSB.print(F("Min Value:    "));
  SerialUSB.println(sensor.min_value);
  SerialUSB.print(F("Max Value:    "));
  SerialUSB.println(sensor.max_value);
  SerialUSB.print(F("Resolution:   "));
  SerialUSB.println(sensor.resolution);
  SerialUSB.println(F("------------------------------------\n"));
}
