#!/bin/bash

while read create; do
  touch "$create"
done < create.sh