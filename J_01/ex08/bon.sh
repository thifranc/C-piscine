#!/bin/sh
ldapsearch -xLLL cn | grep BON | wc -l | sed 's/ //g' 
