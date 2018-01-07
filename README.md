# touchberry_pi
by Pieter Hap

This program lets you control the Thumper using the Touchberry Pi provided by the teacher.

Be sure to change the ip address in the touchberry.cpp file to the ip address used by the Thumper.

Before you can use it you have to compile everything. To do so you first have to copy the entire folder to the Raspberry Pi using this command:

> scp -r touchberry_pi pi@ip-address:~

the ip address has to be changed to the ip address of the Raspberry Pi.

After that cd into the touchberry_pi folder on the Raspberry Pi and because of the Makefile included in this project the program can be easily compiled using this command:

> make

If it doesn't work, try using the following command first:

> make clean

When everything is compiled a bin folder should be made with a touchshield file inside it. Execute this file and you should be able to control the Thumper.
