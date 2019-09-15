Ultrasonic Measuring system with Arduino

Schematics of connections: https://howtomechatronics.com/wp-content/uploads/2015/07/Ultrasonic-Sensor-Cirucit-Schematics-04.png
Link to tutorial website: https://howtomechatronics.com/tutorials/arduino/ultrasonic-sensor-hc-sr04/

Explanation and running the code:

Before connecting Arduino to upload the code, connect sensor accordingly to link of schematics.
To run the code, download it, connect arduino to device, open by Arduino IDE, and upload the code to the board. 

Explanation of calculations:
  
   Distance is calculated by calculating the speed of sound (340m/s), in this case 0.034cm/microseconds
  and dividing the result by half because of the return wave
  and conversion of equation of speed (speed = distance / time )
  so distance = speed * time .
  Result is in CM.
  
  Delay of 2 microseconds is required to make sure that the tigger pin is on LOW state.
  Delay of 10 microseconds is required to send out the ultrasound wave.
  
