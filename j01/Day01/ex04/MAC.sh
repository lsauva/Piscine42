# affiche toute les infos sur les interfaces reseau | filtre les lignes avec ether | coupe la ligne autour de l'espace et garde la 2e partie
# ifconfig | grep ether | sed "s/ether//"
ifconfig | grep ether | cut -d ' ' -f2
# a tester avec des regexp !!! pour filtrer uniquement le format MAC
# ifconfig | grep -o -E ^([0-9A-Fa-f]{2}[:-]){5}([0-9A-Fa-f]{2})$
