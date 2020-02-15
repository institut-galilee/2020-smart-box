<b><h1> Rapport TP2 </h1></b>

<h1>Lab 2 Introduction à la communication</h1>

<b><h2> Partie 1: Fritzing </h2></b>
<p> Dans cette partie nous avons réalisé, comme il a été demandé dans le sujet, d'abord la création d'un nouveau sketch puis la recherche et l'ajout du NodeMCU-32S sur Fritzing en suivant le lien du composant.</p>
<h4>1. Création d'un sketch aléatoire composé de 5 éléments</h4>
<p> Notre Sketch est composé de 5 éléments qui sont : ESP-32S, 400 Hole Breadboard, un capteur de température (lm35), 3 fils éléctriques(jumper Wire65), une résistance 220 Ω, comme l'illustre la figure ci-dessous</p>
<h4>1.1. Crétion du croquis aléatoire</h4>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/lab/2/sketch.png"/>
<h5> figure1: Crétion du croquis aléatoire <h5/>

<h4>1.2. Conception du schéma du croquis</h4>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/lab/2/schematic.png"/>
<h5> figure2: Vue schématique du sketch.<h5/>


<b><h2>Partie 2: Communication </h2></b>
<h4>2.1. Développement du programme</h4>
<p>Dans le script ci-aprés, on cherche à développer un programme arduino qui peut lire une série d'octets et d'ajuster la fréquence du buzzer passif avec la série d'octets en question</p>

<h4>2.2. Test physique du programme</h4>
<p>une fois le LDR est connecté à l'Arduino, on a envoyé une valeur à l'ordinateur à l'aide du serial et puis on l'a tracée.</p>
<p>Comme indiqué dans les figures ci-aprés</p>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/lab/2/buzzerPassif.jpg"/>
 <h5>figure3: Connecter le buzzer à l'arduino<h5/>
 <img src=""/>
 <h5>figure3: Trace de la valeur<h5/>
 
 <h4>2.3. Connectez le LDR à l'Arduino</h4>
<img src=""/>
<P> <P/>
 <h5> figure4: Connection du LDR à l'Arduino <h5/>
 
 <h4>2.4. Sketch en fritzing</h4>
 <img src=""/>
<P> <P/>
 <h5> figure5: Sketch en fritzing <h5/>
