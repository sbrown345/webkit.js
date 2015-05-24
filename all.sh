#!/bin/sh

./config.sh

if [ "$1" == "debug" ]; then
	echo "building webkit.js (debug)"
	ninja -C Debug
	./package-debug.sh
else 
	echo "building webkit.js (release)"
	ninja -C Release
	./package.sh
fi
