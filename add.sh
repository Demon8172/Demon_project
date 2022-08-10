#!/bin/bash
cat command.txt
ls
read -p "Enter Command ::::" ok
src="$ok.cpp"



if [  -f "$ok" ]
then
  clear
"./$ok"
exit
fi

# another syntax #
[ ! -f "$src" ] && echo "$src file missing" ||   g++ $src -o $ok  "./$ok" && "./$ok"
