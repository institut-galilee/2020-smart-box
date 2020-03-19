# PROJET COLIS CONNECTE

## Description du projet 

Notre projet consiste à développer une  technologie de suivi de colis connecté par moyen de géolocalisation, permettant non seulement de suivre la livraison en temps réel, mais aussi de limiter l’impact environnemental du e-commerce. On pourrait aussi savoir si le colis a été ouvert, modifié ou dégradé.

## Uttilités du projet 
le but de notre proejt et d'assurer une livraison sure répondant aux besoins des clients. cela permettera non seulement de gélocaliser la livraison mais aussi de capturer son état à chaque changement, ensuite, de notifier le client de ce changement.

## Sénario d'utilisation du projet

Afin que notre livraison s'effectue dans les meilleurs conditions, nous allons mettre au point un système de colis connécté et pour cela nous allons décrire ci-dessous son sénarion d'utilisation 
1. la livraison s'effectuera à l'aide d'une boite à colis connécté à une application mobile, la boite en question comportera un GPS pour gélocaliser le colis à tout moment, elle comportera aussi une caméra permettant de capturer l'état du colis. 
2. l'utilisateur de l'application Android recevra des notifications, le notifiant de l'état et de la position du colis, ces notifications serons envoyés grace au module gsm implenté dans la boite à colis.
3. la boite à colis connecté comportera aussi un capteur d'humidité et de température qui grace à lui on connetera l'état du colis, on saura s'il a été ouvert, modifié ou dégradé.

## Etat de l'art 
 y a plusieurs projets autour de cette technologie, le plus récent  étant celui développé par la  start-up nantaise LivingPackets qui consiste à mettre en place un colis connecté (The box). Leur technologie comporte des capteurs permettant d'alerter en cas d'ouverture et de fermeture, de choc, d'humidité ou de variation de température, notamment pour le contenue nécessitant que la chaine du froid soit respectée.
le prix du 'the box' allait jusqu'à 
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

### réalisation de l'application 
http://ai2.appinventor.mit.edu/#6020199882555392
### Branchements 

<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/smart_box_sketch.png"/>
<br></br>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/smart_box_schematic.png"/>
<br></br>

