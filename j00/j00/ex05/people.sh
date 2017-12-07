#!/bin/bash
# recherche par chaine de charactere | filtre par debut de ligne  | selection 2nde colonne  | tri alpha inverse
ldapsearch -xLLL uid="z*" | grep "^cn:" | cut -d : -f2 | sort -r | cut -c2-
