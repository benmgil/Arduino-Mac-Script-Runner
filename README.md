# Arduino-Mac-Script-Runner

## Disclaimer
Running code on a computer that isn't yours without permission is illegal. This is for educational purposes only. I am not responsible for how you use this software. Now that that's out of the way...

## About
This is a program that utilizes the Arduino Micro's ability to simulate keyboard presses. When plugged in, it automatically (and quickly) runs any Python script off of a USB.

## Setting up the Python script
All you have to do here is create the python script that you want to be run on the target machine, and rename it autorun_script.py. Then just put that script in the root directory of a USB drive (make sure it is not in any sub-folders) and make sure the USB drive is formatted to be Mac-compatible.

## Setting up the Arduino circuit
The circuit looks as follows:
![Circuit](https://github.com/benmgil/arduino-mac-script-runner/circuit.png)
The switch is there so that it does not start pressing keys whenever the Arduino is plugged into your computer. Instead, you press the switch when you are ready to start it.
Once that is built, upload the sketch arduino_mac_script_runner.ino to the Arduino board.

## Running it
Once everything is set up, plug the USB drive with the Python script on it into the target machine. Wait for it to be recognized by the computer. Then plug in the Arduino and press the switch. It will do the rest automatically.
