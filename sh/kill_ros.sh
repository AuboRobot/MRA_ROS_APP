#!/bin/sh

if test 0 -eq 0
then
  echo "close all"
fi

if ps -eo pid,cmd | awk '{print $1,$2}' | grep rviz
then
  kill -9 $(pgrep rviz)
fi

if ps -eo pid,cmd | awk '{print $1,$2}' | grep move
then
  kill -9 $(pgrep move)
fi

if ps -eo pid,cmd | awk '{print $1,$2}' | grep joint
then
  kill -9 $(pgrep joint)
fi

if ps -eo pid,cmd | awk '{print $1,$2}' | grep mra
then
  kill -9 $(pgrep mra)
fi

if ps -eo pid,cmd | awk '{print $1,$2}' | grep robot
then
  kill -9 $(pgrep robot)
fi

if ps -eo pid,cmd | awk '{print $1,$2}' | grep control
then
  kill -9 $(pgrep control)
fi


if ps -eo pid,cmd | awk '{print $1,$2}' | grep pyth
then
  kill -9 $(pgrep python)
fi

#This must be in the end of the file because of the filename
if ps -eo pid,cmd | awk '{print $1,$2}' | grep ros
then
  kill -9 $(pgrep ros)
fi
####



