MultiWii for MultiWii 328P Flight Controller with a Micro Integrated PCB w/ESCs Quadcopter Frame 235mm
also known as the D235.

The board has been modified to use Hobby King 10A ESCs PRODUCT ID: 261000002 with SimonK firmware 

http://www.hobbyking.com/hobbyking/store/__27033__multiwii_328p_flight_controller_w_ftdi_dsm2_port.html
http://hobbyking.com/hobbyking/store/__22319__Micro_Integrated_PCB_w_ESCs_Quadcopter_Frame_235mm_KIT_.html
http://hobbyking.com/hobbyking/store/__21247__HobbyKing_10A_ESC_1A_UBEC.html

Pinouts & Motor Layout: See file HobbyKing_MultiWii_328P_Pinouts.png

NOTE:   Changed pinouts for Pitch, Roll, Throttle, Yaw & Aux1 for easy connect… to a Devo RX701 receiver.

The battery low connector now works. Construct a voltage divider consisting of a 33k and 10k resistors. 
The 33k resistor conects to the battery positive and the 10k resistor to ground.
The connection between the resistors is connected to the Bat pin on the board (A7). 

Receiver Connections
Board           Receiver
Thr     ->      Elev
Rol     ->      Aile
Pit     ->      Thro
Yaw     ->      Rudd
Aux1    ->      Aux1


Quadcopter Motor Connectons             
Motor1  ->      D3
Motor2  ->      D10
Motor3  ->      D9
Motor4  ->      D11


