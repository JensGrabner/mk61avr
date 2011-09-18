EESchema Schematic File Version 2  date 25.05.2009 11:13:24
LIBS:power,device,transistors,conn,linear,regul,74xx,cmos4000,adc-dac,memory,xilinx,special,microcontrollers,dsp,microchip,analog_switches,motorola,texas,intel,audio,interface,digital-audio,philips,display,cypress,siliconi,opto,atmel,contrib,valves,.\без имени.cache
EELAYER 24  0
EELAYER END
$Descr A4 11700 8267
Sheet 1 1
Title ""
Date "25 may 2009"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Connection ~ 2750 1500
Wire Wire Line
	2950 1500 2750 1500
Wire Wire Line
	2750 2150 2750 1250
Wire Wire Line
	2750 2550 2750 2800
Connection ~ 3350 2300
Wire Wire Line
	2750 2800 2500 2800
Wire Wire Line
	9650 2200 9650 2300
Wire Wire Line
	2500 2900 3350 2900
Wire Wire Line
	3350 2300 3550 2300
Connection ~ 3950 3000
Wire Wire Line
	3950 2800 3950 3000
Wire Wire Line
	2950 4100 2950 3650
Wire Wire Line
	7050 5000 2950 5000
Wire Wire Line
	2950 5000 2950 4500
Wire Wire Line
	2600 4300 7050 4300
Wire Wire Line
	2950 4100 2600 4100
Wire Wire Line
	2950 3650 7050 3650
Wire Wire Line
	9650 5000 7550 5000
Wire Wire Line
	9650 4300 7550 4300
Wire Wire Line
	9650 3650 7550 3650
Wire Wire Line
	2950 4500 2600 4500
Wire Wire Line
	7550 4650 9650 4650
Wire Wire Line
	7550 3950 9650 3950
Connection ~ 5750 4650
Connection ~ 6450 3950
Wire Wire Line
	5400 3500 5400 5000
Wire Wire Line
	6100 3500 6100 4300
Wire Wire Line
	6800 3500 6800 3650
Wire Wire Line
	5400 3000 5400 2700
Wire Wire Line
	6450 3950 6450 3500
Wire Wire Line
	5750 4650 5750 3500
Connection ~ 6800 3650
Connection ~ 6100 4300
Connection ~ 5400 5000
Wire Wire Line
	7050 3950 3150 3950
Wire Wire Line
	2600 4200 3150 4200
Wire Wire Line
	7050 4650 3150 4650
Wire Wire Line
	3150 4650 3150 4400
Wire Wire Line
	3150 4400 2600 4400
Wire Wire Line
	3150 4200 3150 3950
Wire Wire Line
	2500 3000 6800 3000
Connection ~ 5400 3000
Wire Wire Line
	9650 2300 4350 2300
Wire Wire Line
	2750 1800 2950 1800
Connection ~ 2750 1800
Wire Wire Line
	3350 2900 3350 1500
$Comp
L CAPAPOL C2
U 1 1 4A1A2339
P 3150 1500
F 0 "C2" H 3200 1600 50  0000 L CNN
F 1 "10mF" H 3200 1400 50  0000 L CNN
	1    3150 1500
	0    1    -1   0   
$EndComp
$Comp
L C C1
U 1 1 4A1A22C7
P 3150 1800
F 0 "C1" H 3200 1900 50  0000 L CNN
F 1 "0.1 mF" H 3200 1700 50  0000 L CNN
	1    3150 1800
	0    1    1    0   
$EndComp
Text Notes 3250 5000 0    60   ~ 0
l.brown
Text Notes 3250 4300 0    60   ~ 0
white
Text Notes 3250 4650 0    60   ~ 0
green
Text Notes 3250 3950 0    60   ~ 0
blue
Text Notes 3250 3650 0    60   ~ 0
yelow
$Comp
L CAPAPOL C0
U 1 1 4A1A2190
P 2750 2350
F 0 "C0" H 2800 2450 50  0000 L CNN
F 1 "4,7mF" H 2800 2250 50  0000 L CNN
	1    2750 2350
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR?
U 1 1 4A1A2165
P 2750 1250
F 0 "#PWR?" H 2750 1250 30  0001 C CNN
F 1 "GND" H 2750 1180 30  0000 C CNN
	1    2750 1250
	-1   0    0    1   
$EndComp
$Comp
L VCC #PWR?
U 1 1 4A1A212B
P 9650 2200
F 0 "#PWR?" H 9650 2300 30  0001 C CNN
F 1 "VCC" H 9650 2300 30  0000 C CNN
	1    9650 2200
	1    0    0    -1  
$EndComp
$Comp
L LM317 U?
U 1 1 4A1A2095
P 3950 2450
F 0 "U?" H 3950 2750 60  0000 C CNN
F 1 "LM117" H 4000 2200 60  0000 L CNN
	1    3950 2450
	-1   0    0    -1  
$EndComp
Text Label 9650 5000 0    60   ~ 0
PB2
Text Label 9650 4650 0    60   ~ 0
PB3
Text Label 9650 4300 0    60   ~ 0
PB4
Text Label 9650 3950 0    60   ~ 0
PB5 (MOSI)
Text Label 9650 3650 0    60   ~ 0
PB7 (SCK)
Text Notes 1450 2850 0    60   ~ 0
1 - Vout
Text Notes 1450 2950 0    60   ~ 0
2 - VDD
Text Notes 1450 3050 0    60   ~ 0
3 - GND
Text Notes 1400 4550 0    60   ~ 0
5 - SCE
Text Notes 1400 4450 0    60   ~ 0
4 - D/C
Text Notes 1400 4350 0    60   ~ 0
3 - RESET
Text Notes 1400 4250 0    60   ~ 0
2 - SDIN
Text Notes 1400 4150 0    60   ~ 0
1 - SCLK
$Comp
L CONN_3 K0
U 1 1 4A1A182B
P 2150 2900
F 0 "K0" V 2100 2900 50  0000 C CNN
F 1 "LCD pow" V 2200 2900 40  0000 C CNN
	1    2150 2900
	-1   0    0    -1  
$EndComp
$Comp
L CONN_5 P0
U 1 1 4A1A1818
P 2200 4300
F 0 "P0" V 2150 4300 50  0000 C CNN
F 1 "LCD bus" V 2250 4300 50  0000 C CNN
	1    2200 4300
	-1   0    0    -1  
$EndComp
$Comp
L R R9
U 1 1 4A1A131F
P 7300 5000
F 0 "R9" V 7380 5000 50  0000 C CNN
F 1 "1K" V 7300 5000 50  0000 C CNN
	1    7300 5000
	0    -1   -1   0   
$EndComp
$Comp
L R R8
U 1 1 4A1A1312
P 7300 4650
F 0 "R8" V 7380 4650 50  0000 C CNN
F 1 "1K" V 7300 4650 50  0000 C CNN
	1    7300 4650
	0    -1   -1   0   
$EndComp
$Comp
L R R7
U 1 1 4A1A1300
P 7300 4300
F 0 "R7" V 7380 4300 50  0000 C CNN
F 1 "1K" V 7300 4300 50  0000 C CNN
	1    7300 4300
	0    -1   -1   0   
$EndComp
$Comp
L R R6
U 1 1 4A1A12EF
P 7300 3950
F 0 "R6" V 7380 3950 50  0000 C CNN
F 1 "1K" V 7300 3950 50  0000 C CNN
	1    7300 3950
	0    -1   -1   0   
$EndComp
$Comp
L R R5
U 1 1 4A1A12C5
P 7300 3650
F 0 "R5" V 7380 3650 50  0000 C CNN
F 1 "1K" V 7300 3650 50  0000 C CNN
	1    7300 3650
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR?
U 1 1 4A1A1269
P 5400 2700
F 0 "#PWR?" H 5400 2700 30  0001 C CNN
F 1 "GND" H 5400 2630 30  0000 C CNN
	1    5400 2700
	-1   0    0    1   
$EndComp
$Comp
L R R4
U 1 1 4A1A1203
P 6800 3250
F 0 "R4" V 6880 3250 50  0000 C CNN
F 1 "1.2K" V 6800 3250 50  0000 C CNN
	1    6800 3250
	1    0    0    -1  
$EndComp
$Comp
L R R3
U 1 1 4A1A1200
P 6450 3250
F 0 "R3" V 6530 3250 50  0000 C CNN
F 1 "1.2K" V 6450 3250 50  0000 C CNN
	1    6450 3250
	1    0    0    -1  
$EndComp
$Comp
L R R2
U 1 1 4A1A11FA
P 6100 3250
F 0 "R2" V 6180 3250 50  0000 C CNN
F 1 "1.2K" V 6100 3250 50  0000 C CNN
	1    6100 3250
	1    0    0    -1  
$EndComp
$Comp
L R R1
U 1 1 4A1A11F0
P 5750 3250
F 0 "R1" V 5830 3250 50  0000 C CNN
F 1 "1.2K" V 5750 3250 50  0000 C CNN
	1    5750 3250
	1    0    0    -1  
$EndComp
$Comp
L R R0
U 1 1 4A1A11D9
P 5400 3250
F 0 "R0" V 5480 3250 50  0000 C CNN
F 1 "1.2K" V 5400 3250 50  0000 C CNN
	1    5400 3250
	1    0    0    -1  
$EndComp
$EndSCHEMATC
