# Programmation Modulaire Version Langage C
La programmation modulaire est une approche qui consiste à diviser un programme en plusieurs **modules** indépendants et réutilisables. Chaque module a une responsabilité spécifique, ce qui améliore l'organisation, la lisibilité, la maintenabilité et la réutilisabilité du code.
### **Avantages de la programmation modulaire :**
Cette approche modulaire rend le code plus structuré, facile à lire, et maintenable.

1. **Lisibilité accrue** : Le code est mieux organisé et plus facile à comprendre.
2. **Réutilisabilité** : Les modules peuvent être réutilisés dans d'autres projets ou parties du code.
3. **Maintenance simplifiée** : Les bugs sont plus faciles à identifier et à corriger, car chaque module est isolé.
4. **Travail collaboratif** : Plusieurs développeurs peuvent travailler sur différents modules sans se chevaucher.
5. **Testabilité** : Les modules individuels peuvent être testés séparément.

Voici un exemple d'utilisation de plusieurs fichiers C avec un fichier principal `main.c`, qui importe des fonctions et des constantes définies dans d'autres fichiers.

---

### Structure du projet

```
projet/
│
├── main.c          # Fichier principal
├── math_utils.c    # Module pour les fonctions mathématiques
├── math_utils.h    # En-tête pour les fonctions mathématiques
├── string_utils.c  # Module pour les manipulations de chaînes
├── string_utils.h  # En-tête pour les manipulations de chaînes
└── config.h        # Fichier pour les configurations
```

---

### Compilation

Vous devez compiler tous les fichiers `.c` et les lier ensemble. Voici la commande pour GCC :

```bash
gcc -o programme main.c math_utils.c string_utils.c
```

---

### Exécution

Une fois le programme compilé, exécutez-le avec :
```bash
./programme
```

---

### Résultat attendu

Lorsque vous exécutez le programme, voici ce que vous obtenez :
```
Addition: 5 + 3 = 8
Soustraction: 5 - 3 = 2
Phrase originale: bonjour le monde
Phrase capitalisée: Bonjour Le Monde
Nombre de mots: 3
Application: Mon Application C (Version: 1.0.0)
```

---

### Explications

1. **math_utils.c / .h** :
   - Définit les fonctions mathématiques (addition, soustraction).
   - Le fichier `.h` déclare les fonctions pour être utilisées dans `main.c`.

2. **string_utils.c / .h** :
   - Définit les fonctions pour manipuler les chaînes de caractères (capitalisation, comptage des mots).
   - Le fichier `.h` expose les prototypes des fonctions.

3. **config.h** :
   - Définit des constantes pour la configuration.

4. **main.c** :
   - Fichier principal qui utilise les fonctions et constantes des autres modules.

