# PROJET COLIS CONNECTE

## Description du projet 

Notre projet consiste à développer une  technologie de suivi de colis connecté par moyen de géolocalisation, permettant non seulement de suivre la livraison en temps réel, mais aussi de limiter l’impact environnemental du e-commerce. On pourrait aussi savoir si le colis a été ouvert, modifié ou dégradé.

## Etat de l'art 
 y a plusieurs projets autour de cette technologie, le plus récent  étant celui développé par la  start-up nantaise LivingPackets qui consiste à mettre en place un colis connecté (The box). Leur technologie comporte des capteurs permettant d'alerter en cas d'ouverture et de fermeture, de choc, d'humidité ou de variation de température, notamment pour le contenue nécessitant que la chaine du froid soit respectée.

### The box (LivingPackets)
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/colis.jpg"/>
<br></br>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/boite.jpeg"/>
<br></br>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/tel.jpg"/>
<br></br>

##### Source : LivingPackets (https://www.livingpackets.com/)

### Description de notre solution de base et de son utilité
En effet avec le développent du E-commerce, le nombre de ventes en ligne ne cesse d’augmenter (hausse de 13,4 % en France en 2018) et le trafic de marchandises prend une ampleur importante.
L'impact environnemental du secteur doit être énorme !
La livraison de colis étant une étape cruciale durant laquelle ce dernier peut être égaré, endommagé ou livré à la mauvaise adresse
Notre solution consistera à mettre en place, au niveau du colis, des capteurs (Arduino UNO), un module GSM (notification de l'état du colis), un traqueur GPS (localisation du colis) et une caméra (montrer l'état du colis).
Et tout ceci à l'appui d'une application de suivi en temps réel du colis. 

## Etude fonctionnelle 

### Diagramme UML
#### Diagramme d'état transition
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/Colis_connect%C3%A9.jpg"/>
<br></br>

#### Diagramme de cas d'utilisation 
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/diagramme_smartbox.jpg"/>
<br></br>

#### Diagramme de classe 
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/diagramme_class.jpg"/>
<br></br>

### Branchements 

<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/smart_box_sketch.png"/>
<br></br>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/smart_box_schematic.png"/>
<br></br>

