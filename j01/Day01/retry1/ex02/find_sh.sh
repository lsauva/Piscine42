# cherche tous les fichiers dont le nom se termine par .sh | remplace le chemin par rien | enleve l'extension
find . -type f -name "*.sh" | sed "s|.*/||" | cut -d . -f1
