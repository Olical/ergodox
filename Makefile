.PHONY: bootstrap

c = ./compiler
in = ./layers
out = ./out

bootstrap:
	git clone git@github.com:kiibohd/kll.git compiler

compile:
	$(c)/kll.py\
		$(c)/layouts/mdergo1Overlay.kll\
		--default $(in)/0.kll\
		--partial $(in)/1.kll\
		--backend kiibohd\
		--templates\
			$(c)/templates/kiibohdKeymap.h\
			$(c)/templates/kiibohdDefs.h\
		--outputs\
			$(out)/generatedKeymap.h\
			$(out)/kll_defs.h
