#!/bin/bash
# author:SIMDD

execute=0
start=1
end=2
cmd=
newline=$'\n'

while read line; do
    if [ "$1" = "config" ]; then
        vi ".cetrc"
        break
    elif [ "$line" = "[$1]" ]; then
        execute=$start
    elif [ -n "$line" -a "$execute" = "$start" ]; then
        cmd="$cmd$newline$line"
    elif [ "$execute" = "$start" ]; then
        break
    fi
done <.cetrc

eval "$cmd"

exit 0
