#!/bin/bash
#run tests
make caesar

chmod 755 test1.sh

./test1.sh

make exclusiveOr

chmod 755 test2.sh

./test2.sh