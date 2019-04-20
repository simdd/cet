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

default='#start config\n\n#echo test\n[test]\necho hello\necho this is a test direct\n\n#git flow init\n#config userinfo\n[init]\ngit flow init\necho input username\nread username\necho input mail\nread mail\ngit config user.name $username\ngit config user.mail $mail\n\n#automatically pushed to the branch of release\n[release]\ngit branch -D release\ngit push origin :release\ngit checkout -b release\ngit push\ngit push --set-upstream origin release\n\n#end config'
if [ ! -f "$config" ]; then
    echo config
    echo -e $default >$config
fi

#export
if [ "$1" = "export" ]; then
    cp $config $pwd.cetrca
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
