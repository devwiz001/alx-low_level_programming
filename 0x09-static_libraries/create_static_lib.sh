#!/bin/bash
ar rc liball.a *.o 
ranlib liball.a
chmod +x create_static_lib.sh

