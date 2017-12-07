# cherche les fichiers et rep et envoie les messages d'erreur dans /dev/null/| compte le nombre de lignes
find . -type f -o -type d 2>/dev/null | wc -l
