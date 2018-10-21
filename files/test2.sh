#!/bin/bash
#exclusiveOr test
./exclusiveOr test.txt testKey.txt

./exclusiveOr en-test.txt testKey.txt

diff en-en-test.txt test.txt