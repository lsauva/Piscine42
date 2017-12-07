#!/bin/sh
#ldapsearch -xLLL uid=lsauvage | grep dn
ldapwhoami -Q | cut -d : -f2
