# Avisa-té

Proyecto para que avise que tu té está en la temperatura exacta para tomar. Por defecto está a 54 grados, lo puedes modificar. 

Usando una wemos d1 mini esp6266, junto con varios sensores, con un mínimo de presupuesto y fácil de montar.


<img src="./images/avisa-te.jpg" width="400"> 

## Funcionamiento

Funciona por micro-usb  a usb. 
- Detecta que el taza esté en la posición correcta (color rojo, y no azul). Para ello dispones de 10 segundos en los que se detecta de forma continuada (cada) la temperatura de la taza y la posición. 
- Cada minuto chequea la temperatura
- Cada 300ms detecta posición taza
- Si la temperatura es correcta, led pasa a verde, y se dispara una canción random por el buzzer. 
- Después entra en un profundo sueño de varias horas. Se debe desconectar, aunque ya no consume apenas. 

## Prerrequisitos
Uso platformio, por lo que se debe instalar visual code, plugin platformio. 

## Lista de materiales necesarios

imagen | Componente |  precio (u) | url
------- |------------- |------- | --------
<img src="./images/components/wemos-d1-mini.png" width="120"> | 2x wemos d1 mini (esp8266) |  1,63€  | [Aliexpress](https://es.aliexpress.com/item/32958591238.html?spm=a2g0s.9042311.0.0.274263c01DRJqH)
sin imagen | Cables conexión proboard de colores | - | -
sin imagen | Protoboard 400 | - | -
sin imagen | Led rgb | - | -
sin imagen | Vl6180x | - | -
sin imagen | Mlx90614 | - | -
sin imagen | zumbador pasivo | - | -
sin imagen | 3 resistencias 220ohm | - | -

<!-- ## Lista herramientas necesarias -->


## Esquema circuito en protoboard

<img src="./images/frintzing-protoboard.png" width="400"> 


## Esquema circuito en PCB

<img src="./images/frintzing-pcb.png" width="400"> 

Así son los resultados:

<img src="./images/pcb1.jpg" width="400"> 
<img src="./images/pcb2.jpg" width="400"> 
<img src="./images/pcb3.jpg" width="400"> 
