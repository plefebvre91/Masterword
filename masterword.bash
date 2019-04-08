#!/bin/bash


./masterword > A
echo -n
echo "Mot(s) trouve(s)":
grep -Fwf A masterword.dico

