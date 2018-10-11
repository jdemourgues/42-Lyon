#/bin/sh
ifconfig -a | grep "ether " | cut -c8-
