# Input da sensore della temperatura mediante Arduino

### Componenti richiesti

- 1x Breadboard
- 1x Arduino Uno R3
- 1x Senosore LM35 

### Il sensore da utilizzare è L' LM35.
- Questo senore non necessita di calibrazione esterna alcuna
- Il voltaggio dato in output è calibrato linearmente alla tdmperatura in gradi celsius con rapporto:°10mV/C
- La sua sensibilità è di 0.5°C accertati a 25°C
- Il suo range va da -55°C fino a +150°C

Appunto perchè il sensore della temperatura genera una tensione come output, lineare alla temperatura in °C effettiva, va convertita con la seguente formula:

Temperatura(°C)=((input(A0)*(voltaggio/n di valori identificabili dalla porta(1024)))-voltaggio con temperatura a 0°C)/rapporto di linearità(0.01)

in questo caso

temp=((input(A0)*(5.0/1024))-0.5)/0.01


![LM35](/Pictures/Tsensor.jpg)

### In particolare il sensore della temperatura ha 3 pin che vengono connessi ad Arduino:

1.+Vs
2.Vout  
3.GND

### I pin del sensore vanno sconnessi rispettivamente in questa configurazione agli ingressi di Arduino:


1. +Vs --> +5V Arduino port
2. Vout --> A0 Arduino port
3. GND --> GND Arduino port

### Seguire il seguente schema per connettere correttamente tra di loro i commponenti

![LM35](/Pictures/ArduinoT.PNG)

il Datasheet completo del componente elettronico LM35 si trova qui:[LM35datasheet](https://www.ti.com/lit/ds/symlink/lm35.pdf)


