# CPP Module 05 – Exceptions & Bureaucracy

## 🎯 Objectif du module

Le **CPP Module 05** a pour but d’introduire et de renforcer les notions suivantes :

- La gestion des **exceptions** en C++
- Le respect des **invariants** dans une classe
- L’utilisation de **classes abstraites**
- Le **polymorphisme**
- La conception orientée objet plus réaliste

Le module met en place un système de **bureaucratie** où des bureaucrates interagissent avec des formulaires soumis à des règles strictes.

---

## 🧠 Concepts clés abordés

### 🔹 Exceptions

Les exceptions sont utilisées pour :
- Gérer les erreurs sans arrêter brutalement le programme
- Garantir que les objets restent toujours dans un état valide

Dans ce module :
- Les exceptions héritent de `std::exception`
- La méthode `what()` est redéfinie pour fournir un message clair

---

### 🔹 Grades et invariants

Les **grades** sont des entiers compris entre :

- **1** → grade le plus élevé
- **150** → grade le plus bas

Toute tentative de :
- créer un objet avec un grade invalide
- modifier un grade hors limites

➡️ déclenche une exception.

Cela garantit que **l’état interne des objets est toujours cohérent**.

---

## 🧩 Exercice 00 – Bureaucrat

### 📌 Description

La classe `Bureaucrat` contient :
- un nom constant
- un grade

Fonctionnalités principales :
- incrémenter / décrémenter le grade
- lancer des exceptions si le grade sort des limites autorisées
- surcharge de l’opérateur `<<`

### 📎 Exceptions utilisées
- `GradeTooHighException`
- `GradeTooLowException`

---

## 🧩 Exercice 01 – Form

### 📌 Description

Introduction de la classe `Form` :
- possède un nom constant
- un état signé ou non
- un grade requis pour être signé
- un grade requis pour être exécuté

Un formulaire :
- peut être signé par un `Bureaucrat` suffisamment gradé
- ne peut pas être modifié directement

### 🔗 Interaction

La méthode `beSigned()` permet à un bureaucrate de signer un formulaire si son grade est suffisant, sinon une exception est levée.

---

## 🧩 Exercice 02 – Formes concrètes

### 📌 Description

Création de **formulaires spécialisés** héritant de `Form` :

- `ShrubberyCreationForm`
- `RobotomyRequestForm`
- `PresidentialPardonForm`

Chaque formulaire :
- définit ses propres grades requis
- implémente un comportement spécifique lors de l’exécution

### 🔒 Exécution

Un formulaire :
1. doit être signé
2. doit être exécuté par un bureaucrate avec un grade suffisant

Sinon, une exception est levée.

---

## ⚠️ Points importants

- Toutes les classes respectent la **forme canonique**
- Les exceptions sont utilisées uniquement pour les erreurs logiques
- Aucune fuite mémoire
- Le polymorphisme est exploité via des pointeurs sur la classe abstraite `Form`
- Les messages affichés sont clairs et explicites

---

## ✅ Conclusion

Ce module met en pratique une conception orientée objet plus avancée en C++ :

- Gestion robuste des erreurs
- Séparation claire des responsabilités
- Respect strict des règles métier
- Introduction à des patterns simples (factory)

Il prépare aux modules suivants en posant des bases solides sur :
- les exceptions
- l’héritage
- le polymorphisme

---
