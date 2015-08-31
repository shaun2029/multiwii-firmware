MultiWii for MultiWii 328P Flight Controller with a Micro Integrated PCB w/ESCs Quadcopter Frame F330 (DJI 330 clone)

“The F330 is a well thought out 330mm quad frame built from quality materials. The main frame is glass fiber while the arms are constructed from ultra durable polyamide nylon.”

The board is using Hobby King 20A ESCs PRODUCT ID: F-20A with SimonK firmware 

http://www.hobbyking.com/hobbyking/store/__27033__multiwii_328p_flight_controller_w_ftdi_dsm2_port.html
http://www.hobbyking.co.uk/hobbyking/store/__28172__F330_Glass_Fiber_Mini_Quadcopter_Frame_330mm.html
http://hobbyking.com/hobbyking/store/__15202__Hobby_King_20A_ESC_3A_UBEC.html

Pinouts & Motor Layout: See file HobbyKing_MultiWii_328P_Pinouts.png

The battery low connector now works. Construct a voltage divider consisting of a 33k and 10k resistors. 
The 33k resistor conects to the battery positive and the 10k resistor to ground.
The connection between the resistors is connected to the Bat pin on the board (A7). 

Receiver Connections
Board           Receiver
Thr     ->      Thro
Rol     ->      Aile
Pit     ->      Elev
Yaw     ->      Rudd
Aux1    ->      Aux1


Quadcopter Motor Connectons             
Motor1  ->      D3
Motor2  ->      D10
Motor3  ->      D9
Motor4  ->      D11


