#!/usr/bin/env bash
echo "===================="
ps -ef --forest | grep -i bash
echo "===================="
echo "PID USING $ FOR SCRIPT $0 ==> $$"
echo "PID USING BASHPID FOR SCRIPT $0 ==> $BASHPID"
echo

#STORING THE PID INTO A VARIABLE..

VAR_HASH=$(echo $$)
VAR_BASHPID=$(echo $BASHPID)

echo "VALUE OF VAR_HASH ==> $VAR_HASH"
echo "VALUE OF VAR_BASHPID ==> $VAR_BASHPID"
