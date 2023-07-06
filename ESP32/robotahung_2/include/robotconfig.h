bool pauseMeasurement;
const float min_speed[4] = {0.008631, -0.01431, -0.0317697, 0.00723746}; //(ADA) Minimum speed for left forward, right forward, left reverse, right reverse respectively
const float speed_to_pwm[4] = {0.0083231642859, 0.0080549944, 0.00824112673728, 0.007929}; //(ADA) Speed to pwm conversion for left forward, right forward, left reverse, right reverse respectively
const float min_speed_reverse_cmd = 0.000247354; //(TIDAK) Adjustment for wheelchair motor
const float wheel_dia = 0.2775; //(ADA) Wheel radius, in m
const float wheelbase = 0.405; //(ADA) Wheelbase, in m
const float encoder_cpr = 100; //(ADA) Encoder ticks or counts per rotation
const float speed_to_pwm_ratio = 0.000123677; //(TIDAK) Ratio to convert speed (in m/s) to PWM value. 
//It was obtained by plotting the wheel speed in relation to the PWM motor command (the value is the slope of the linear function).

const float wheel_gear_ratio = 98.66667; //(ADA) Gearbox ratio
const float max_speed = 0.7; //
//const int brakeDuty = 125; //Full brake. Adjustable 0-255