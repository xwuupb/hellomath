#!/bin/bash
pi=$(../src/hellomath | awk '/π/ {print $NF}')
if [ "${pi}" = "3.141593" ]; then
  exit 0
else
  exit 1
fi
