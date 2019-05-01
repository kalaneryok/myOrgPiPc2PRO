#!/bin/sh
echo -----hello ak !!!
echo -----now start compile
echo "*****Clear Projrct*****"
#make distclean
echo "*****export arrch64 *****"
export CROSS_COMPILE=aarch64-linux-gnu-
echo "*****ORGpipc2 Config*****"
#make orangepi_pc2_defconfig
echo *****make*****
echo "make $1"
case $1 in
"")
	echo "please input args !!!"
	exit 8
;;
"defcfg")
make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- defconfig
;;
"pipc2cfg")
make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- pipc2_defconfig
;;
"img")
make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- Image dtbs -j4
;;
"dtbs")
make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- dtbs -j4
;;

*)
echo "check args!!!"
;;
esac
date
echo "-----Compile Ending"
