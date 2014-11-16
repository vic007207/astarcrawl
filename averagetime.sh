#!/bin/bash
#Reading in the files
echo "Filename"
#read FILE

TOTAL_TIME=0

#Performing calculations
RUNNING_TIME=`./a.out $FILE | tail -1`
TOTAL_TIME=`expr $RUNNING_TIME + $TOTAL_TIME`

RUNNING_TIME=`./a.out $FILE | tail -1`
TOTAL_TIME=`expr $RUNNING_TIME + $TOTAL_TIME`

RUNNING_TIME=`./a.out $FILE | tail -1`
TOTAL_TIME=`expr $RUNNING_TIME + $TOTAL_TIME`

RUNNING_TIME=`./a.out $FILE | tail -1`
TOTAL_TIME=`expr $RUNNING_TIME + $TOTAL_TIME`

RUNNING_TIME=`./a.out $FILE | tail -1`
TOTAL_TIME=`expr $RUNNING_TIME + $TOTAL_TIME`

AVERAGE_TIME=`expr $TOTAL_TIME / 5`
echo $AVERAGE_TIME
