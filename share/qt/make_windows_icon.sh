#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/waccoingold.png
ICON_DST=../../src/qt/res/icons/waccoingold.ico
convert ${ICON_SRC} -resize 16x16 waccoingold-16.png
convert ${ICON_SRC} -resize 32x32 waccoingold-32.png
convert ${ICON_SRC} -resize 48x48 waccoingold-48.png
convert waccoingold-16.png waccoingold-32.png waccoingold-48.png ${ICON_DST}

