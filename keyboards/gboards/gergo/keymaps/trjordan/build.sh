#!/bin/zsh -e

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

if [ $# -eq 0 ]
  then
    echo "No json file specified (e.g. trjordan_gergo.json)"
    exit 1
fi

filename="${1##*/}"
echo "extracted filename $filename"
cp $1 $SCRIPT_DIR/$filename
echo "copied $1 to $SCRIPT_DIR"
qmk json2c $SCRIPT_DIR/$filename > keymap.c
echo "created json file"
qmk compile -kb gboards/gergo -km trjordan
