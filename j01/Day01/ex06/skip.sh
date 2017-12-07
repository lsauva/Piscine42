#!/bin/bash
# liste le contenu du rep courant | sed lit les lignes une par une -n n'imprime pas sur la sortie std, la commande p imprime les lignes qui nous interessent
ls -l | sed -n 'p;n'
# awk permet de n'afficher que les lignes paires
# ls -l | awk "NR%2==0"
