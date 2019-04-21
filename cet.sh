#!/bin/bash
# author:SIMDD
# shasum -a 256 a.zip
# shc -f a.sh -o a
# https://speakerdeck.com/defeated/homebrew-publish-your-first-formula

config=~/.cetrc
version=v0.0.3

#help
if [ "$1" = "help" ]; then
    echo nothing
    exit 0
fi

#config
if [ "$1" = "config" ]; then
    vi $config
    exit 0
fi

#version
if [ "$1" = "version" ]; then
    echo $version
    exit 0
fi

default='#start config\n\n#echo test\n[test]\necho input username:\nread username\necho hello $username\n\n#end config'
if [ ! -f "$config" ]; then
    echo -e $default >$config
fi

#export
if [ "$1" = "export" ]; then
    cp $config $pwd.cetrca
    exit 0
fi

#import
if [ "$1" = "import" ]; then
    cp $2 $config
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
done <$config

eval "$cmd"

exit 0
