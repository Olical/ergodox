.PHONY: bootstrap clean compile flast-left flash-right

bootstrap:
	sudo pacman -S --needed git cmake make python libusb ctags dfu-util
	git clone git@github.com:kiibohd/controller.git

clean:
	rm -rf ./Keyboards/build

compile:
	mkdir -p ./Keyboards/build
	cp ./layers/*.kll ./Keyboards/build
	cd ./Keyboards && ./infinity.bash

flash-left:
	@echo noop

flash-right:
	@echo noop
