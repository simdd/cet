#!/bin/bash
# author:SIMDD

#help
if [ "$1" = "help" ]; then
    echo nothing
    exit 0
fi

#config
if [ "$1" = "config" ]; then
    vi ".cetrc"
    exit 0
fi

#version
if [ "$1" = "version" ]; then
    echo v0.0.3
    exit 0
fi

#export
if [ "$1" = "export" ]; then
    cp .cetrc $pwd.cetrca
    exit 0
fi

#direct
execute=0
start=1
end=2
cmd=
newline=$'\n'

while read line; do
    if [ "$line" = "[$1]" ]; then
        execute=$start
    elif [ -n "$line" -a "$execute" = "$start" ]; then
        cmd="$cmd$newline$line"
    elif [ "$execute" = "$start" ]; then
        break
    fi
done <.cetrc

eval "$cmd"

exit 0
