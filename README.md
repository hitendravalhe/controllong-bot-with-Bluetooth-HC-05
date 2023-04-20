# controllong-bot-with-Bluetooth-HC-05-
in this code we are controlling the robot with the help of bluetooth module hc-05
in this project {
  firstly Arduino is a microcontroller board that can be programmed to control various electronic devices, including motors. By using Bluetooth technology, it is possible to remotely control the motors connected to the board. One popular Bluetooth module is the HC-05.

To connect the HC-05 module to the Arduino board, the TX pin of the module is connected to the RX pin of the board and the RX pin of the module is connected to the TX pin of the board. Additionally, the VCC pin of the module is connected to the 5V pin of the board and the GND pin of the module is connected to the GND pin of the board.

Once the Bluetooth module is connected, it is necessary to write a program to control the motors. In this case, the motors are connected to pins 11, 10, 9, and 8 of the Arduino board. By using a motor driver or an H-bridge, the Arduino can control the speed and direction of the motors.

The program can be written in the Arduino IDE and uploaded to the board. The program can receive commands from a Bluetooth-enabled device, such as a smartphone or a computer, and then control the motors accordingly. For example, the program can receive a command to move the motors forward or backward, or to change the speed of the motors.

Overall, by connecting the HC-05 module to the Arduino board and connecting the motors to the appropriate pins, it is possible to create a remote-controlled system for controlling the motors using a Bluetooth-enabled device.
}
