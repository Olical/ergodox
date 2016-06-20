.PHONY: bootstrap clean compile flast-left flash-right

bootstrap:
	sudo pacman -S --needed git cmake make python libusb ctags dfu-util
	git clone git@github.com:kiibohd/controller.git

clean:
	rm -r ./build

compile:
	mkdir -p ./build
	cd ./build\
		&& cmake\
			-DCHIP=mk20dx128vlf5 -DScanModule=MD1 -DMacroModule=PartialMap\
			-DOutputModule=pjrcUSB -DDebugModule=full -DBaseMap=defaultMap\
			-DDefaultMap="md1Overlay stdFuncMap" -DPartialMaps="hhkbpro2"\
			../controller\
		&& make

flash-left:
	@echo noop

flash-right:
	@echo noop
