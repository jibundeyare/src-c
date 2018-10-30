# Cours de langage C

Le but de ce cours est d'aborder des notions fondamentales de programmtion :

- le code source
- la compilation
- les commentaires
- le code style
- les données de l'utilisateur
- les variables et les types de données
- les structures conditionnelles (les blocs de type `if` et `switch`)
- les boucles (les blocs de type `for` et `while`)
- les fonctions

## Pré-requis

- gcc (paquet `build-essential` avec Debian)

## Compilation

La commande suivante permet de compiler le code source du fichier `hello.c` en un fichier exécutable `hello` et le stocker dans un dossier `bin` :

    gcc -o bin/hello hello.c

Le script `build.sh` permet de compiler tous les fichiers ayant une extension `.c`.

## Exécution

Pour exécuter le fichier binaire `hello` qui vient d'être compilé :

    bin/hello

