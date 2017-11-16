# L'alimentation

Il s'avère que le bloc d'alimentation FSP-180 à une protection qui ne permet pas de la démarrer uniquement avec un pont sur le POWER-ON.

Nous avons donc récupéré une alimentation d'un vieux Shuttle pour le moment.
 

## Récupération d'un prise femelle pour le connecteur de l'alimentation

Déssoudage de la prise femelle d'une vielle carte mère

![Prise sur la carte mère](connecteur-1.jpg)

![Prise désoudée](connecteur-2.jpg)

## Gravage d'une petite plaque pour souder la prise d'alimentation

![Plaque gravée](plaque-connecteur-1.jpg)

Soudure de la prise

![Plaque gravée](plaque-connecteur-2.jpg)

![Plaque gravée](plaque-connecteur-3.jpg)

Soudure de deux cables sur les pin 16 et 17, reliés à un interrupteur. 

![Mise en place de l'interrupteur](connection-interrupteur.jpg)

## Alimentation de l'arduino

Récupération d'un cable d'une alimentation secteur, recherche du positif qui est la broche **intérieure** de la prise jack.

Lorsque l'arduino est alimenté par le régulateur, il faut lui transmettre une tension conseillée entre 7V et 12V (les limites sont 6V et 20V). On branche donc le cable sur une sortie 12V de l'alimentation.

Dans notre cas on a utilisé la broche 10 (12V) et la broche 7 pour la masse.

![Connecteur arduino](alimentation-arduino-1.jpg)

![Connecteur arduino](alimentation-arduino-2.jpg)


