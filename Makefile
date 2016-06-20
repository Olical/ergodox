.PHONY: bootstrap clean compile flash-left flash-right

bootstrap:
	sudo pacman -S --needed\
		git cmake make python libusb ctags\
		arm-none-eabi-binutils arm-none-eabi-gcc\
		arm-none-eabi-newlib dfu-util

clean:
	rm -rf ./Keyboards/ERGO-{L,R}

compile:
	mkdir -p ./Keyboards/ERGO-{L,R}
	cp ./layers/*.kll ./Keyboards/ERGO-L
	cp ./layers/*.kll ./Keyboards/ERGO-R
	cd ./Keyboards && ./ergodox.bash

flash-left:
	cd ./Keyboards/ERGO-L && sudo ./load

flash-right:
	cd ./Keyboards/ERGO-R && sudo ./load
