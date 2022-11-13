#!/bin/bash
vrai="\033[1;32m OK \033[0m"	# OK with some color
faux="\033[1;31m KO \033[0m"	# KO with different color
if [ $(basename $(realpath .)) = "test_gen" ]; then		# defines the work repo
	repo="../"
else
	repo="./"
fi
test_repo=$repo"test_gen/"								# defines the test repo (something with test_gen)
# if your script creates files, place them under $test_repo, and name them after TEMP_* so they will be automaticly removed


# Do stuff here


if [ 1 ]; then
	echo -e $vrai				# the test passes
else
	echo -e $faux				# the test doesnt
fi

