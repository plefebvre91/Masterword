#!/bin/bash


./masterword > A
echo -n
echo "Soluion(s)":
grep -Fwf A masterword.dico
rm ./A
