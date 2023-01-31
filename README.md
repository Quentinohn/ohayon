Polymorphisme : pratique
1) Implémentez une classe Charactercontenant les éléments suivants :
Membre de données :float speed_
Membre de données :float max_speed_
Constructeur par défaut : s'initialise speed_à 0 et max_speed_à 10
Fonction membre : void Accelerate()incrémente speed_de 1 (jusqu'à max_speed_)
Fonction membre : void Break()décrémente speed_de 1 (jusqu'à 0)
Getter en ligne :inline float speed() const
N'oubliez pas le destructeur et les tests ;)

2) Ajouter un membre de fonction virtuelle pure
Ajoutez la déclaration suivante à votre classe Character : virtual std::string WhatAmI() const = 0;

Expliquer ce qui se passe au moment de la compilation

3) Étendre la classe Character :
Implémenter des classes Marioet Yoshiqui spécialisent la classe Characteret la substitution WhatAmI():

Mario::WhatAmI()renverra la chaîne "Mario"
Yoshi::WhatAmI()renverra la chaîne "Yoshi"
4) Remplacer la fonction Accelerate()
Il est bien connu qu'un lézard en forme accélère plus vite qu'un gros plombier.

Remplacer en Yoshi::Accelerate()conséquence

5) Que la course commence
Remplissez un conteneur stl de votre choix avec au moins un Yoshi et un Mario et vérifiez que les Yoshis accélèrent effectivement plus rapidement (vous utiliserez à la fois des itérateurs et des boucles for basées sur la plage)

6) Nombre de crêtes
Chaque Yoshi peut avoir un nombre différent de crêtes.

Ajoutez un nouveau membre de données pour stocker ces informations. Ce membre sera attribué manuellement.

Yoshi::WhatAmI()renverra une chaîne de la forme "X à crête Yoshi" où X est le nombre de crêtes que ce Yoshi a

Vérifiez que vous n'avez pas de fuites de mémoire

Remise
Faites un clone nu de votre dépôt gitlab nommé <lastname>.git( par exemple parsons.git ) : git clone --bare <path/.git> <lastname>.git. Créez une archive polymorphism_<lastname>.tgz( par exemple polymorphism_parsons.tgz ) contenant le clone nu, téléchargez-la sur https://filesender.renater.fr/ et envoyez-nous le lien ( david.parsons@inria.fr et sebastien.valette@creatis.insa-lyon.fr ) .

Date limite : 31 janvier 2023 à la fin du laboratoire.